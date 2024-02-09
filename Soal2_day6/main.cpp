#include <iostream>

using namespace std;

double lingkaran,jari,phi,a_2311102051;
double luas_lingkaran  (int jari) {
phi=3,14;
a_2311102051=jari*jari*phi;
return a_2311102051;

}
int main ()
{
    cout << "Menghitung Luas Lingkaran dengan Fungsi\n";
    cout << endl;
    cout << " Masukan Jari-Jari : ";
    cin >> jari;
    cout << "Luas Lingkarannya adalah :" << luas_lingkaran(jari) << endl;
    return 0;
}
