# Write your MySQL query statement below
SELECT e.name as Employee
From Employee e join Employee m 
On e.managerId = m.id
Where m.salary < e.salary