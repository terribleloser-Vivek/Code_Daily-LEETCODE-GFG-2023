# Write your MySQL query statement below
Select user_id, concat(UPPER(SUBSTR(name,1,1)),lower(SUBSTR(name,2))) as name
from Users 
order by user_id;
