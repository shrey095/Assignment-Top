use Assignment;
-- 1.Create table given below: Employee and IncentiveTable

create table Employee(
     Employee_id int primary key auto_increment, 
     First_name text,
     Last_name text,
     Salary int,
     Joining_date varchar(100),
     Department text
);

select * from Employee;
insert into Employee values(1,"John","Abraham","1000000","1-Jan-13 12.00.00 AM","Banking");
insert into Employee values(2,"Michel","Clarke","800000","1-Jan-13 12.00.00 AM","Insurance");
insert into Employee values(3,"Roy","Thomas","700000","1-Jan-13 12.00.00 AM","Banking");
insert into Employee values(4,"Tom","Jose","600000","1-Jan-13 12.00.00 AM","Insurance");
insert into Employee values(5,"Jerry","Pinto","650000","1-Jan-13 12.00.00 AM","Insurance");
insert into Employee values(6,"Philip","Mathew","750000","1-Jan-13 12.00.00 AM","Services");
insert into Employee values(7,"TestName1","123","650000","1-Jan-13 12.00.00 AM","Services");
insert into Employee values(8,"TestName2","Lname%","600000","1-Jan-13 12.00.00 AM","Insurance");

select * from Employee;
create table Incentive(
    Employee_ref_id int,
    Incentive_date varchar(100),
    Incentive_amount varchar(10),
     foreign key Incentive(Employee_ref_id) references Employee(Employee_id)
);

select * from Incentive;
insert into Incentive values(1,"01-FEB-13","5000");
insert into Incentive values(2,"01-FEB-13","3000");
insert into Incentive values(3,"01-FEB-13","4000");
insert into Incentive values(1,"01-Jan-13","4500");
insert into Incentive values(2,"01-FEB-13","3500");

-- a.Get First_Name from employee table using Tom name “Employee Name”.

select first_name from Employee where first_name = "Tom";

-- b.Get FIRST_NAME, Joining Date, and Salary from employee table.

select first_name,Joining_date,Salary from Employee;

-- c.Get all employee details from the employee table order by First_Name
-- Ascending and Salary descending?

select * from Employee order by first_name asc;

select * from Employee order by Salary desc;

-- d.Get employee details from employee table whose first name contains ‘J’

select * from Employee where first_name like '%j%';

-- e.Get department wise maximum salary from employee table order by salary ascending?

select Department,Salary from Employee Order by Salary desc; 

-- f.Select first_name, incentive amount from employee and incentives table
--     forthose employees who have incentives and incentive amount greater than
--     3000

select Employee.first_name,Incentive.Incentive_amount from Employee inner join Incentive on Employee_id=Employee_ref_id where Incentive_amount > 3000;

-- 10.Create After Insert trigger on Employee table which insert records in view table


create table viewtable(
     Employee_id int primary key auto_increment, 
     First_name text,
     Last_name text,
     Salary int,
     Joining_date varchar(100),
     Department text
);
     create TRIGGER  employee_data
 AFTER INSERT ON employee FOR EACH ROW 
    INSERT INTO viewtable(Employee_id,First_name,Last_name,Salary,Joining_date,Department) 
    VALUES(new.Employee_id,new.First_name,new.Last_name,new.Salary,new.Joining_date,new.Department);
   
-- insert a new record into employee
	insert into employee(Employee_id,First_name,Last_name,Salary,Joining_date,Department)
    values(101,'John','Doe','60000','1-Feb-13 12.00.00 AM','IT');

select * from viewtable;





