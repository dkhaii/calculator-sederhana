#include <iostream>

using namespace std;

int main()
{
//  Program calculator sederhana
    cout << "SELAMAT DATANG DI PROGRAM CALCULATOR SEDERHANA!\n\n";

    float a, b, hasil;
    char aritmatika, pilih;
    do{
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan operator: ";
        cin >> aritmatika;
        cout << "Masukkan angka kedua: ";
        cin >> b;
        cout << endl;

        if(aritmatika == '+'){
            hasil = a + b;
        }if(aritmatika == '-'){
            hasil = a - b;
        }if(aritmatika == '/'){
            hasil = a / b;
        }if(aritmatika == '*'){
            hasil = a * b;
        }
        cout << "Hasil dari " << a << aritmatika << b << " = " << hasil << endl;
        cout << endl;

        cout << "Apakah anda ingin melanjutkan? (y/n)";
        cin >> pilih;
        cout << endl;

    }while(pilih == 'y');

    if(pilih == 'n'){
        cout << "TERIMA KASIH!\n\n";
    }
    return 0;
}
