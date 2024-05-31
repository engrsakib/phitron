package Vartual_ATM;

import com.toedter.calendar.JDateChooser;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

public class signup extends JFrame implements ActionListener {
    JRadioButton r1, r2, m1, m2, m3;
    JButton next;

    JTextField textName, textFname, textEmail, textAdd, textcity, textState, textPin;
    JDateChooser dateChooser;
    Random ran = new Random();
    long first4 = (ran.nextLong() % 9000L) + 1000L;
    String first = " " + Math.abs(first4);

    signup() {
        super("APPLICATION FORM");

        ImageIcon i1 = new ImageIcon(ClassLoader.getSystemResource("icon/bank.png"));
        Image i2 = i1.getImage().getScaledInstance(100, 100, Image.SCALE_DEFAULT);
        ImageIcon i3 = new ImageIcon(i2);
        JLabel image = new JLabel(i3);
        image.setBounds(25, 10, 100, 100);
        add(image);

        // Form number
        JLabel l1 = new JLabel("Form No : ");
        l1.setFont(new Font("Roboto", Font.BOLD, 14));
        l1.setBounds(700, 10, 100, 30);
        add(l1);

        JLabel label2 = new JLabel("Page 1");
        label2.setFont(new Font("Roboto", Font.ITALIC, 12));
        label2.setBounds(730, 620, 600, 30);
        add(label2);

        JLabel label3 = new JLabel("Personal Details");
        label3.setFont(new Font("Roboto", Font.BOLD, 22));
        label3.setBounds(290, 50, 600, 30);
        add(label3);

        JLabel labelName = new JLabel("Name :");
        labelName.setFont(new Font("Roboto", Font.BOLD, 20));
        labelName.setBounds(100, 110, 100, 30);
        add(labelName);

        textName = new JTextField();
        textName.setFont(new Font("Roboto", Font.BOLD, 14));
        textName.setBounds(300, 110, 400, 30);
        add(textName);

        JLabel labelfName = new JLabel("Father's Name :");
        labelfName.setFont(new Font("Roboto", Font.BOLD, 20));
        labelfName.setBounds(100, 160, 200, 30);
        add(labelfName);

        textFname = new JTextField();
        textFname.setFont(new Font("Roboto", Font.BOLD, 14));
        textFname.setBounds(300, 160, 400, 30);
        add(textFname);

        JLabel DOB = new JLabel("Date of Birth");
        DOB.setFont(new Font("Roboto", Font.BOLD, 20));
        DOB.setBounds(100, 210, 200, 30);
        add(DOB);

        dateChooser = new JDateChooser();
        dateChooser.setForeground(new Color(105, 105, 105));
        dateChooser.setBounds(300, 210, 400, 30);
        add(dateChooser);

        JLabel labelG = new JLabel("Gender");
        labelG.setFont(new Font("Roboto", Font.BOLD, 20));
        labelG.setBounds(100, 260, 200, 30);
        add(labelG);

        r1 = new JRadioButton("Male");
        r1.setFont(new Font("Roboto", Font.BOLD, 14));
        r1.setBackground(new Color(252, 237, 194));
        r1.setBounds(300, 260, 60, 30);
        add(r1);

        r2 = new JRadioButton("Female");
        r2.setBackground(new Color(252, 237, 194));
        r2.setFont(new Font("Roboto", Font.BOLD, 14));
        r2.setBounds(450, 260, 90, 30);
        add(r2);

        ButtonGroup buttonGroup = new ButtonGroup();
        buttonGroup.add(r1);
        buttonGroup.add(r2);

        JLabel labelEmail = new JLabel("Email address :");
        labelEmail.setFont(new Font("Roboto", Font.BOLD, 20));
        labelEmail.setBounds(100, 310, 200, 30);
        add(labelEmail);

        textEmail = new JTextField();
        textEmail.setFont(new Font("Roboto", Font.BOLD, 14));
        textEmail.setBounds(300, 310, 400, 30);
        add(textEmail);

        JLabel labelMs = new JLabel("Marital Status :");
        labelMs.setFont(new Font("Roboto", Font.BOLD, 20));
        labelMs.setBounds(100, 360, 200, 30);
        add(labelMs);

        m1 = new JRadioButton("Married");
        m1.setBounds(300, 360, 100, 30);
        m1.setBackground(new Color(252, 237, 194));
        m1.setFont(new Font("Roboto", Font.BOLD, 14));
        add(m1);

        m2 = new JRadioButton("Unmarried");
        m2.setBackground(new Color(252, 237, 194));
        m2.setBounds(450, 360, 100, 30);
        m2.setFont(new Font("Roboto", Font.BOLD, 14));
        add(m2);

        m3 = new JRadioButton("Other");
        m3.setBackground(new Color(252, 237, 194));
        m3.setBounds(635, 360, 100, 30);
        m3.setFont(new Font("Roboto", Font.BOLD, 14));
        add(m3);

        ButtonGroup buttonGroup1 = new ButtonGroup();
        buttonGroup1.add(m1);
        buttonGroup1.add(m2);
        buttonGroup1.add(m3);

        JLabel labelAdd = new JLabel("Address :");
        labelAdd.setFont(new Font("Roboto", Font.BOLD, 20));
        labelAdd.setBounds(100, 410, 200, 30);
        add(labelAdd);

        textAdd = new JTextField();
        textAdd.setFont(new Font("Roboto", Font.BOLD, 14));
        textAdd.setBounds(300, 410, 400, 30);
        add(textAdd);

        JLabel labelCity = new JLabel("City :");
        labelCity.setFont(new Font("Roboto", Font.BOLD, 20));
        labelCity.setBounds(100, 460, 200, 30);
        add(labelCity);

        textcity = new JTextField();
        textcity.setFont(new Font("Roboto", Font.BOLD, 14));
        textcity.setBounds(300, 460, 400, 30);
        add(textcity);

        JLabel labelPin = new JLabel("Pin Code :");
        labelPin.setFont(new Font("Roboto", Font.BOLD, 20));
        labelPin.setBounds(100, 510, 200, 30);
        add(labelPin);

        textPin = new JTextField();
        textPin.setFont(new Font("Roboto", Font.BOLD, 14));
        textPin.setBounds(300, 510, 400, 30);
        add(textPin);

        JLabel labelstate = new JLabel("State :");
        labelstate.setFont(new Font("Roboto", Font.BOLD, 20));
        labelstate.setBounds(100, 560, 200, 30);
        add(labelstate);

        textState = new JTextField();
        textState.setFont(new Font("Roboto", Font.BOLD, 14));
        textState.setBounds(300, 560, 400, 30);
        add(textState);

        next = new JButton("Next");
        next.setFont(new Font("Roboto", Font.BOLD, 14));
        next.setBackground(Color.BLACK);
        next.setForeground(Color.WHITE);
        next.setBounds(620, 610, 80, 30);
        next.addActionListener(this);
        add(next);

        getContentPane().setBackground(new Color(252, 237, 194));
        setLayout(null);
        setSize(850, 800);
        setLocation(360, 40);
        setVisible(true);

    }

    @Override
    public void actionPerformed(ActionEvent e) {

        String formno = first;
        String name = textName.getText();
        String fname = textFname.getText();
        String dob = ((JTextField) dateChooser.getDateEditor().getUiComponent()).getText();
        String gender = null;
        if (r1.isSelected()) {
            gender = "Male";
        } else if (r2.isSelected()) {
            gender = "Female";
        }
        String email = textEmail.getText();
        String marital = null;
        if (m1.isSelected()) {
            marital = "Married";
        } else if (m2.isSelected()) {
            marital = "Unmarried";
        } else if (m3.isSelected()) {
            marital = "Other";
        }

        String address = textAdd.getText();
        String city = textcity.getText();
        String pincode = textPin.getText();
        String state = textState.getText();

        try {
            if (textName.getText().equals("")) {
                JOptionPane.showMessageDialog(null, "Fill all the fields");
            } else {
                Connn c = new Connn();
                String q = "insert into signup values('" + formno + "', '" + name + "','" + fname + "','" + dob + "','"
                        + gender + "','" + email + "','" + marital + "', '" + address + "', '" + city + "','" + pincode
                        + "','" + state + "' )";
                c.statement.executeUpdate(q);
                new Signup2(formno);
                setVisible(false);
            }

        } catch (Exception E) {
            E.printStackTrace();
        }

    }

    public static void main(String[] args) {
        new signup();
    }
}