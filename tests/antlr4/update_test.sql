# 1. update with join (a real example from hackaday)
UPDATE projects P
INNER JOIN project_followers PF ON P.id = PF.project_id
SET P.follower_count = (P.follower_count - 1)
WHERE PF.user_id = 32;

# 2. simple update
update students s
set grade = grade + 10, pass=1
WHERE score >= 50 AND score < 60;