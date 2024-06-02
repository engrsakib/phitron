package Vartual_ATM;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Login extends JFrame implements ActionListener {

    JTextField cardField;
    JPasswordField pinField;
    JButton loginButton;

    Login() {
        setTitle("ATM Login");

        JLabel cardLabel = new JLabel("Card Number:");
        cardLabel.setFont(new Font("Roboto", Font.BOLD, 16));
        cardLabel.setBounds(100, 100, 150, 30);
        add(cardLabel);

        cardField = new JTextField();
        cardField.setFont(new Font("Roboto", Font.BOLD, 16));
        cardField.setBounds(260, 100, 200, 30);
        add(cardField);

        JLabel pinLabel = new JLabel("PIN:");
        pinLabel.setFont(new Font("Roboto", Font.BOLD, 16));
        pinLabel.setBounds(100, 150, 150, 30);
        add(pinLabel);

        pinField = new JPasswordField();
        pinField.setFont(new Font("Roboto", Font.BOLD, 16));
        pinField.setBounds(260, 150, 200, 30);
        add(pinField);

        loginButton = new JButton("Login");
        loginButton.setFont(new Font("Roboto", Font.BOLD, 16));
        loginButton.setBackground(Color.BLACK);
        loginButton.setForeground(Color.WHITE);
        loginButton.setBounds(260, 200, 100, 30);
        loginButton.addActionListener(this);
        add(loginButton);

        getContentPane().setBackground(new Color(252, 237, 194));
        setSize(600, 400);
        setLayout(null);
        setLocation(450, 200);
        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String cardno = cardField.getText();
        String pin = new String(pinField.getPassword());

        try (BufferedReader reader = new BufferedReader(new FileReader("signup3_data.txt"))) {
            String line;
            boolean found = false;
            while ((line = reader.readLine()) != null) {
                String[] parts = line.split(",");
                if (parts.length >= 4 && parts[2].equals(cardno) && parts[3].equals(pin)) {
                    JOptionPane.showMessageDialog(null, "Login Successful");
                    found = true;
                    break;
                }
            }
            if (!found) {
                JOptionPane.showMessageDialog(null, "Invalid Card Number or PIN");
            }
        } catch (IOException ioException) {
            ioException.printStackTrace();
        }
    }

    public static void main(String[] args) {
        new Login();
    }
}
