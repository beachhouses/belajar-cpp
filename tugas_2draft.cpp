#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <ctime> 
using namespace std;

// ANSI color codes
const string BLUE = "\033[34m";
const string RESET = "\033[0m";

void delay(int seconds) {
    clock_t start_time = clock();
    while (clock() < start_time + seconds * CLOCKS_PER_SEC);
}

void loading() {
    cout << "Loading";
    for (int i = 0; i < 3; i++) {
        cout << ".";
        cout.flush();
        delay(1);
    }
    cout << "\n" << endl;
}

template <typename T>
void museumRuangan(T data) {
    cout << "Data tidak bisa diproses di museum." << endl;
}

// Spesialisasi untuk int
template <>
void museumRuangan<int>(int data) {
    cout << "\n" << BLUE << "========================================" << RESET << endl;
    cout << BLUE << "            RUANGAN ANGKA           " << RESET << endl;
    cout << BLUE << "========================================" << RESET << endl;
    cout << "Angka: " << data << endl;

    if (data % 2 == 0)
        cout << "- Bilangan Genap" << endl;
    else
        cout << "- Bilangan Ganjil" << endl;

    bool prima = true;
    if (data < 2) prima = false;
    for (int i = 2; i <= sqrt(data); i++) {
        if (data % i == 0) {
            prima = false;
            break;
        }
    }
    if (prima)
        cout << "- Bilangan Prima" << endl;
    else
        cout << "- Bukan Bilangan Prima" << endl;

    cout << BLUE << "========================================" << RESET << "\n" << endl;
}

// Spesialisasi untuk string
template <>
void museumRuangan<string>(string data) {
    cout << "\n" << BLUE << "========================================" << RESET << endl;
    cout << BLUE << "             RUANGAN KATA           " << RESET << endl;
    cout << BLUE << "========================================" << RESET << endl;
    cout << "Kata: " << data << endl;

    string asli = data;
    string balik = data;
    reverse(balik.begin(), balik.end());

    cout << "- Dibalik: " << balik << endl;

    if (asli == balik) {
        cout << "- Kata ini adalah Palindrome" << endl;
    }
    else
        cout << "- Bukan Palindrome" << endl;

    cout << BLUE << "========================================" << RESET << "\n" << endl;
}

int main() {
    cout << BLUE << "=================================" << RESET << endl;
    cout << BLUE << "   SELAMAT DATANG DI MUSEUM      " << RESET << endl;
    cout << BLUE << "          ANGKA & KATA           " << RESET << endl;
    cout << BLUE << "=================================" << RESET << "\n" << endl;

    int pilihan;

    do {
        cout << "Pilih ruangan:" << endl;
        cout << "1. Ruangan Angka" << endl;
        cout << "2. Ruangan Kata" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan (1/2/3): ";
        cin >> pilihan;

        cout << endl;

        if (pilihan == 1) {
            cout << BLUE << "=========================================================" << RESET << endl;
            cout << BLUE << "                     RUANGAN ANGKA            " << RESET << endl;
            cout << BLUE << "=========================================================" << RESET << endl;
            cout << "Di ruangan ini, kamu bisa memasukkan angka" << endl;
            cout << "dan program akan mendeteksi apakah angka tersebut" << endl;
            cout << "adalah ganjil/genap dan apakah angka itu bilangan prima." << endl;
            cout << BLUE << "=========================================================" << RESET << "\n" << endl;

            int angka;
            cout << "Masukkan angka: ";
            cin >> angka;
            loading();
            museumRuangan(angka);

        } else if (pilihan == 2) {
            cout << BLUE << "===============================================================" << RESET << endl;
            cout << BLUE << "                           RUANGAN KATA                       " << RESET << endl;
            cout << BLUE << "===============================================================" << RESET << endl;
            cout << "Di ruangan ini, kamu bisa memasukkan kata." << endl;
            cout << "Program akan memeriksa apakah kata tersebut adalah palindrome," << endl;
            cout << "yaitu kata yang jika dibaca dari depan maupun belakang sama." << endl;
            cout << BLUE << "===============================================================\n" << RESET << endl;

            string kata;
            cout << "Masukkan kata: ";
            cin >> kata;
            loading();
            museumRuangan(kata);

        } else if (pilihan == 3) {
            cout << "Terima kasih telah berkunjung ke museum!" << endl;
        } else {
            cout << "Pilihan tidak valid, coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 3);

    cout << BLUE << "========================================" << RESET << endl;
    return 0;
}
