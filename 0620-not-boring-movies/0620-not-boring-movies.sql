# Write your MySQL query statement below
select c.id, c.movie, c.description, c.rating

from Cinema c
Where c.id % 2 != 0 AND c.description != "boring"
Order by rating DESC;