# Write your MySQL query statement below

select e.name, b.bonus
from Employee e
Left Join Bonus b

ON e.empId = b.empId
Where b.bonus < 1000 || b.bonus is null;