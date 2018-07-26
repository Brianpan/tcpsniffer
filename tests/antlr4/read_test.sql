# 1. simple select with where, limit, offset
SELECT s.name, s.id from students AS s WHERE name='brian' AND id > 10234
LIMIT 30 OFFSET 20;

# 2. simple select with regexp
SELECT U.id, U.screen_name, U.username
  FROM users U
  WHERE U.screen_name REGEXP '^[A-Z]';

# 3. simple select with group by
select count(id), name
  from countries 
  where salary_median > 1234566
  GROUP BY name;

# 4. simple join
SELECT c.name, COUNT(c.id) from students as s
INNER JOIN course_studentships as cs on s.id = cs.sid INNER JOIN courses as c on cs.cid = c.id
WHERE c.place = 'Taipei'
GROUP BY c.name ;

# 5. join with nested query
SELECT s.name, c.name from students as s
INNER JOIN course_studentships as cs on s.id = cs.sid
INNER JOIN 
( select * from courses 
  where id in (1,2,3,4,5)
) as c ON cs.cid = c.id
WHERE c.rating > 6.5;

# 6. join with nested query with group by
SELECT s.name, c.name from students as s
INNER JOIN course_studentships as cs on s.id = cs.sid
INNER JOIN 
( select * from courses 
  where id in (
  	select count(c.id), c.id from courses as c
  	inner join pp on c.id = pp.cid
  	GROUP BY c.id HAVING COUNT(*) > 2000
  )
) as c ON cs.cid = c.id
WHERE c.rating > 6.5;

# 7. select with union (a real example in hackaday)
SELECT id, owner_id, type
FROM projects
WHERE
    owner_id = 22 AND
    deleted = 0 AND
    hidden = 0
UNION
SELECT project_id AS id, owner_id, type
FROM project_contributors PC
JOIN projects P ON PC.project_id = P.id
WHERE
    PC.user_id = 33 AND
    P.deleted = 0 AND
    PC.role IN ('admin', 'contributor')
UNION
SELECT project_id AS id, owner_id, type
FROM project_followers PF
JOIN projects P ON PF.project_id = P.id
WHERE
    user_id = 44 AND
    P.deleted = 0 AND
    P.hidden = 0