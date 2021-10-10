package Minggu2_Objek;

public class Lingkaran {

    double PHI = 3.14;
    double r;

    double hitungLuas(){
        double luas = PHI * r *r;
        return luas;
    }

    double hitungKeliling(){
        double keliling = 2*PHI*r;
        return keliling;
    }


}
