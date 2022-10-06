#include <iostream>
#include <string>
using namespace std;

int input, jumlahBarang;
float totalBayar, totalBayarBuku, totalBayarPensil, totalBayarPnghps, totalBayarSpidol;
char ulangi;

int harga[5] = 
{
        0,
        5000,    // harga buku
        1500,    // harga pensil
        750,      // harga penghapus
        10500  // harga spidol
};

string tampilanHarga[5] = {
        "",
        "1. Buku \t: Rp. 5000",
        "2. Pensil \t: Rp. 1.500",
        "3. Penghapus \t: Rp. 750",
        "4. Spidol \t: Rp. 10.500"
};

int main()
{
        ulangi1:
        system("clear");
        for (int  no = 0; no < 5; no++)
        {
                if (no == 0) continue;
                if (input != 0)
                {
                        if (no == input) continue;
                }
                
                cout << tampilanHarga[no];
                cout << "\n";
        }

        cout << "Masukan angka (1-4): ";
        cin >> input;

        switch (input)
        {
        case 1:
                cout << "Jumlah Barang: ";
                cin >> jumlahBarang;

                totalBayarBuku = harga[input] * jumlahBarang;

                cout << "Apakah ada yang masih ingin dibeli ? [Y/n]: ";
                cin >> ulangi;

                switch (ulangi)
                {
                        case 'y':
                        case  'Y':
                                goto ulangi1;
                                return totalBayarBuku;
                                return input;
                                break;
                        
                        case 'n':
                        case  'N':
                                goto selesai;
                                break;
                        default:
                                break;
                }
                break;
        
        case 2:
                cout << "Jumlah Barang: ";
                cin >> jumlahBarang;

                totalBayarPensil = harga[input] * jumlahBarang;

                cout << "Apakah ada yang masih ingin dibeli ? [Y/n]: ";
                cin >> ulangi;

                switch (ulangi)
                {
                        case 'y':
                        case  'Y':
                                goto ulangi1;
                                return totalBayarPensil;
                                return input;
                                break;
                        
                        case 'n':
                        case  'N':
                                goto selesai;
                                break;
                        default:
                                break;
                }
                break;
        case 3:
                cout << "Jumlah Barang: ";
                cin >> jumlahBarang;

                totalBayarPnghps = harga[input] * jumlahBarang;

                cout << "Apakah ada yang masih ingin dibeli ? [Y/n]: ";
                cin >> ulangi;

                switch (ulangi)
                {
                        case 'y':
                        case  'Y':
                                goto ulangi1;
                                return totalBayarPnghps;
                                return input;
                                break;
                        
                        case 'n':
                        case  'N':
                                goto selesai;
                                break;
                        default:
                                break;
                }
                break;
        case 4:
                cout << "Jumlah Barang: ";
                cin >> jumlahBarang;

                totalBayarSpidol = harga[input] * jumlahBarang;

                cout << "Apakah ada yang masih ingin dibeli ? [Y/n]: ";
                cin >> ulangi;
                
                switch (ulangi)
                {
                        case 'y':
                        case  'Y':
                                goto ulangi1;
                                return totalBayarSpidol;
                                return input;
                                break;
                        
                        case 'n':
                        case  'N':
                                goto selesai;
                                break;
                        default:
                                break;
                }
                break;
        default:
                goto ulangi1;
                break;
        }

        selesai:
        if (totalBayarBuku > 0 || totalBayarPensil > 0 || totalBayarPnghps > 0 || totalBayarSpidol > 0)
        {
                totalBayar = totalBayarBuku + totalBayarPensil + totalBayarPnghps + totalBayarSpidol;
                cout << "Total Bayar adalah Rp. " << totalBayar;
                cout << endl;
        }
}
