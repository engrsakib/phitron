package Vartual_ATM;

import java.sql.*;

public class Connn {
    Connection connection;
    Statement statement;
    public Connn(){
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/vartual_atm","root","sakib");
            statement = connection.createStatement();
            System.out.println(connection);
        }catch (Exception e){
            e.printStackTrace();
        }


    }
}