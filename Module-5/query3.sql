create table info(
first_name varchar(50) not null,
last_name varchar(50) not null,
address varchar(50) not null,
city varchar(50) not null,
age int);

insert into info values('Mickey','Mouse','123 Fantasy Way','Anaheim',73);
insert into info values('Bat','Man','321 Cavern Ave','Gotham',54);
insert into info values('Wonder','Woman','987 Truth Way','Paradise',39);
insert into info values('Donald','Duck','555 Quack Street','Mallarad',65);
insert into info values('Bugs','Bunny','567 Carrot Street','Rascal',58);
insert into info values('Wiley','Coyote','999 Acme Way','Canyon',61);
insert into info values('Cat','Woman','234 Purrfect Street','Hairball',32);
insert into info values('Tweety','Bird','543 Cavern Ave','Itotltaw',28);

select * from info;  