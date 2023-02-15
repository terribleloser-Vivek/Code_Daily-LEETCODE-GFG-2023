# Write your MySQL query statement below
select id, visit_date, people
from stadium
where people>=100
and
((id+1 in (select id from stadium where people>=100) and id+2 in (select id from stadium where people>=100))
OR (id+1 in (select id from stadium where people>=100) and id-1 in (select id from stadium where people>=100))
OR (id-1 in (select id from stadium where people>=100) and id-2 in (select id from stadium where people>=100)))
;