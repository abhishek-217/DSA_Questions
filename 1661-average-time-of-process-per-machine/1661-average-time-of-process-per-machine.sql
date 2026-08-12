# Write your MySQL query statement below
Select a.machine_id , ROUND(AVG(ac.timestamp -a.timestamp), 3) as processing_time

from Activity a
Left join Activity ac

ON a.machine_id = ac.machine_id AND a.process_id = ac.process_id AND 
a.activity_type = "start" and ac.activity_type = "end"

group by machine_id;

