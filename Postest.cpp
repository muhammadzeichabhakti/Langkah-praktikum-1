#include <iostream>
using namespace std;

int main() {
	
    const int ayam_goreng = 17000;
    const int ayam_bakar = 21000;
    const int diskonh = 45000;
    const double perdis = 0.10;
    
    int qtyGoreng, qtyBakar;
    
   
    cout << "Selamat datang di Kedai Ayam Kota X" << endl;
    cout << "------------------------------------" << endl;
    cout << "Menu:" << endl;
    cout << "1. Ayam Goreng  (Rp " << ayam_goreng << ")" << endl;
    cout << "2. Ayam Bakar   (Rp " << ayam_bakar << ")" << endl << endl;
    
    
    cout << "Masukkan jumlah pembelian Ayam Goreng: ";
    cin >> qtyGoreng;
    cout << "Masukkan jumlah pembelian Ayam Bakar: ";
    cin >> qtyBakar;
    
   
    int totalGoreng = qtyGoreng * ayam_goreng;
    int totalBakar  = qtyBakar * ayam_bakar;
    int subtotal    = totalGoreng + totalBakar;
    
    
    double discount = 0;
    if (subtotal > diskonh) {
        discount = subtotal * perdis;
    }
    
    double totalBayar = subtotal - discount;
    
   
    cout << "\n========== STRUK PEMBAYARAN ==========" << endl;
    cout << "Ayam Goreng (" << qtyGoreng << " x Rp " << ayam_goreng << "): Rp " << totalGoreng << endl;
    cout << "Ayam Bakar  (" << qtyBakar  << " x Rp " << ayam_bakar  << "): Rp " << totalBakar  << endl;
    cout << "--------------------------------------" << endl;
    cout << "Subtotal:          Rp " << subtotal << endl;
    if (discount > 0) {
        cout << "Diskon 10%:        Rp " << discount << endl;
    }
    cout << "Total Bayar:       Rp " << totalBayar << endl;
    cout << "======================================" << endl;
    
    return 0;
}

