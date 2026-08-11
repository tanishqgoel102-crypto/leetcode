# Write your MySQL query statement below
SELECT c.name as Customers
FROM customers as c
LEFT JOIN Orders as o
ON c.id=o.customerId 
WHERE o.customerId is NULL;