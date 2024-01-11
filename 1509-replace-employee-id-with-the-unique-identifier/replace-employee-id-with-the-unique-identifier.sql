# Write your MySQL query statement below
select Eu.unique_id, E.name from Employees as E LEFT JOIN EmployeeUNI as Eu on Eu.id=E.id;