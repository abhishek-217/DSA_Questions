# Write your MySQL query statement below

-- select MAX(salary) from Employee
-- Where salary < (select MAX(salary) from Employee);

SELECT MAX(salary) as SecondHighestSalary
FROM employee 
WHERE salary < (SELECT MAX(salary) FROM employee);