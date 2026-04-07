#include <iostream>
using namespace std;

struct Orang
{
    string nama;
    string alamat;
    int umur;
};

int main ()
{   Orang mhs;
    
    cout << "isikan data nama : ";
    cin >> mhs.nama;
    cout << "isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;

}