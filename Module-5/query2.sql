create database Assignment;

CREATE TABLE student (
    Rollno INT PRIMARY KEY AUTO_INCREMENT,
    name varchar(50) NOT NULL,
    branch varchar(50)
);

select * from student;
insert into student values(1,"Jay","Computer Science");
insert into student values(2,"Suhani","Electronic and Com");
insert into student values(3,"Kriti","Electronic and Com");



-- select * from studen where name like 'j%';

create table Exam(
    Rollno INT ,
    S_code varchar(10) NOT NULL,
    Marks INT,
    P_code varchar(10) NOT NULL,
    foreign key Exam(Rollno) references student(Rollno)
);

insert into Exam values(1,"CS11","50","CS");
insert into Exam values(1,"CS12","50","CS");
insert into Exam values(2,"EC101","66","EC");
insert into Exam values(2,"EC102","70","EC");
insert into Exam values(3,"EC101","45","EC");
insert into Exam values(3,"EC102","50","EC");

select * from student;
select * from Exam;




