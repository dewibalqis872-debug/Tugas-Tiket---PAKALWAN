#include <iostream>
using namespace std;

// Fungsi untuk menampilkan menu tiket
void menuTiket() {
    cout << "==================================" << endl;
    cout << "       PROGRAM PEMESANAN BUS      " << endl;
    cout << "==================================" << endl;
    cout << "1. Malang - Surabaya" << endl;
    cout << "   Harga : Rp 35.000" << endl;
    cout << "2. Malang - Pasuruan" << endl;
    cout << "   Harga : Rp 20.000" << endl;
    cout << "3. Malang - Jombang" << endl;
    cout << "   Harga : Rp 25.000" << endl;
    cout << "==================================" << endl;
}

// Fungsi menghitung total harga
int hitungTotal(int harga, int jumlah) {
    return harga * jumlah;
}

int main() {
    int pilihan, jumlah, harga, total;
    string tujuan;

    menuTiket();

    cout << "Pilih tujuan (1-3) : ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            tujuan = "Malang - Surabaya";
            harga = 35000;
            break;

        case 2:
            tujuan = "Malang - Pasuruan";
            harga = 20000;
            break;

        case 3:
            tujuan = "Malang - Jombang";
            harga = 25000;
            break;

        default:
            cout << "Pilihan tidak tersedia!" << endl;
            return 0;
    }

    cout << "Jumlah penumpang : ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah penumpang tidak valid!" << endl;
        return 0;
    }

    total = hitungTotal(harga, jumlah);

    cout << endl;
    cout << "========== STRUK TIKET ==========" << endl;
    cout << "Tujuan          : " << tujuan << endl;
    cout << "Harga tiket     : Rp " << harga << endl;
    cout << "Jumlah penumpang: " << jumlah << endl;
    cout << "---------------------------------" << endl;
    cout << "Total pembayaran: Rp " << total << endl;
    cout << "=================================" << endl;
    cout << "Terima kasih telah memesan tiket!" << endl;

    return 0;
}
