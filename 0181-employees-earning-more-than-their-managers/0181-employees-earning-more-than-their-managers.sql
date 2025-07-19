# Write your MySQL query statement below

Select e.name as Employee
from Employee e
INNER JOIN Employee m
ON e.managerId = m.id
where e.salary > m.salary

