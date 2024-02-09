#include <iostream>

using namespace std;

int s;

int hitung_keliling(int s) {
return 4 * s;
}

int hitung_luas(int s) {
return s * s;
}

int main() {
    cout << "Masukan Panjang sisi : ";
    cin >> s;

    cout << "Keliling : " << hitung_keliling(s) << endl;
    cout << "Luas : " << hitung_luas(s) << endl;

    return 0;
}
