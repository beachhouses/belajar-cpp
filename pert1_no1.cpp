#include <iostream>
using namespace std;

class Character {
private:
    char character;  // Anggota variabel bertipe karakter

public:
    // Fungsi untuk meminta input karakter
    void inputCharacter() {
        cout << "Masukkan sebuah karakter: ";
        cin >> character;
    }

    // Fungsi untuk menampilkan kode ASCII karakter
    void displayASCII() {
        cout << "Kode ASCII dari '" << character << "' adalah: " << int(character) << endl;
    }
};

int main() {
    Character charObj;  // Membuat objek dari kelas Character
    charObj.inputCharacter();  // Meminta input karakter
    charObj.displayASCII();  // Menampilkan kode ASCII karakter
    return 0;
}
