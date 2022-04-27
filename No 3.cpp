#include <iostream>
using namespace std;

int main () {
    float banyakData, nilai, totalNilai, rerata;
    
    // Input banyaknya data
    cout<<"Masukkan banyak data: ";
    cin>>banyakData;

    // Pendefinisian perulangan, dimana n sebagai variabel iterator
    for (int n = 1; n<=banyakData; n++) {
        cout<<"Masukkan bilangan ke-"<<n<<": ";
        cin>>nilai;

        // Assignment untuk menghitung nilai total segera setelah nilai ke-n di-input
        totalNilai = totalNilai + nilai;
    }
    // Menampilkan jumlah
    cout<<"Jumlahnya = "<<totalNilai<<endl;

    // Mendefinisikan nilai rerata dan menampilkannya
    rerata = totalNilai / banyakData;
    cout<<"Rerata = "<<rerata<<endl;

}
