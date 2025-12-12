#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial
long long hitungFaktorial(int n) {
    // Basis rekursi (Base case): Jika n adalah 0 atau 1, faktorialnya adalah 1
    if (n <= 1) {
        return 1;
    } else {
        // Langkah rekursif: n * faktorial(n-1)
        return n * hitungFaktorial(n - 1);
    }
}

int main() {
    int n;

    // Meminta input dari pengguna
    cout << "Masukkan n: ";
    cin >> n;

    cout << "Contoh Output:" << endl;
    
    // Looping untuk menampilkan deret dari 1 sampai n
    for (int i = 1; i <= n; i++) {
        // Memanggil fungsi rekursif untuk setiap angka i
        cout << i << "! = " << hitungFaktorial(i) << endl;
    }

    return 0;
}
