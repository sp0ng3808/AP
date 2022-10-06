#include <iostream>
#include <string>
using namespace std;

int kode;
char ukuran;
string output = "";

string merk[3][2][3] = {
        {
                {"Prada"},
                {"150.000", "160.000", "170.000"}
        },
        {
                {"Gucci"},
                {"200.000"}
        },
        {
                {"Louis Vuitton"},
                {"300.000", "350.000"}
        }
};

void inputUkuran() {
        cout << "Masukan Ukuran Baju: ";
        cin >> ukuran;
}

void repeat(void* label) {
        char repeat;
        cout << "Ulangi [Y/n] ? ";
        cin >> repeat;

        switch (repeat)
        {
        case 'y':
        case 'Y':
                goto *label;
                break;
        
        default:
                break;
        }
        
}

int main()
{       
        void *target;
        ulangi:
        target = &&ulangi;
        system("clear");
        cout << "Masukan Kode [1/3/5]: ";
        cin >> kode;

        switch (kode)
        {
        case 1:
                inputUkuran();
                switch (ukuran)
                {
                case 's':
                case 'S':
                        output += "Merk Baju " + merk[0][0][0] + "\n";
                        output += "Harga Baju " + merk[0][1][0] + "\n";
                        repeat(target);
                        break;
                case 'm':
                case 'M':
                        output += "Merk Baju " + merk[0][0][0] + "\n";
                        output += "Harga Baju " + merk[0][1][1] + "\n";
                        repeat(target);
                        break;
                
                default:
                        output += "Merk Baju " + merk[0][0][0] + "\n";
                        output += "Harga Baju " + merk[0][1][2] + "\n";
                        repeat(target);
                        break;
                }
                break;

        case 3:
                inputUkuran();
                switch (ukuran)
                {
                case 's':
                case 'S':
                        output += "Merk Baju " + merk[1][0][0] + "\n";
                        output += "Harga Baju " + merk[1][1][0] + "\n";
                        repeat(target);
                        break;
                case 'm':
                case 'M':
                        output += "Merk Baju " + merk[1][0][0] + "\n";
                        output += "Harga Baju " + merk[1][1][0] + "\n";
                        repeat(target);
                        break;
                
                default:
                        output += "Merk Baju " + merk[1][0][0] + "\n";
                        output += "Harga Baju " + merk[1][1][0] + "\n";
                        repeat(target);
                        break;
                }
                break;
        case 5:
                inputUkuran();
                switch (ukuran)
                {
                case 's':
                case 'S':
                        output += "Merk Baju " + merk[2][0][0] + "\n";
                        output += "Harga Baju " + merk[2][1][0] + "\n";
                        repeat(target);
                        break;
                case 'm':
                case 'M':
                        output += "Merk Baju " + merk[2][0][0] + "\n";
                        output += "Harga Baju " + merk[2][1][0] + "\n";
                        repeat(target);
                        break;
                
                default:
                        output += "Merk Baju " + merk[1][0][0] + "\n";
                        output += "Harga Baju " + merk[2][1][1] + "\n";
                        repeat(target);
                        break;
                }
                break;
        default:
                break;
        }

        cout << output;
}
