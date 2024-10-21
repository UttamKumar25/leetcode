# Write your MySQL query statement below
# select salary as SecondHighestSalary from Employee order by salary desc limit 1 offset 1
SELECT MAX(salary) AS SecondHighestSalary 
FROM Employee
WHERE salary < (SELECT MAX(salary) FROM Employee);