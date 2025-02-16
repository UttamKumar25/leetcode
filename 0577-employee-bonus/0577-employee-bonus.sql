# Write your MySQL query statement below
Select e.name as name, b.bonus as bonus
from Employee e LEFT JOIN  Bonus b
ON e.empId=b.empId
where b.bonus <1000 OR Bonus IS NULL