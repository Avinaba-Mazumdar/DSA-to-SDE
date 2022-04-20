SELECT (
     SELECT DISTINCT Salary FROM Employee
     ORDER BY Salary desc LIMIT 1 OFFSET 1
) AS SecondHighestSalary;