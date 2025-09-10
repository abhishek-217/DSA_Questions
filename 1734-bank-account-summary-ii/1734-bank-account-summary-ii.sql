# Write your MySQL query statement below

select u.name, SUM(t.amount) as balance
from Users u
JOIN Transactions t
ON u.account = t.account
Group by u.account 
HAVING balance > 10000