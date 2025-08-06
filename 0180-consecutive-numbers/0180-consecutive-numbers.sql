# Write your MySQL query statement below

-- select  num as ConsecutiveNums from Logs

SELECT DISTINCT l1.num as ConsecutiveNums
FROM logs l1
JOIN logs l2 ON l1.id = l2.id - 1 AND l1.num = l2.num
JOIN logs l3 ON l1.id = l3.id - 2 AND l1.num = l3.num;
