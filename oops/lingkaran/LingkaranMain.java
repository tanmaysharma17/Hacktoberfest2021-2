package Minggu2_Objek;

import java.util.Scanner;
import java.text.DecimalFormat;

public class LingkaranMain {
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);
        DecimalFormat df2 = new DecimalFormat("#.##");

        Lingkaran objek1 = new Lingkaran();

        System.out.print("Masukkan jari-jari : " );
        objek1.r = userInput.nextDouble();

        System.out.println("Luas Lingkaran adalah     :   "+objek1.hitungLuas());
        System.out.println("Keliling Lingkaran adalah :   "+df2.format(objek1.hitungKeliling() ));
    }
}
