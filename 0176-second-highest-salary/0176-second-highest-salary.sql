# Write your MySQL query statement below
SELECT max(salary) as SecondHighestSalary 
from Employee where salary<(Select max(salary) from Employee)