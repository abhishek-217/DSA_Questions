# Write your MySQL query statement below


select name as Customers from customers
left join Orders
On customers.id = Orders.customerId
Where Orders.customerId is null;
