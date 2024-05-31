package Vartual_ATM;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Signup2 extends JFrame implements ActionListener {
    JComboBox<String> comboBox, comboBox2, comboBox3, comboBox4, comboBox5;
    JTextField textPan, textAadhar;
    JRadioButton r1, r2, e1, e2;
    JButton next;
    String formno;

    Signup2(String formno) {
        super("APPLICATION FORM");

        ImageIcon i1 = new ImageIcon(ClassLoader.getSystemResource("icon/bank.png"));
        Image i2 = i1.getImage().getScaledInstance(100, 100, Image.SCALE_DEFAULT);
        ImageIcon i3 = new ImageIcon(i2);
        JLabel image = new JLabel(i3);
        image.setBounds(150, 5, 100, 100);
        add(image);

        this.formno = formno;

        JLabel label2 = new JLabel("Page 2");
        label2.setFont(new Font("Roboto", Font.ITALIC, 12));
        label2.setBounds(730, 620, 600, 30);
        add(label2);

        JLabel l2 = new JLabel("Additional Details");
        l2.setFont(new Font("Roboto", Font.BOLD, 22));
        l2.setBounds(300, 60, 600, 40);
        add(l2);

        // Religion
        JLabel l3 = new JLabel("Religion :");
        l3.setFont(new Font("Roboto", Font.BOLD, 14));
        l3.setBounds(100, 120, 100, 30);
        add(l3);

        String[] religion = { "Muslim", "Hindu", "Sikh", "Christian", "Other" };
        comboBox = new JComboBox<>(religion);
        comboBox.setBackground(new Color(252, 237, 194));
        comboBox.setFont(new Font("Roboto", Font.BOLD, 14));
        comboBox.setBounds(350, 120, 320, 30);
        add(comboBox);

        // Category
        JLabel l4 = new JLabel("Category : ");
        l4.setFont(new Font("Roboto", Font.BOLD, 18));
        l4.setBounds(100, 170, 100, 30);
        add(l4);

        String[] category = { "General", "OBC", "SC", "ST", "Other" };
        comboBox2 = new JComboBox<>(category);
        comboBox2.setBackground(new Color(252, 237, 194));
        comboBox2.setFont(new Font("Roboto", Font.BOLD, 14));
        comboBox2.setBounds(350, 170, 320, 30);
        add(comboBox2);

        // Income
        JLabel l5 = new JLabel("Income : ");
        l5.setFont(new Font("Roboto", Font.BOLD, 18));
        l5.setBounds(100, 220, 100, 30);
        add(l5);

        String[] income = { "Null", "<1,50,000", "<2,50,000", "<5,00,000", "Up to 10,00,000", "Above 10,00,000" };
        comboBox3 = new JComboBox<>(income);
        comboBox3.setBackground(new Color(252, 237, 194));
        comboBox3.setFont(new Font("Roboto", Font.BOLD, 14));
        comboBox3.setBounds(350, 220, 320, 30);
        add(comboBox3);

        // Educational Qualification
        JLabel l6 = new JLabel("Educational : ");
        l6.setFont(new Font("Roboto", Font.BOLD, 18));
        l6.setBounds(100, 270, 150, 30);
        add(l6);

        String[] educational = { "Non-Graduate", "Graduate", "Post-Graduate", "Doctorate", "Others" };
        comboBox4 = new JComboBox<>(educational);
        comboBox4.setBackground(new Color(252, 237, 194));
        comboBox4.setFont(new Font("Roboto", Font.BOLD, 14));
        comboBox4.setBounds(350, 270, 320, 30);
        add(comboBox4);

        // Occupation
        JLabel l7 = new JLabel("Occupation : ");
        l7.setFont(new Font("Roboto", Font.BOLD, 18));
        l7.setBounds(100, 340, 150, 30);
        add(l7);

        String[] occupation = { "Salaried", "Self-Employed", "Business", "Student", "Retired", "Other" };
        comboBox5 = new JComboBox<>(occupation);
        comboBox5.setBackground(new Color(252, 237, 194));
        comboBox5.setFont(new Font("Roboto", Font.BOLD, 14));
        comboBox5.setBounds(350, 340, 320, 30);
        add(comboBox5);

        // PAN
        JLabel l8 = new JLabel("Birth Certificate Number : ");
        l8.setFont(new Font("Roboto", Font.BOLD, 18));
        l8.setBounds(100, 390, 150, 30);
        add(l8);

        textPan = new JTextField();
        textPan.setFont(new Font("Roboto", Font.BOLD, 18));
        textPan.setBounds(350, 390, 320, 30);
        add(textPan);

        // Aadhar
        JLabel l9 = new JLabel("NID Number : ");
        l9.setFont(new Font("Roboto", Font.BOLD, 18));
        l9.setBounds(100, 440, 180, 30);
        add(l9);

        textAadhar = new JTextField();
        textAadhar.setFont(new Font("Roboto", Font.BOLD, 18));
        textAadhar.setBounds(350, 440, 320, 30);
        add(textAadhar);

        // Senior Citizen
        JLabel l10 = new JLabel("Senior Citizen : ");
        l10.setFont(new Font("Roboto", Font.BOLD, 18));
        l10.setBounds(100, 490, 180, 30);
        add(l10);

        r1 = new JRadioButton("Yes");
        r1.setFont(new Font("Roboto", Font.BOLD, 14));
        r1.setBackground(new Color(252, 237, 194));
        r1.setBounds(350, 490, 100, 30);
        add(r1);
        r2 = new JRadioButton("No");
        r2.setFont(new Font("Roboto", Font.BOLD, 14));
        r2.setBackground(new Color(252, 237, 194));
        r2.setBounds(460, 490, 100, 30);
        add(r2);

        ButtonGroup seniorCitizenGroup = new ButtonGroup();
        seniorCitizenGroup.add(r1);
        seniorCitizenGroup.add(r2);

        // Existing account
        JLabel l11 = new JLabel("Existing Account : ");
        l11.setFont(new Font("Roboto", Font.BOLD, 18));
        l11.setBounds(100, 540, 180, 30);
        add(l11);

        e1 = new JRadioButton("Yes");
        e1.setFont(new Font("Roboto", Font.BOLD, 14));
        e1.setBackground(new Color(252, 237, 194));
        e1.setBounds(350, 540, 100, 30);
        add(e1);
        e2 = new JRadioButton("No");
        e2.setFont(new Font("Roboto", Font.BOLD, 14));
        e2.setBackground(new Color(252, 237, 194));
        e2.setBounds(460, 540, 100, 30);
        add(e2);

        ButtonGroup existingAccountGroup = new ButtonGroup();
        existingAccountGroup.add(e1);
        existingAccountGroup.add(e2);

        // Form number
        JLabel l12 = new JLabel("Form No : ");
        l12.setFont(new Font("Roboto", Font.BOLD, 14));
        l12.setBounds(700, 10, 100, 30);
        add(l12);

        JLabel l13 = new JLabel(formno);
        l13.setFont(new Font("Roboto", Font.BOLD, 14));
        l13.setBounds(760, 10, 60, 30);
        add(l13);

        // Next button
        next = new JButton("Next");
        next.setFont(new Font("Roboto", Font.BOLD, 14));
        next.setBackground(Color.WHITE);
        next.setForeground(Color.BLACK);
        next.setBounds(570, 640, 100, 30);
        next.addActionListener(this);
        add(next);

        // background
        setLayout(null);
        setSize(850, 800);
        setLocation(250, 20);
        getContentPane().setBackground(new Color(252, 237, 194));
        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String rel = (String) comboBox.getSelectedItem();
        String cate = (String) comboBox2.getSelectedItem();
        String inc = (String) comboBox3.getSelectedItem();
        String edu = (String) comboBox4.getSelectedItem();
        String occ = (String) comboBox5.getSelectedItem();

        String pan = textPan.getText();
        String addhar = textAadhar.getText();

        String scitizen = r1.isSelected() ? "Yes" : "No";
        String eAccount = e1.isSelected() ? "Yes" : "No";

        try {
            if (textPan.getText().equals("") || textAadhar.getText().equals("")) {
                JOptionPane.showMessageDialog(null, "Fill all the fields");
            } else {
                Connn c = new Connn();
                String q = "insert into Signuptwo values('" + formno + "', '" + rel + "', '" + cate + "','" + inc
                        + "','" + edu + "','" + occ + "','" + pan + "','" + addhar + "','" + scitizen + "','" + eAccount
                        + "')";
                c.statement.executeUpdate(q);
                new Signup3(formno);
                setVisible(false);
            }

        } catch (Exception E) {
            E.printStackTrace();
        }

    }

    public static void main(String[] args) {
        new Signup2("");
    }
}
