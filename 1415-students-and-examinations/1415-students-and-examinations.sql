# Write your MySQL query statement below

SELECT S.student_id, S.student_name, U.subject_name, COUNT(E.subject_name) attended_exams
FROM Students S
JOIN Subjects U
LEFT JOIN Examinations E
ON S.student_id = E.student_id
AND U.subject_name = E.subject_name
GROUP BY S.student_id, U.subject_name
ORDER BY S.student_id, U.subject_name