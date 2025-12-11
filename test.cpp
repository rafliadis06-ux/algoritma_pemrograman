#include <iostream>

using namespace std;

int main() {
    int n;
    // Menggunakan long long agar bisa menampung hasil angka besar
    long long hasil = 1; 

    // Meminta input user
    cout << "Masukkan n: ";
    cin >> n;

    // Cek jika input negatif (opsional, tapi praktik yang baik)
    if (n < 0) {
        cout << "Maaf, faktorial tidak berlaku untuk angka negatif." << endl;
    } 
    else {
        // Proses Iteratif (Looping)
        // Kita mulai dari 1 dan terus dikalikan sampai mencapai n
        for (int i = 1; i <= n; i++) {
            hasil = hasil * i;
        }

        // Menampilkan output sesuai format permintaan
        cout << n << "! = " << hasil << endl;
    }

    return 0;
}