# Write your MySQL query statement below
SELECT P.product_id, ROUND(SUM(price * units) / SUM(units), 2) average_price
FROM Prices P
JOIN UnitsSold U
ON P.product_id = U.product_id
AND purchase_date between start_date AND end_date
GROUP BY P.product_id
