#include <iostream>
using namespace std;

int main() {
    int pilih;
    int suaraA = 0, suaraB = 0, suaraC = 0;

    cout << "=== SISTEM VOTING SEDERHANA ===" << endl;
    cout << "Voting dilakukan oleh 5 orang\n\n";

    for(int i = 1; i <= 5; i++) {
        cout << "Pemilih ke-" << i << endl;
        cout << "1. Calon ketua A" << endl;
        cout << "2. Calon ketua B" << endl;
        cout << "3. Calon ketua C" << endl;
        cout << "Pilih kandidat (1-3): ";
        cin >> pilih;

        if(pilih == 1) {
            suaraA++;
        } else if(pilih == 2) {
            suaraB++;
        } else if(pilih == 3) {
            suaraC++;
        } else {
            cout << "Pilihan tidak valid\n";
        }
        cout << endl;
    } 
    cout << "=== HASIL AKHIR VOTING ===" << endl;
    cout << "Calon A: " << suaraA << " suara" << endl;
    cout << "Calon B: " << suaraB << " suara" << endl;
    cout << "Calon C: " << suaraC << " suara" << endl;

    return 0;
}