#include <iostream>

using namespace std;

int s;

void keliling_luas_persegi(int s) {
    int luas = s * s;
    int keliling = 4 * s;
    cout << "keliling : " << keliling << endl;
    cout << "Luas : " << luas << endl;
}

int main () {
    cout << "Masukan Panjang Sisi: ";
    cin >> s;

    keliling_luas_persegi(s);

    return 0;
}
