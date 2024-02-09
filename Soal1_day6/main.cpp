#include <iostream>
#include <string>

using namespace std;

int a_2311102051;
string bganjil(int yupi) {
if (a_2311102051 % 2==0 ) {
    return "Bilangan Genap";
}
else {return "Bilangan Ganjil";}
}
int main()
{
    cout << "Program menentukan Bilangan Ganjil atau Genap \n";
    cout << endl;
    cout << "Masukan Bilangan : ";
    cin >> a_2311102051;
    cout << "Bilangan yang anda masukan adalah " << bganjil(a_2311102051) << endl;
    return 0;
}
