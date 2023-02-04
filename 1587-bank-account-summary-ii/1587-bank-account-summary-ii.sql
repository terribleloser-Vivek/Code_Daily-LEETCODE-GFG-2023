# Write your MySQL query statement below
SELECT name,SUM(Transactions.amount) "balance"
from Users
left join Transactions 
ON users.account=Transactions.account
GROUP BY name HAVING balance>10000;