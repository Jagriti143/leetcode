# Write your MySQL query statement below
select email as Email from Person
GROUP by email HAVING count(email)>1;
