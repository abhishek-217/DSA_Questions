# Write your MySQL query statement below
Select p.project_id , Round(avg(e.experience_years),2) as average_years
from Project p
left join Employee e

on p.employee_id = e.employee_id
Group by project_id;