# Write your MySQL query statement below
Select user_id, max(time_stamp) as last_stamp 
From Logins 
Where year(time_stamp) = 2020
Group By user_id;