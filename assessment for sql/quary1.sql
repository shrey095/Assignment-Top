-- Write SQL query to solve the problem given below
-- Here we are talking about the Bank related information of a person.
-- For which you need to create three tables named as Bank, Account holder and Loan
-- table.
-- And solve the problem stated below.
-- Create a Bank table, attributes are : branch id, branch name, branch city
-- Create a Loan table, attributes are : loan no, branch id, account holder’s id, loan
-- amount and loan type
-- Create a table named as Account holder for the same scenario containing the
-- attributes are account holder’s id, account no, account holder’s name,
-- city,contact, date of account created, account status (active or terminated),
-- account type and balance.

-- Create the Bank table
CREATE TABLE Bank (
  branch_id INT PRIMARY KEY,
  branch_name VARCHAR(255) NOT NULL,
  branch_city VARCHAR(255) NOT NULL
);
select * from Bank;
-- Create the Account holder table
CREATE TABLE Account_Holder (
  account_holder_id INT PRIMARY KEY,
  account_no VARCHAR(255) NOT NULL,
  account_holder_name VARCHAR(255) NOT NULL,
  city VARCHAR(255) NOT NULL,
  contact VARCHAR(20) NOT NULL,
  date_of_account_created DATE NOT NULL,
  account_status varchar(50),
  account_type VARCHAR(255),
  balance DECIMAL(10,2) NOT NULL DEFAULT 0.00
);
select * from Account_Holder;
-- Create the Loan table
CREATE TABLE Loan (
  loan_no INT PRIMARY KEY,
  branch_id INT NOT NULL,
  account_holder_id INT NOT NULL,
  loan_amount DECIMAL(10,2) NOT NULL,
  loan_type VARCHAR(255) NOT NULL,
  FOREIGN KEY (branch_id) REFERENCES Bank(branch_id),
  FOREIGN KEY (account_holder_id) REFERENCES Account_Holder(account_holder_id)
);
select * from Loan;
-- Insert data into the Bank table
INSERT INTO Bank (branch_id, branch_name, branch_city) VALUES(1, 'Main Branch', 'New York');
INSERT INTO Bank (branch_id, branch_name, branch_city) VALUES(2, 'Downtown Branch', 'New York');
INSERT INTO Bank (branch_id, branch_name, branch_city) VALUES(3, 'Uptown Branch', 'Los Angeles');
INSERT INTO Bank (branch_id, branch_name, branch_city) VALUES(4, 'West Branch', 'Chicago');

-- Insert data into the Account_holder table
INSERT INTO Account_holder (account_holder_id, account_no, account_holder_name, city, contact, date_of_account_created, account_status, account_type, balance) VALUES(1, 'A123', 'John Doe', 'New York', '1234567890', '2023-06-20', 'active', 'savings', 1000.00);
INSERT INTO Account_holder (account_holder_id, account_no, account_holder_name, city, contact, date_of_account_created, account_status, account_type, balance) VALUES(2, 'B456', 'Jane Smith', 'New York', '0987654321', '2023-05-10', 'active', 'checking', 2000.00);
INSERT INTO Account_holder (account_holder_id, account_no, account_holder_name, city, contact, date_of_account_created, account_status, account_type, balance) VALUES(3, 'C789', 'Alice Johnson', 'Los Angeles', '5555555555', '2023-06-16', 'active', 'savings', 1500.00);
INSERT INTO Account_holder (account_holder_id, account_no, account_holder_name, city, contact, date_of_account_created, account_status, account_type, balance) VALUES(4, 'D012', 'Bob Brown', 'Chicago', '4444444444', '2023-05-17', 'terminated', 'checking', 3000.00);

-- Insert data into the Loan table
INSERT INTO Loan (loan_no, branch_id, account_holder_id, loan_amount, loan_type) VALUES(1, 1, 1, 5000.00, 'personal');
INSERT INTO Loan (loan_no, branch_id, account_holder_id, loan_amount, loan_type) VALUES(2, 2, 2, 10000.00, 'home');
INSERT INTO Loan (loan_no, branch_id, account_holder_id, loan_amount, loan_type) VALUES(3, 3, 3, 7000.00, 'car');
INSERT INTO Loan (loan_no, branch_id, account_holder_id, loan_amount, loan_type) VALUES(4, 4, 4, 15000.00, 'business');

-- Start a transaction
START TRANSACTION;

-- Decrease balance from account A123
UPDATE Account_holder
SET balance = balance - 100
WHERE account_no = 'A123';

-- Increase balance in account B456
UPDATE Account_holder
SET balance = balance + 100
WHERE account_no = 'B456';

-- Commit the transaction
COMMIT;
select * from Account_holder;	

-- Also fetch the details of the account holder who are related from the same city 
	SELECT ah1.account_holder_name, ah1.account_no, ah2.account_holder_name, ah2.account_no
FROM Account_Holder ah1
INNER JOIN Account_Holder ah2 ON ah1.city = ah2.city
WHERE ah1.account_holder_id <> ah2.account_holder_id;

-- Write a query to fetch account number and account holder name, whose accounts were created after 15th of any month

SELECT account_no, account_holder_name FROM Account_holder WHERE DAY(date_of_account_created) > 15;

-- Write a query to display the city name and count the branches in that city. Give the count of branches an alias name of Count_Branch.

SELECT branch_city AS city_name, COUNT(branch_id) AS Count_Branch
FROM Bank
GROUP BY branch_city;

-- Write a query to display the account holder’s id, account holder’s name, branch id, and loan amount for people who have taken loans. (NOTE : use
-- sql join concept to solve the query)

SELECT ah.account_holder_id, ah.account_holder_name, b.branch_id, l.loan_amount
FROM Account_Holder ah
INNER JOIN Loan l ON ah.account_holder_id = l.account_holder_id
INNER JOIN Bank b ON b.branch_id = l.branch_id;










