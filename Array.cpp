#include <iostream>
using namespace std;

int main ()
{
    int dataku[5] = {10, 20, 30, 40, 50};
    int datamu[5];

    cout << "isi data kedua: " << dataku[1] << endl;
    dataku[1] = 200;
    cout << "isi data kedua setelah diubah: " << dataku[1] << endl;

}