#include <iostream>

using namespace std;

const int SIZE = 3;

// Fungsi untuk memeriksa apakah matriks bujur sangkar adalah matriks identitas
bool isIdentityMatrix(int matrix[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Periksa apakah elemen diagonal utama bukan 1
            // atau elemen non-diagonal bukan 0
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[SIZE][SIZE];

    // Memasukkan elemen-elemen matriks
    cout << "Masukkan elemen-elemen matriks " << SIZE << "x" << SIZE << ":" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }

    // Memeriksa apakah matriks adalah matriks identitas
    bool isIdentitas = isIdentityMatrix(matrix);

    // Menampilkan hasil
    if (isIdentitas) {
        cout << "Matriks adalah matriks identitas." << endl;
    } else {
        cout << "Matriks bukan matriks identitas." << endl;
    }

    return 0;
}
