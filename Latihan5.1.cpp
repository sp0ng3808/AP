#include <iostream>
#include <string>
using namespace std;
int angka;
string output;

int main()
{
        cout << "Masukan angka: ";
        cin >> angka;
        
        switch (angka)
        {
        case 0:
              output = "Nol";  
                break;
        case 1:
              output = "Satu";  
                break;
        case 2:
              output = "Dua";  
                break;
        case 3:
              output = "Tiga";  
                break;
        case 4:
              output = "Empat";  
                break;
        case 5:
              output = "Lima";  
                break;
        case 6:
              output = "Enam";  
                break;
        case 7:
              output = "Tujuh";  
                break;
        case 8:
              output = "Delapan";  
                break;
        case 9:
              output = "Sembilan";  
                break;
        default:
                output = "Tidak ada";
                break;
        }

        cout << "Angka " << output << endl;
        
}
