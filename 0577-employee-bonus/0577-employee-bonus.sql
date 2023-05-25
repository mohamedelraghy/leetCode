# Write your MySQL query statement below
SELECT name, bonus
FROM Employee E
LEFT JOIN Bonus B
ON E.empID = B.empID
WHERE bonus < 1000 
OR bonus IS NULL