#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int pilih, jumlahBeli[30], jumlah, harga[50], j;
long int subTotal[30], jumlahHarga = 0, bayar, kembalian;
char kodeMinuman[30];
string namaBarang[50], diskon;
float total;

void menu() 
{
    cout << "MENU PESANAN\n\n"; 
    cout << "A. Kopi Susu\n";
    cout << "B. Kopi Hitam\n";
    cout << "C. Cappucino\n"; 
    cout << "D. Kopi Luwak\n";
    cout << "E. Caffe Latte\n";  
}

int main()
{
    ulang:
    menu();

    cout << "Jumlah minuman yang ingin dibeli: ";
    cin >> j; 

    for (int i = 1; i <= j; i++)
    {
        cout << "Minuman Ke-" << i << "\n";
        cout << "Pilih Minuman (A/B/C/D/E): "; 
        cin >> kodeMinuman[i];
        cout << "Jumlah Minuman : ";
        cin >> jumlahBeli[i]; 
    }

    for (int i = 1; i <= j; i++)
    {
        ulang1:
        switch (kodeMinuman[i])
        {
            case 'A':
            case 'a':
                namaBarang[i] = "Kopi Susu";
                harga[i] = 7500;
                break;
            case 'B':
            case 'b':
                namaBarang[i] = "Kopi Hitam";
                harga[i] = 5000;
                break;
            case 'C':
            case 'c':
                namaBarang[i] = "Cappucino";
                harga[i] = 13000;
                break;
            case 'D':
            case 'd':
                namaBarang[i] = "Kopi Luwak";
                harga[i] = 15000;
                break;
            case 'E':
            case 'e':
                namaBarang[i] = "Caffe Latte";
                harga[i] = 13000;
                break;
            default:
                goto ulang1;
                break;
        }
    }

    cout << "---------------------------------------------------------" << endl; 
    cout << "|   Nama Minuman    |  Jumlah  |   Diskon   |   Harga   |" << endl;
    cout << "---------------------------------------------------------" << endl; 

    for (int i = 1; i <= j; i++)
    {
        subTotal[i] = jumlahBeli[i] *  harga[i];
        cout << "    " << namaBarang[i] << "\t     " << setiosflags(ios::right) << setw(5) << jumlahBeli[i] << "  " << setiosflags(ios::right) << setw(22) << "Rp." << subTotal[i] << endl;
        cout << "---------------------------------------------------------" << endl; 
        jumlahHarga = jumlahHarga + subTotal[i];
    }

    if (jumlahHarga >= 40000)
    {
        diskon =  "10%";
        total = jumlahHarga - (0.1 * jumlahHarga);
    }
    else if (jumlahHarga >= 20000 && jumlahHarga <= 40000)
    {
        diskon =  "5%";
        total = jumlahHarga - (0.05 * jumlahHarga);
    } 
    else {
        total = jumlahHarga;
    }

    cout << "|   Total Bayar: "; 
    cout << "\t\t    " << diskon;
    cout << "\t       Rp." << total << endl; 
    cout << "---------------------------------------------------------" << endl; 
        
    cout << "\n    Masukan uang bayar: ";
    cin >> bayar;

    if (bayar <= total)
    {
        cout << "    Maaf, uang anda kurang !" << endl;
        exit(0); 
    }
        
    kembalian = bayar - total;

    cout << "    Kembalian anda Rp." << kembalian;
    cout << endl;
}
