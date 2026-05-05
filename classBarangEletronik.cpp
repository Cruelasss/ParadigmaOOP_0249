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

int main() {
    // Object elektronik
    Barang elektronik("Laptop", 10, "Elektronik", "2024-01-15");

    // Object nonElektronik
    Barang nonElektronik("Kursi", 20, "Non Elektronik", "2023-11-10");

    // Menampilkan data
    elektronik.tampilkanSpesifikasi();
    nonElektronik.tampilkanSpesifikasi();

    return 0;
}