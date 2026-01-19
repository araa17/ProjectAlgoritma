#include <iostream>
using namespace std;

int main() {
    int pilihanFilm;
    int kursi[5][5] = {0};
    int baris, kolom;
    int harga = 50000;

    cout << "=== SISTEM PEMESANAN TIKET BIOSKOP ===" << endl;
    cout << "1. Jumbo" << endl;
    cout << "2. Avengers" << endl;
    cout << "3. Spiderman" << endl;
    cout << "Pilih film (1-3): ";
    cin >> pilihanFilm;

    cout << "\nDenah kursi (0 = kosong, 1 = teriisi)\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << kursi[i][j] << " ";
        } 
        cout << endl;
    } 
    cout << "\nPilih baris (0-4): ";
    cin >> baris;
    cout << "Pilih kolom (0-4): ";
    cin >> kolom;

    if(kursi[baris][kolom] == 0) {
        kursi[baris][kolom] = 1;
        cout << "\nKursi berhasil dipesan!" << endl;
        cout << "Harga tiket: Rp " << harga << endl;
    } else {
        cout << "\nMaaf kursi sudah terisi." << endl;
    }
    return 0;
}