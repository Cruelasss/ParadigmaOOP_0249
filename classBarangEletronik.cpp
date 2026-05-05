#include <iostream>
using namespace std;

class Barang {
private:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

public:
    // Constructor
    Barang(string n, int j, string k, string t) {
        nama = n;
        jumlah = j;
        kategori = k;
        tanggalProduksi = t;
    }

    // Method untuk menampilkan spesifikasi
    void tampilkanSpesifikasi() {
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Kategori          : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
        cout << "-------------------------------" << endl;
    }
};
