# Write your MySQL query statement below
SELECT name, bonus
FROM Employee E
LEFT JOIN Bonus B
ON E.empID = B.empID
WHERE ifnull(b.bonus, 0) < 1000;