#include <iostream>
using namespace std;

int main() {
    string nama;
    int usia;

    cout << "Masukkan nama Anda: ";
    getline(cin, nama);
    
    cout << "Masukkan usia Anda: ";
    cin >> usia;
    
    cout << "Halo " << nama << ", usia Anda " << usia << " tahun." << endl;
    return 0;
}
