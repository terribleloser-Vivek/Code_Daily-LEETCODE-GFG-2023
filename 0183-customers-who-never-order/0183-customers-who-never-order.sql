# Write your MySQL query statement below
SELECT name as Customers
FROM Customers 
WHERE id not IN (SELECT customerId from Orders);