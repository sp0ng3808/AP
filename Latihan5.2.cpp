#include <iostream>
#include <string>
using namespace std;

int input, jumlahBarang;
float totalBayar, totalBayarBuku, totalBayarPensil, totalBayarPnghps, totalBayarSpidol;
char ulangi;

int harga[5] = {0, 5000, 1500, 750, 10500};

string tampilan[5] = {"", "1. Buku      : Rp.5000", "2. Pensil    : Rp.1.500", "3. Penghapus : Rp.750", "4. Spidol    : Rp.10.500"};

void lineHorizontal() {
        for (int i = 0; i < 31; i++)
        {
                cout << "\u2500";
        }
        cout << "\n";
}

int main()
{
        ulangi1:
        system("clear");
        cout << " ";
        // lineHorizontal();
        cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
        cout << " ┃     Barang yang tersedia\t┃ \n";
        for (int  no = 0; no < 5; no++)
        {
                if (no == 0) continue;
                if (input != 0)
                {
                        if (no == input) continue;
                }
                cout << " ┃ " << tampilan[no];
                cout << "\t┃";
                cout << "\n";
        }

        cout << " ";
        cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
        cout << "  Masukan angka (1-4): ";
        cin >> input;

        switch (input)
        {
        case 1:
                cout << "  Jumlah Barang: ";
                cin >> jumlahBarang;

                totalBayarBuku = harga[input] * jumlahBarang;

                beliLagi:
                cout << "  Apakah ada yang masih ingin dibeli ? [Y/n]: ";
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
                                goto beliLagi;
                                break;
                }
                break;
        
        case 2:
                cout << "  Jumlah Barang: ";
                cin >> jumlahBarang;

                totalBayarPensil = harga[input] * jumlahBarang;

                beliLagi2:
                cout << "  Apakah ada yang masih ingin dibeli ? [Y/n]: ";
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
                                goto beliLagi2;
                                break;
                }
                break;
        case 3:
                cout << "  Jumlah Barang: ";
                cin >> jumlahBarang;

                totalBayarPnghps = harga[input] * jumlahBarang;

                beliLagi3:
                cout << "  Apakah ada yang masih ingin dibeli ? [Y/n]: ";
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
                                goto beliLagi3;
                                break;
                }
                break;
        case 4:
                cout << "  Jumlah Barang: ";
                cin >> jumlahBarang;

                totalBayarSpidol = harga[input] * jumlahBarang;

                beliLagi4:
                cout << "  Apakah ada yang masih ingin dibeli ? [Y/n]: ";
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
                                goto beliLagi4;
                                break;
                }
                break;
        default:
                cout << "  Barang Tidak Tesedia ! \n";
                cout << "  Ulangi ? [Y/n]: ";
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
                                exit(0);
                                break;
                        default:
                                goto ulangi1;
                                break;
                }
                break;
        }

        selesai:
        if (totalBayarBuku > 0 || totalBayarPensil > 0 || totalBayarPnghps > 0 || totalBayarSpidol > 0)
        {
                totalBayar = totalBayarBuku + totalBayarPensil + totalBayarPnghps + totalBayarSpidol;
                cout << "  Total Bayar adalah Rp. " << totalBayar;
                cout << endl;
        }
}
