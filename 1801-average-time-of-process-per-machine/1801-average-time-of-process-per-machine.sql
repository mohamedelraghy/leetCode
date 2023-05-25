# Write your MySQL query statement below
SELECT ACtivity.machine_id, 
ROUND(AVG(a.timestamp - Activity.timestamp) ,3) processing_time 
FROM Activity
JOIN Activity a
ON Activity.machine_id = a.machine_id
and Activity.process_id = a.process_id
and Activity.timestamp < a.timestamp
GROUP BY Activity.machine_id