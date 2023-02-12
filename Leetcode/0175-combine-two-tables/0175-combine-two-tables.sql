# Write your MySQL query statement below
Select p.firstname,p.lastname,a.city,a.state
FROM person as p
left join address as a
on p.personId = a.personId ;