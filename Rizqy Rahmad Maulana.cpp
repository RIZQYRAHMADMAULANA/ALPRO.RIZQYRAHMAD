#include <iostream>  
using namespace std;  
  
int main()  
{  
    int pin = 260503; // PIN default  
    int saldo = 100000; // Saldo awal  
  
    cout << "Assalammualiakum Ya ukhti/akhi di ATM Syariah Memed Bank\n";  
    cout << "Masukkan PIN Anda: ";  
  
    int inputPin;  
    cin >> inputPin;  
  
    if (inputPin == pin)  
    {  
        cout << "\n1. Cek saldo\n";  
        cout << "2. Tarik tunai\n";  
        cout << "3. Keluar\n";  
  
        int pilihan;  
        cout << "\nMasukkan pilihan Anda: ";  
        cin >> pilihan;  
  
        switch (pilihan)  
        {  
            case 1:  
                cout << "\n Sisa saldo Anda saat ini adalah: Rp " << saldo << endl;  
                break;  
  
            case 2:  
                int tarikTunai;  
                cout << "\nMasukkan jumlah uang yang ingin ditarik: Rp ";  
                cin >> tarikTunai;  
  
                if (tarikTunai > saldo)  
                {  
                    cout << "\nMaaf, saldo Anda tidak mencukupi untuk melakukan penarikan tunai sadar diri\n";
                }  
                else  
                {  
                    saldo -= tarikTunai;  
                    cout << "\nAnda berhasil menarik uang sejumlah Rp " << tarikTunai << endl;  
                    cout << "Sisa saldo anda saat ini adalah"<<endl;  
                }  
                break;  
  
            case 3:  
                cout << "\nTerima kasih telah menggunakan ATM Syariah Memed Bank\n";
                break;  
  
            default:  
                cout << "\nPilihan yang Anda masukkan tidak tersedia\n";  
                break;  
        }  
    }  
    else  
    {  
        cout << "\nPIN yang Anda masukkan bodong\n";
    }  
  
    return 0;  
}
