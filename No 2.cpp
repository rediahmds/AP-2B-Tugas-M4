#include <iostream>
using namespace std;


int nilaiAwal = 97;

int main() {

    for (nilaiAwal; nilaiAwal <= 109; nilaiAwal += 2) {
        if (nilaiAwal == 103) {
            cout<<char(42)<<" ";
            continue;
        }
        cout<<char(nilaiAwal)<<" ";
    }
}
