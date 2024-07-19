CREATE TABLE Employee (
    EMPLOYEE_ID INT NOT NULL,
    FIRST_NAME VARCHAR(50) NOT NULL,
    LAST_NAME VARCHAR(50) NOT NULL,
    EMAIL VARCHAR(50) NOT NULL,
    PHONE_NUMBER VARCHAR(50) NOT NULL,
    HIRE_DATE DATE NOT NULL,
    JOB_ID VARCHAR(50) NOT NULL,
    SALARY DOUBLE NOT NULL,
    COMMISSION_PCT FLOAT,
    MANAGER_ID INT,
    DEPARTMENT_ID INT
);

alter table employee;
alter table employee modify HIRE_DATE varchar(30);
UPDATE employee 
SET 
    HIRE_DATE = DATE_FORMAT(HIRE_DATE, '%D-%B-%Y');


insert into employee value(100,"Steven","King","SKING","515.123.4567","17-JUL-87","AD_PRES",24000,NULL,NULL,90);
insert into employee value(101,"Neena","Kochhar","NKOCHHAR","515.123.4568","21-SEP-89","AD_VP",17000,NULL,100,90);
insert into employee value(102,"Lex","De Haan","LDEHAAN","515.123.4569","13-JAN-93","AD_VP",17000,NULL,100,90);
insert into employee value(103,"Alexander","Hunold","AHUNOLD","590.423.4567","03-JAN-90","IT_PROG",9000,NULL,102,60);
insert into employee value(104,"Bruce","Ernst","BERNST","590.423.4568","21-MAY-91","IT_PROG",6000,NULL,103,60);
insert into employee value(107,"Diana","Lorentz","DLORENTZ","590.423.5567","07-FEB-99","IT_PROG",4200,NULL,103,60);
insert into employee value(124,"Kevin","Mourgos","KMOURGOS","650.123.5234","16-NOV-99","ST_MAN",5800,NULL,100,50);
insert into employee value(141,"Trenna","Rajs","TRAJS","650.121.8009","17-OCT-95","ST_CLERK",3500,NULL,124,50);
insert into employee value(142,"Curtis","Davies","CDAVIES","650.121.2994","29-JAN-97","ST_CLERK",3100,NULL,124,50);
insert into employee value(143,"Randall","Matos","RMATOS","650.121.2874","15-MAR-98","ST_CLERK",2600,NULL,124,50);
insert into employee value(144,"Peter","Vargas","PVARGAS","650.121.2004","09-JUL-98","ST_CLERK",2500,NULL,124,50);
insert into employee value(149,"Eleni","Zlotkey","EZLOTKEY","011.44.1344.429018","29-JAN-00","SA_MAN",10500,0,100,80);
insert into employee value(174,"Ellen","Abel","EABEL","011.44.1644.429267","11-MAY-96","SA_REP",11000,0,149,80);
insert into employee value(176,"Jonathon","Taylor","JTAYLOR","011.44.1644.429265","24-MAR-98","SA_REP",8600,0,149,80);
insert into employee value(178,"Kimerely","Grant","KGRANT","011.44.1644.429263","24-MAY-99","SA_REP",7000,0,149,NULL);
insert into employee value(200,"Jennifer","Whalen","JWHALEN","515.123.4444","17-SEP-87","AD_ASST",4400,NULL,101,10);
insert into employee value(201,"Michael","Hartstein","MHARTSTE","515.123.5555","17-FEB-96","MK_MAN",13000,NULL,100,20);
insert into employee value(202,"Pat","Fay","PFAY","603.123.6666","17-AUG-97","MK_REP",6000,NULL,201,20);
insert into employee value(205,"Shelley","Higgins","SHIGGINS","515.123.8080","07-JUN-94","AC_MGR",12000,NULL,101,110);
insert into employee value(206,"William","Gietz","WGIETZ","515.123.8181","07-JUN-94","AC_ACCOUNT",8300,NULL,205,110);

SELECT 
    *
FROM
    employee;
SELECT 
    FIRST_NAME
FROM
    employee;
SELECT 
    LAST_NAME, HIRE_DATE
FROM
    employee;
SELECT 
    FIRST_NAME, SALARY, SALARY + 1500 AS NEW_SALARY
FROM
    employee;
SELECT 
    LAST_NAME, SALARY, SALARY * 12 AS ANNUAL_SALARY
FROM
    employee;
SELECT 
    FIRST_NAME, SALARY, SALARY / 30 AS DAILY_SALARY
FROM
    employee;
-- select FIRST_NAME,LAST_NAME,FIRST_NAME||' '||LAST_NAME as FULL_NAME from employee;
-- select FIRST_NAME,JOB_ID,FIRST_NAME||"works as"||JOB_ID as FJ from employee;
SELECT 
    FIRST_NAME,
    LAST_NAME,
    CONCAT(FIRST_NAME, '  ', LAST_NAME) AS FULL_NAME
FROM
    employee;
SELECT 
    FIRST_NAME,
    JOB_ID,
    CONCAT(FIRST_NAME, 'works as  ', JOB_ID) AS FJ
FROM
    employee;
SELECT 
    LAST_NAME,
    SALARY,
    CONCAT(LAST_NAME,
            '  monthly salary is Rs. ',
            SALARY) AS LS
FROM
    employee;
SELECT 
    *, (SALARY * 12) AS ANNUAL_SALARY
FROM
    employee;
SELECT 
    FIRST_NAME, ((SALARY + 1000) * 12) AS NEW_ANNUAL_SALARY
FROM
    employee;

SELECT 
    *
FROM
    employee
LIMIT 5 OFFSET 15;
SELECT 
    *
FROM
    employee
WHERE
    DEPARTMENT_ID IN (90);
SELECT 
    *
FROM
    employee
WHERE
    DEPARTMENT_ID NOT IN (90);
SELECT 
    *
FROM
    employee
WHERE
    DEPARTMENT_ID IN (90 , 60);
SELECT 
    *
FROM
    employee
WHERE
    DEPARTMENT_ID NOT IN (90 , 60);

SELECT 
    MIN(SALARY)
FROM
    employee;
SELECT 
    DEPARTMENT_ID, MIN(SALARY)
FROM
    employee
GROUP BY DEPARTMENT_ID;
SELECT 
    DEPARTMENT_ID, JOB_ID, MIN(SALARY)
FROM
    employee
GROUP BY DEPARTMENT_ID , JOB_ID;
SELECT 
    DEPARTMENT_ID, MAX(SALARY)
FROM
    employee
GROUP BY DEPARTMENT_ID;
SELECT 
    DEPARTMENT_ID, AVG(SALARY)
FROM
    employee
GROUP BY DEPARTMENT_ID;
SELECT 
    DEPARTMENT_ID, SUM(SALARY)
FROM
    employee
GROUP BY DEPARTMENT_ID;
SELECT 
    DEPARTMENT_ID, COUNT(*)
FROM
    employee
GROUP BY DEPARTMENT_ID;

alter table employee modify SALARY double;
-- alter table employee rename column NAME to FIRST_NAME;
alter table employee add column FULL_NAME varchar(50); 
alter table employee drop column FULL_NAME;
UPDATE employee 
SET 
    FULL_NAME = 'Steven King'
WHERE
    EMPLOYEE_ID = 100;
 
SELECT 
    *
FROM
    employee
WHERE
    MANAGER_ID IN (100 , 124, 149);
SELECT 
    *
FROM
    employee
WHERE
    DEPARTMENT_ID IN (90 , 110, 10);
SELECT 
    *
FROM
    employee
WHERE
    MANAGER_ID NOT IN (100 , 124, 149);
SELECT 
    FIRST_NAME, JOB_ID
FROM
    employee
WHERE
    JOB_ID IN ('ST_CLERK' , 'AD_VP', 'SA_REP');
SELECT 
    LAST_NAME, DEPARTMENT_ID, JOB_ID
FROM
    employee
WHERE
    (DEPARTMENT_ID , JOB_ID) IN ((50 , 'ST_CLERK') , (80 , 'SA_REP'));
SELECT 
    *
FROM
    employee
WHERE
    (DEPARTMENT_ID , MANAGER_ID) NOT IN ((60 , 103) , (80 , 149), (110 , 101));
SELECT 
    LAST_NAME, DEPARTMENT_ID, JOB_ID, MANAGER_ID
FROM
    employee
WHERE
    (DEPARTMENT_ID , JOB_ID, MANAGER_ID) IN ((50 , 'ST_CLERK', 124) , (60 , 'IT_PROG', 103));
SELECT 
    *
FROM
    employee
WHERE
    JOB_ID NOT IN ('IT_PROG' , 'AD_VP', 'SA_REP', 'MK_MAN');
SELECT 
    *
FROM
    employee
WHERE
    (DEPARTMENT_ID , JOB_ID) NOT IN ((90 , 'AD_PRES') , (80 , 'SA_REP'), (60 , 'IT_PROG'));
SELECT 
    *
FROM
    employee
WHERE
    (DEPARTMENT_ID , MANAGER_ID, JOB_ID) IN ((50 , 124, 'ST_CLERK') , (60 , 103, 'IT_PROG'),
        (90 , 100, 'AD_VP'));

SELECT 
    LAST_NAME
FROM
    employee
WHERE
    LAST_NAME LIKE '%e_';
SELECT 
    LAST_NAME
FROM
    employee
WHERE
    LAST_NAME LIKE '%e%';
SELECT 
    LAST_NAME
FROM
    employee
WHERE
    LAST_NAME LIKE '_e%';

grant select,insert,update,delete,alter,drop on emp.employee to Rahul;
revoke delete on emp.employee from Rahul;

create role student;
create user 'shrey' identified by 'abc@123' default role 'student';
grant select,update on emp.employee to shrey;
revoke insert,delete on emp.employee from shrey;

CREATE TABLE person (
    person_id INT NOT NULL,
    first_name VARCHAR(25) NOT NULL,
    last_name VARCHAR(25) NOT NULL,
    age INT,
    PRIMARY KEY (person_id)
);
-- describe person;

insert into person values(1,'Jignesh','Kumar',25);
insert into person values(2,'Shrey','Shah',20);
insert into person values(3,'Dhruv','Motka',22);
insert into person values(4,'Darsh','Joshi',23);
insert into person values(5,'Kavya','Patel',21);

SELECT 
    *
FROM
    person;
drop table person;

CREATE TABLE orders (
    order_id INT NOT NULL,
    order_number INT NOT NULL,
    person_id INT,
    PRIMARY KEY (order_id),
    FOREIGN KEY (person_id)
        REFERENCES person (person_id)
);

insert into orders values(1,78965,3);
insert into orders values(2,78966,2);
insert into orders values(3,78967,2);
insert into orders values(4,78968,5);
insert into orders values(5,78969,5);

SELECT 
    *
FROM
    orders;
drop table orders;

SELECT 
    *
FROM
    person
        NATURAL JOIN
    orders;
SELECT 
    person.person_id, person.first_name, orders.order_number
FROM
    person
        INNER JOIN
    orders ON person.person_id = orders.person_id;
SELECT 
    person.person_id, person.first_name, orders.order_number
FROM
    person
        LEFT JOIN
    orders ON person.person_id = orders.person_id;
SELECT 
    person.person_id, person.first_name, orders.order_number
FROM
    person
        RIGHT JOIN
    orders ON person.person_id = orders.person_id;

delimiter &&
create procedure display_data() 
select * from employee;
end &&

call display_data();
-- drop procedure display_data;

delimiter &&
create procedure data(in id int)
begin
select * from employee where employee_id=id;
end &&

call data(200);

delimiter &&
create procedure data1(in D_ID int,SAL double)
begin
select * from employee where DEPARTMENT_ID=D_ID and SALARY>SAL;
end && 
call data1(90,17000);

CREATE TABLE result (
    id INT NOT NULL,
    mark1 INT NOT NULL,
    mark2 INT NOT NULL,
    total INT
);

CREATE 
    TRIGGER  add_data
 BEFORE INSERT ON result FOR EACH ROW 
    SET new . total = new.mark1 + new.mark2;

insert into result(id,mark1,mark2) values(1,25,30);
insert into result(id,mark1,mark2) values(2,75,50);
insert into result(id,mark1,mark2) values(3,56,70);

SELECT 
    *
FROM
    result;

CREATE TABLE history1 (
    id INT NOT NULL,
    name VARCHAR(50) NOT NULL
);

CREATE TABLE history2 (
    id INT NOT NULL,
    name VARCHAR(50) NOT NULL,
    data_add TIME
);
CREATE 
    TRIGGER  copy_data
 AFTER INSERT ON history1 FOR EACH ROW 
    INSERT INTO history2 VALUES (new.id , new.name , CURTIME());

insert into history1 values(1,"Ram");
insert into history1 values(2,"Shyam");
insert into history1 values(3,"Krishna");

SELECT * FROM history1;
SELECT * FROM history2;

 -- select * from orders,person,employee;

-- describe employee;
-- select * from employee order by SALARY;
-- select * from employee order by SALARY DESC;
-- select * from employee order by 8 DESC;
-- SELECT * FROM employee FETCH FIRST 5 ROWS ONLY;
-- SELECT * FROM employee  order by SALARY FETCH FIRST 5 ROWS ONLY;
-- select * from employee where HIRE_DATE > '17-jul-94';
drop table employee;
