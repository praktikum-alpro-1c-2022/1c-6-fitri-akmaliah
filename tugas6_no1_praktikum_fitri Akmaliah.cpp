#include <iostream>
using namespace std;

float gajipokok(float);
float lembur(float);
float makan(float);
float transport(float);
int main (){

float jamKerja,NIP;
string Nama;
cout << "==============================================================" << "\n";
cout << "Menghitung Gaji Harian Karyawan PT. XYZ" << "\n";
cout << "==============================================================" << "\n";
cout << "NIP: ";
cin >> NIP;
cout << "Nama: ";
cin >> Nama;
cout << "Jumlah Jam Kerja: ";
cin >> jamKerja;


cout << "Gaji Pokok     : " << gajipokok(jamKerja) << endl;
if (jamKerja > 8)
    cout << "Uang Lembur    : " << lembur (jamKerja) << endl;
    cout << "Uang Makan     : " << makan(1) << endl;
    cout << "Uang Transport : " << transport(1) << endl;
if (jamKerja >=9){
    cout << "bonus makan karyawan yang bekerja 9 jam : " << makan(1) << endl;
    }
if (jamKerja >=10){
    cout << "bonus transport karyawan yang bekerja 10 jam : " <<transport(1) << endl;
    }


    return 0;
}

float gajipokok (float x){
    float y ;
    y = x * 7500;
    return y;
}
float lembur(float x){
    float y;
    y = (x-8)*11250;
    return y;
}
float makan(float x){
    float y ;
    y = x * 10000;
    return y;
}
float transport(float x){
    float y;
    y = x * 13000;
    return y;
}
