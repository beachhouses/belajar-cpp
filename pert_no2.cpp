#include <iostream>
#include <cmath>  // Untuk konstanta M_PI

using namespace std;

class Lingkaran {
private:
    int jariJari;  // Anggota variabel integer untuk menyimpan jari-jari lingkaran
    float keliling;  // Anggota variabel float untuk menyimpan keliling lingkaran
    float luas;  // Anggota variabel float untuk menyimpan luas lingkaran

public:
    // Fungsi untuk meminta input jari-jari lingkaran
    void inputJariJari() {
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> jariJari;
    }

    // Fungsi untuk menghitung keliling lingkaran
    void hitungKeliling() {
        keliling = 2 * M_PI * jariJari;  // Rumus keliling: 2 * pi * r
    }

    // Fungsi untuk menghitung luas lingkaran
    void hitungLuas() {
        luas = M_PI * jariJari * jariJari;  // Rumus luas: pi * r^2
    }

    // Fungsi untuk menampilkan hasil keliling dan luas
    void tampilkanHasil() {
        cout << "Keliling lingkaran: " << keliling << endl;
        cout << "Luas lingkaran: " << luas << endl;
    }
};

int main() {
    Lingkaran lingkaran;  // Membuat objek dari kelas Lingkaran
    lingkaran.inputJariJari();  // Meminta input jari-jari
    lingkaran.hitungKeliling();  // Menghitung keliling
    lingkaran.hitungLuas();  // Menghitung luas
    lingkaran.tampilkanHasil();  // Menampilkan hasil keliling dan luas
    return 0;
}
