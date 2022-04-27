#include <iostream>
using namespace std;

/* Inisialisasi nilai awal. Dimana menurut ascii, 
integer 97 diterjemahkan menjadi "a" */
int nilaiAwal = 97;

int main() {
    /* Pendefinisian perulangan for. Untuk inisialisasi 97
    dan akan behenti saat nilainya kurang dari atau sama dengan 109
    (109 diterjemahkan menjadi "m") */
    for (nilaiAwal; nilaiAwal <= 109; nilaiAwal += 2) {
        /* Kondisi apabila nilai 103 ("g"), maka akan diganti nilainya 
        menjadi 42 lalu diterjemahkan menjadi "*" */
        if (nilaiAwal == 103) {
            cout<<char(42)<<" ";

            // Untuk keluar dari pengkondisian dan TETAP melanjutkan looping
            continue;
        }
        // Kode yang dieksekusi apabila nilainya bukan 103
        cout<<char(nilaiAwal)<<" ";
    }
}
