#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct Orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main ()
{  
    orang mhs;

    cout << "isikan data nama : ";
    cin >> mhs.nama;
    cout << "isikan data umur : ";
    cin >> mhs.umur;
    cout << "isikan data desa : ";
    cin >> mhs.alamat.desa;
    cout << "isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << endl;

    cout << "Data Tampil" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Umur : " << mhs.umur << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
}