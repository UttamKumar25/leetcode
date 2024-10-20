# Write your MySQL query statement below
#https://leetcode.com/problems/rising-temperature/solutions/5884157/real-explained-step-by-step-9-50-all-sql50

SELECT today.id
FROM Weather yesterday 
CROSS JOIN Weather today

WHERE DATEDIFF(today.recordDate,yesterday.recordDate) = 1
    AND today.temperature > yesterday.temperature