# Write your MySQL query statement below
SELECT customer_id, Count(V.visit_id) count_no_trans
FROM Visits V
LEFT JOIN Transactions T
ON V.visit_id = T.visit_id
WHERE T.transaction_id IS NULL
GROUP BY customer_id