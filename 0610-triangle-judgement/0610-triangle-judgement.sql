# Write your MySQL query statement below
select x, y, z , 
CASE
  when x+y>z and y+z>x and z+x>y Then 'Yes'
  else 'No'
  END AS triangle
  from Triangle