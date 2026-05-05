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
      