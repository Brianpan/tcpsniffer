# 1. simple deletion with where clause
DELETE FROM feed
  WHERE user_id = 33 OR user2_id = 22;

#2. deletion with where and in clause
DELETE FROM project_components WHERE id IN (1,2,3,4,5, 200);