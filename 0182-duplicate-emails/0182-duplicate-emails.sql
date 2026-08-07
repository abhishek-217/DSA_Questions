# Write your MySQL query statement below
select email as Email
-- count(*)
from Person

group by email
having count(*) > 1;