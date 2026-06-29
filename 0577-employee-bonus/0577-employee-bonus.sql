# Write your MySQL query statement below
select Employee.name,Bonus.bonus from Employee
LEFT JOIN Bonus on Employee.empID=Bonus.empID
where bonus<1000 OR Bonus IS NULL;