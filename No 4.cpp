#include <iostream>
using namespace std;

int main() {
    float banyakNilai, nilai, jumlahNilai, rerata;
    
    // Input banyaknya nilai
    cout<<"Masukkan kuantitas nilai: ";
    cin>>banyakNilai;

    // Pengkondisian perulangan, dengan i sebagai iterator
    for (int i = 1; i<=banyakNilai; i++) {
        cout<<"Masukkan nilai ke-"<<i<<": ";
        cin>>nilai;
        
        /* Menjumlahkan nilai yang di-input secara langsung.
        Agar lebih matematis, maka operator assignment-nya ditulis seperti di bawah */ 
        jumlahNilai = jumlahNilai + nilai; 

        /* Pengkondisian apabila nilai =  0, maka akan 
        dideklarasikan value baru untuk variabel banyakNilai */
        if (nilai==0) {
            banyakNilai = i - 1;

            // Statement untuk mengakhiri proses perulangan
            break;
        }
        else {
            // Statement untuk melanjutkan perulangan
            continue;
        }
    }
    // Menampilkan jumlah nilai
    cout<<"Jumlahnya = "<<jumlahNilai<<endl;
    
    // Mendefinisikan dan menampilkan nilai rerata
    rerata = jumlahNilai / banyakNilai;
    cout<<"Rerata = "<<rerata;
}