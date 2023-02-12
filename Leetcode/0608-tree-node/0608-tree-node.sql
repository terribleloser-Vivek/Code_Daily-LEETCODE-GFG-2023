select id as 'Id',
case 
        WHEN tree.id = (SELECT id FROM tree  WHERE p_id IS NULL)
          THEN 'Root'
        WHEN tree.id IN (SELECT p_id FROM tree )
          THEN 'Inner'
        ELSE 'Leaf'
 end as type
 from Tree
 order by 'Id' asc;