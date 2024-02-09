#include<iostream>
#include<cmath>

using namespace std;

float penjumlahan(float a, float b) {
    return a + b;
}

float perkalian(float a, float b) {
    return a * b;
}

float pembagian(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
        return 0;
    }
}

float pengurangan(float a, float b) {
    return a - b;
}

float pangkat(float a, float b) {
    return pow(a, b);
}

void menu() {
    cout << " === K A L K U L A T O R ===" << endl;
    cout << " || 1. Penjumlahan         ||" << endl;
    cout << " || 2. Perkalian           ||" << endl;
    cout << " || 3. Pembagian           ||" << endl;
    cout << " || 4. Pengurangan         ||" << endl;
    cout << " || 5. Keluar              ||" << endl;
    cout << " ===========================" << endl;
}

int main() {
    float bilangan1, bilangan2;
    int pil_2311102051;

    menu();
    cout << endl;
    cout << " Masukkan Pilihan (1-5): ";
    cin >> pil_2311102051;

    cout << " Bilangan Pertama: ";
    cin >> bilangan1;
    cout << " Bilangan Kedua: ";
    cin >> bilangan2;

    switch (pil_2311102051) {
        case 1:
            cout << " Hasil Penjumlahan: " << penjumlahan(bilangan1, bilangan2) << endl;
            break;
        case 2:
            cout << " Hasil Perkalian: " << perkalian(bilangan1, bilangan2) << endl;
            break;
        case 3:
            cout << " Hasil Pembagian: " << pembagian(bilangan1, bilangan2) << endl;
            break;
        case 4:
            cout << " Hasil Pengurangan: " << pengurangan(bilangan1, bilangan2) << endl;
            break;
        default:
            cout << " Pilihan anda tidak valid." << endl;
    }

    return 0;
}
