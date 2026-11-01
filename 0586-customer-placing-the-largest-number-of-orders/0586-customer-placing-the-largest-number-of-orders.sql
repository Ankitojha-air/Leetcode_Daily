# Write your MySQL query statement below
Select customer_number
from Orders
group by customer_number
Order by count(*) desc
LIMIT 1;