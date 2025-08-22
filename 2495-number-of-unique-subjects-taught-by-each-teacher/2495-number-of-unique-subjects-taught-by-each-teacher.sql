# Write your MySQL query statement below
Select teacher_id,
        Count(DISTINCT subject_id) AS cnt
FROM Teacher
GROUP BY teacher_id;