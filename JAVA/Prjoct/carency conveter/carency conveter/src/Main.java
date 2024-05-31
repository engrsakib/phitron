import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingUtilities;
import java.awt.Font;

public class Main {

    public static String myMethod(String fromValue, String toValue) throws IOException {
        String url = "https://www.google.com/finance/quote/" + fromValue + "-" + toValue;
        URL obj = new URL(url);
        HttpURLConnection con = (HttpURLConnection) obj.openConnection();
        con.setRequestMethod("GET");
        BufferedReader in = new BufferedReader(new InputStreamReader(con.getInputStream()));
        String inputLine;
        StringBuilder response = new StringBuilder();
        while ((inputLine = in.readLine()) != null) {
            response.append(inputLine);
        }
        in.close();

        String html = response.toString();
        String pattern = "<div class=\"YMlKec fxKbKc\">(.*?)</div>";
        Pattern r = Pattern.compile(pattern);
        Matcher m = r.matcher(html);
        String convertedValue = "";

        while (m.find()) {
            convertedValue = m.group(1);
        }

        return convertedValue;
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Currency Converter");
        frame.setSize(900, 500);
        frame.setLocation(200, 150);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel headlineLabel = new JLabel("Currency Converter By Md. Nazmus Sakib");
        headlineLabel.setFont(new Font("Roboto", Font.BOLD, 24));
        frame.add(headlineLabel);
        headlineLabel.setBounds(210, 50, 500, 30); // Set position

        // Create a JLabel to display the message
        JLabel messageLabel = new JLabel();

        // Create two JComboBox components with different options
        String[] messages1 = {
                "USD", "AFN", "ALL", "DZD", "AOA", "ARS", "AMD", "AWG", "AUD", "AZN", "BSD", "BHD", "BDT", "BBD", "BYR",
                "BEF", "BZD", "BMD", "BTN", "BTC", "BOB",
                "BAM", "BWP", "BRL", "GBP", "BND", "BGN", "BIF", "KHR", "CAD", "CVE",
                "KYD", "XOF", "XAF", "XPF", "CLP", "CNY", "COP", "KMF", "CDF", "CRC",
                "HRK", "CUC", "CZK", "DKK", "DJF", "DOP", "XCD", "EGP", "ERN", "EEK",
                "ETB", "EUR", "FKP", "FJD", "GMD", "GEL", "DEM", "GHS", "GIP", "GRD",
                "GTQ", "GNF", "GYD", "HTG", "HNL", "HKD", "HUF", "ISK", "INR", "IDR",
                "IRR", "IQD", "ILS", "ITL", "JMD", "JPY", "JOD", "KZT", "KES", "KWD",
                "KGS", "LAK", "LVL", "LBP", "LSL", "LRD", "LYD", "LTL", "MOP", "MKD",
                "MGA", "MWK", "MYR", "MVR", "MRO", "MUR", "MXN", "MDL", "MNT", "MAD",
                "MZM", "MMK", "NAD", "NPR", "ANG", "TWD", "NZD", "NIO", "NGN", "KPW",
                "NOK", "OMR", "PKR", "PAB", "PGK", "PYG", "PEN", "PHP", "PLN", "QAR",
                "RON", "RUB", "RWF", "SVC", "WST", "SAR", "RSD", "SCR", "SLL", "SGD",
                "SKK", "SBD", "SOS", "ZAR", "KRW", "XDR", "LKR", "SHP", "SDG", "SRD",
                "SZL", "SEK", "CHF", "SYP", "STD", "TJS", "TZS", "THB", "TOP", "TTD",
                "TND", "TRY", "TMT", "UGX", "UAH", "AED", "UYU", "UZS", "VUV",
                "VEF", "VND", "YER", "ZMK"
        };
        JComboBox<String> comboBox1 = new JComboBox<>(messages1);

        String[] messages2 = {
                "BDT", "AFN", "ALL", "DZD", "AOA", "ARS", "AMD", "AWG", "AUD", "AZN", "BSD",
                "BHD", "BBD", "BYR", "BEF", "BZD", "BMD", "BTN", "BTC", "BOB",
                "BAM", "BWP", "BRL", "GBP", "BND", "BGN", "BIF", "KHR", "CAD", "CVE",
                "KYD", "XOF", "XAF", "XPF", "CLP", "CNY", "COP", "KMF", "CDF", "CRC",
                "HRK", "CUC", "CZK", "DKK", "DJF", "DOP", "XCD", "EGP", "ERN", "EEK",
                "ETB", "EUR", "FKP", "FJD", "GMD", "GEL", "DEM", "GHS", "GIP", "GRD",
                "GTQ", "GNF", "GYD", "HTG", "HNL", "HKD", "HUF", "ISK", "INR", "IDR",
                "IRR", "IQD", "ILS", "ITL", "JMD", "JPY", "JOD", "KZT", "KES", "KWD",
                "KGS", "LAK", "LVL", "LBP", "LSL", "LRD", "LYD", "LTL", "MOP", "MKD",
                "MGA", "MWK", "MYR", "MVR", "MRO", "MUR", "MXN", "MDL", "MNT", "MAD",
                "MZM", "MMK", "NAD", "NPR", "ANG", "TWD", "NZD", "NIO", "NGN", "KPW",
                "NOK", "OMR", "PKR", "PAB", "PGK", "PYG", "PEN", "PHP", "PLN", "QAR",
                "RON", "RUB", "RWF", "SVC", "WST", "SAR", "RSD", "SCR", "SLL", "SGD",
                "SKK", "SBD", "SOS", "ZAR", "KRW", "XDR", "LKR", "SHP", "SDG", "SRD",
                "SZL", "SEK", "CHF", "SYP", "STD", "TJS", "TZS", "THB", "TOP", "TTD",
                "TND", "TRY", "TMT", "UGX", "UAH", "AED", "UYU", "USD", "UZS", "VUV",
                "VEF", "VND", "YER", "ZMK"
        };
        JComboBox<String> comboBox2 = new JComboBox<>(messages2);

        JButton convertButton = new JButton("Convert");

        // Add ActionListener to the button
        convertButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                final String previousButtonText = convertButton.getText(); // Store previous button text
                convertButton.setText("Please Wait..."); // Change button text to "hgfh"
                SwingUtilities.invokeLater(() -> {
                    String fromValue = (String) comboBox1.getSelectedItem();
                    String toValue = (String) comboBox2.getSelectedItem();

                    try {
                        String exchangeRate = myMethod(fromValue, toValue);
                        messageLabel.setText("1 " + fromValue + " = " + exchangeRate + " " + toValue);
                    } catch (IOException ex) {
                        ex.printStackTrace();
                    } finally {
                        convertButton.setText(previousButtonText); // Revert button text to previous
                    }

                });
            }
        });

        // Add components to the frame
        frame.add(comboBox1);
        frame.add(comboBox2);
        frame.add(convertButton);
        frame.add(messageLabel);

        frame.setLayout(null);
        comboBox1.setBounds(300, 150, 300, 30);
        comboBox2.setBounds(300, 190, 300, 30);
        convertButton.setBounds(300, 230, 300, 50);
        messageLabel.setBounds(350, 100, 300, 30);

        frame.setVisible(true);
    }
}