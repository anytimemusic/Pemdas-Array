#include <iostream>
using namespace std;

int main ()
{
    int dataku[5] = {10, 20, 30, 40, 50};
    int datamu[5];

    cout << "isi data kedua: " << dataku[1] << endl;
    dataku[1] = 200;
    cout << "isi data kedua setelah diubah: " << dataku[1] << endl;

    cout << "isi data pertama : ";
    cin >> datamu[0];
    cout << "isi data kedua : ";
    cin >> datamu[1];
    cout << "Isikan data ketiga : ";
    cin >> datamu[2];
    cout << "Isikan data keempat : ";
    cin >> datamu[3];
    cout << "Isikan data kelima : ";
    cin >> datamu[4];
    cout << endl;   

    cout << "data pertama = " << datamu[0] << endl;
    cout << "data kedua = " << datamu[1] << endl;
    cout << "data ketiga = " << datamu[2] << endl;
    cout << "data keempat = " << datamu[3] << endl;
    cout << "data kelima = " << datamu[4] << endl;

    cout << "input data dengan menggunakan for" << endl;
    
    for (int i = 0; i <= 4; i++)
    {
        cout << "Isikan data ke-" << (i + 1) << " : ";
        cin >> datamu[i];
    }
    cout << endl;

cout << "tampil data dengan menggunakan for" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data ke-" << (i + 1) << " : " << datamu[i] << endl;
    }
}