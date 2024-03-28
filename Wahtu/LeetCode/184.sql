# Write your MySQL query statement below
SELECT Department.name as Department, Employee.name as Employee, Employee.salary as Salary FROM
Department JOIN Employee ON Employee.departmentId = Department.id
WHERE(departmentId, salary) IN (SELECT departmentId, MAX(salary) FROM Employee
GROUP BY departmentId);
