#include <iostream>

using namespace std;
int bil1,bil2;

void banding(int a, int b){
    if (a>b) {
        cout << a;
    } else if (a == b) {
        cout << "Tidak Ada";
    } else {
        cout << b;
    }
}


int main()
{
    cout << "Masukkan bilangan 1: ";
    cin >> bil1;
    cout << "Masukkan bilangan 2: ";
    cin >> bil2;
    cout << "Bilangan yang lebih besar adalah: ";
    banding(bil1, bil2);
    return 0;
}
