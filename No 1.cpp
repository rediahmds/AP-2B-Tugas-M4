#include <iostream>
using namespace std;

int main() {
    char ulangi, metodeBayar;
    string nama, tipeRumah;

    do {
    cout<<"************************* DATA PEMBELI RUMAH ***************************"<<endl;
    
    // Input nama
    cout<<"Nama Pembeli: ";
    cin>>nama;

    // Input tipe rumah
    cout<<"Tipe Rumah yang dipilih: ";
    cin>>tipeRumah;

    // Input jenis pembayaran
    cout<<"Jenis Pembayaran: ";
    cin>>metodeBayar;

    // Pengkondisian untuk menentukan harga berdasarkan tipe rumah dan metode bayar
    if (tipeRumah == "A") {
        switch (metodeBayar) {
            case 'L':
                cout<<"Pembayaran sebesar: Rp500.000.000"<<endl;
                break;

            case 'K':
                cout<<"Pembayaran sebesar: Rp5.000.000/bln (10 tahun)"<<endl;
                break;
            }
        }

    else if (tipeRumah == "B") {
        switch (metodeBayar) {
            case 'L':
                cout<<"Pembayaran sebesar: Rp1.000.000.000"<<endl;
                break;

            case 'K':
                cout<<"Pembayaran sebesar: Rp10.000.000/bln (10 tahun)"<<endl;
                break;
            }
        }

    else if (tipeRumah == "C") {
        switch (metodeBayar) {
            case 'L':
                cout<<"Pembayaran sebesar: Rp1.500.000.000"<<endl;
                break;

            case 'K':
                cout<<"Pembayaran sebesar: Rp12.000.000/bln (15 tahun)"<<endl;
                break;
            }
        }

    else {
        cout<<"Input anda tidak valid"<<endl;
    }

    cout<<"Ingin memasukkan data lain? [Y/T]: ";
    cin>>ulangi;
    }
    while (ulangi != 'T');
}
