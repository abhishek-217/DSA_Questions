# Write your MySQL query statement below

-- select MAX(salary) from Employee
-- Where salary < (select MAX(salary) from Employee);

Select MAX(salary) as SecondHighestSalary
from Employee
where salary < (
    Select Max(salary)
    from Employee
);