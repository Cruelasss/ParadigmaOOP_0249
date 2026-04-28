#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {

    public : //akses modifier public agar dapat diakses dari luar kelas
        int NIM;  
        string nama;
        float nilai;

        void printData() {
            cout << "NIM: " << NIM << endl;
            cout << "Nama: " << nama << endl;
            cout << "Nilai: " << nilai << endl;
        }
};

int main() {
    Mahasiswa mhs; //membuat objek mhs dari kelas Mahasiswa
    mhs.NIM = 20230140249;
    mhs.nama = "regar";
    mhs.nilai = 85.5;

    mhs.printData();

    return 0;
}