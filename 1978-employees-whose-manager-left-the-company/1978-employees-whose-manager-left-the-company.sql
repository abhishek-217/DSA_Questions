# Write your MySQL query statement below
select e1.employee_id
from Employees e1

left join Employees e2
ON e1.manager_id = e2.employee_id
where e1.salary < 30000
AND e1.manager_id IS NOT NULL
  AND e2.employee_id IS NULL
  
  order by employee_id;