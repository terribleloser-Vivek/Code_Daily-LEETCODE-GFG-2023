# Write your MySQL query statement below
SELECT patient_id,patient_name,conditions
FROM Patients
where conditions like 'DIAB1%' or conditions like '% DIAB1%' ;
