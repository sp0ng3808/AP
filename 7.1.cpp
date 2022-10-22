#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string pertama, ketiga, input, operasi;
char kedua;
int per, ked, ket, hasil;
int main() 
{
        system("clear");
        ulangi:
        cout << "> ";
        getline(cin, input);
        stringstream split(input);

        split >> pertama >> kedua >> ketiga;

        // if (!isdigit(pertama) || !isdigit(ketiga))
        // {
        //         cout << "Mohon masukan angka !\n"; 
        // }

        per = stoi(pertama);
        ket = stoi(ketiga);

        switch (kedua)
        {
        case 'x':
                operasi = " x ";
                hasil = per * ket;
                break;
        
        case '+':
                operasi = " + ";
                hasil = per + ket;
                break;
        case '-':
                operasi = " - ";
                hasil = per - ket;
                break;
        case '/':
                operasi = " / ";
                hasil = per / ket;
                break;
        default:
                cout << "Mohon gunakan x, + ,/, -\n";
                goto ulangi;
                break;
        }
        cout << per << operasi << ket << " = " <<  hasil << endl; 
        goto ulangi;
}