package Vartual_ATM;

import java.awt.*;
import javax.swing.*;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.awt.event.ActionEvent;

public class log_in extends JFrame implements ActionListener {
    JLabel label1;
    JLabel label2;
    JLabel label3;
    JTextField textField2;
    JPasswordField passwordField3;
    JButton button1;
    JButton button2;
    JButton button3;

    log_in() {
        super("Vartual ATM SYSTEM");
        // Logo section
        ImageIcon i1 = new ImageIcon(ClassLoader.getSystemResource("icon/bank.png"));
        Image i2 = i1.getImage().getScaledInstance(100, 100, Image.SCALE_DEFAULT);
        ImageIcon i3 = new ImageIcon(i2);
        JLabel image = new JLabel(i3);
        image.setBounds(350, 10, 100, 100);
        add(image);
        // card Image section
        ImageIcon ii1 = new ImageIcon(ClassLoader.getSystemResource("icon/card.png"));
        Image ii2 = ii1.getImage().getScaledInstance(100, 100, Image.SCALE_DEFAULT);
        ImageIcon ii3 = new ImageIcon(ii2);
        JLabel iimage = new JLabel(ii3);
        iimage.setBounds(630, 350, 100, 100);
        add(iimage);
        // Heading
        label1 = new JLabel("WELCOME TO SAKIB BANK LTD.");
        label1.setForeground(Color.BLUE);
        label1.setFont(new Font("Roboto", Font.BOLD, 25));
        label1.setBounds(230, 125, 470, 40);
        add(label1);
        // user input card
        label2 = new JLabel("Account No:");
        label2.setFont(new Font("Ralway", Font.ITALIC, 18));
        label2.setForeground(Color.BLACK);
        label2.setBounds(150, 190, 375, 30);
        add(label2);

        // text Field
        textField2 = new JTextField(15);
        textField2.setBounds(325, 190, 230, 30);
        textField2.setFont(new Font("Fira Code", Font.ITALIC, 14));
        add(textField2);

        // user input PIN
        label3 = new JLabel("Passcode:");
        label3.setFont(new Font("Ralway", Font.ITALIC, 18));
        label3.setForeground(Color.BLACK);
        label3.setBounds(150, 250, 375, 30);
        add(label3);

        // passcode Field
        passwordField3 = new JPasswordField(15);
        passwordField3.setBounds(325, 250, 230, 30);
        passwordField3.setFont(new Font("Fira Code", Font.BOLD, 14));
        add(passwordField3);

        // sign in button
        button1 = new JButton("SIGN IN");
        button1.setFont(new Font("Arial", Font.BOLD, 14));
        button1.setForeground(Color.YELLOW);
        button1.setBackground(Color.BLACK);
        button1.setBounds(300, 300, 100, 30);
        button1.addActionListener(this);
        add(button1);

        // clear button
        button2 = new JButton("CLEAR");
        button2.setFont(new Font("Arial", Font.BOLD, 14));
        button2.setForeground(Color.YELLOW);
        button2.setBackground(Color.BLACK);
        button2.setBounds(430, 300, 100, 30);
        button2.addActionListener(this);
        add(button2);

        // create bank account button
        button3 = new JButton("CREATE BANK ACCOUNT");
        button3.setFont(new Font("Arial", Font.BOLD, 14));
        button3.setForeground(Color.YELLOW);
        button3.setBackground(Color.BLACK);
        button3.setBounds(300, 350, 230, 30);
        button3.addActionListener(this);
        add(button3);

        // system display
        setLayout(null);
        setSize(850, 480);
        setLocation(250, 100);
        setVisible(true);
    }

    // action Button
    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == button1) {
            String cardno = textField2.getText();
            String pin = new String(passwordField3.getPassword());

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
        } else if (e.getSource() == button2) {
            textField2.setText("");
            passwordField3.setText("");
        } else if (e.getSource() == button3) {
            // Open the signup form
            new signup();
        }
    }

    public static void main(String[] args) {
        new log_in();
    }
}
