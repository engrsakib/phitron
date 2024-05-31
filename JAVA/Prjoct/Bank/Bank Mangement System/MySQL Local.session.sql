use vartual_atm;
select *
from singup;
SHOW TABLES IN vartual_atm;
CREATE TABLE signup (
    id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(50) NOT NULL,
    password VARCHAR(50) NOT NULL,
    email VARCHAR(100) NOT NULL
);