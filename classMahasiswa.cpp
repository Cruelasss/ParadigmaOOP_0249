#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {

    public : 
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
    Mahasiswa mhs;
    mhs.NIM = 12345;
    mhs.nama = "Budi";
    mhs.nilai = 85.5;

    mhs.printData();

    return 0;
}