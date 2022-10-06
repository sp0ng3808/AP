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

void repeat(string label) {
        char repeat;
        cout << "Ulangi [Y/n] ? ";
        cin >> repeat;

        switch (repeat)
        {
        case 'y':
        case 'Y':
                system(label);
                break;
        
        case 'n':
        case 'N':
                exit(0);
                break;
        default:
                break;
        }
        
}


int main(int argc, char const *argv[])
{       
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
                        repeat(argv[0]);
                        break;
                case 'm':
                case 'M':
                        output += "Merk Baju " + merk[0][0][0] + "\n";
                        output += "Harga Baju " + merk[0][1][1] + "\n";
                        repeat(argv[0]);
                        break;
                
                default:
                        output += "Merk Baju " + merk[0][0][0] + "\n";
                        output += "Harga Baju " + merk[0][1][2] + "\n";
                        repeat(argv[0]);
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
                        repeat(argv[0]);
                        break;
                case 'm':
                case 'M':
                        output += "Merk Baju " + merk[1][0][0] + "\n";
                        output += "Harga Baju " + merk[1][1][0] + "\n";
                        repeat(argv[0]);
                        break;
                
                default:
                        output += "Merk Baju " + merk[1][0][0] + "\n";
                        output += "Harga Baju " + merk[1][1][0] + "\n";
                        repeat(argv[0]);
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
                        repeat(argv[0]);
                        break;
                case 'm':
                case 'M':
                        output += "Merk Baju " + merk[2][0][0] + "\n";
                        output += "Harga Baju " + merk[2][1][0] + "\n";
                        repeat(argv[0]);
                        break;
                
                default:
                        output += "Merk Baju " + merk[1][0][0] + "\n";
                        output += "Harga Baju " + merk[2][1][1] + "\n";
                        repeat(argv[0]);
                        break;
                }
                break;
        default:
                break;
        }

        cout << output;
}
