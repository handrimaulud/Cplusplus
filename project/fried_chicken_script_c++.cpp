#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{   Home :
    cout << "  LABSIMI FRIED CHICKEN" << endl;
    cout << "---------------------------" << endl;
    cout << " Kode \t Jenis \t Harga" << endl;
    cout << "---------------------------" << endl;
    cout << " [D] \t Dada  \t Rp. 2500" << endl;
    cout << " [P] \t Paha  \t Rp. 2000" << endl;
    cout << " [S] \t Sayap \t Rp. 1500" << endl;
    cout << "---------------------------" << endl;
    int jumlah;
    cout << "Banyak Jenis = ";
    cin >> jumlah;
    if (jumlah > 0) {
    char jenis_potongan[10];
    int banyak_potongan[10];
    int data_ke=1;
    int harga[10];
    int subtotal=0;

    for (int i=1; i<=jumlah; i++) {
      cout << "Jenis ke - " << data_ke++ << endl;  
      cout << "Jenis Potong [D/P/S] : ";
      cin >> jenis_potongan[i];
      cout << "Banyak Potongan : ";
      cin >> banyak_potongan[i];
      cout << "--------------------------" << endl << endl;
       if (jenis_potongan[i] == 'D') {
         harga[i]=banyak_potongan[i]*2500;}
       if (jenis_potongan[i] == 'S') {
         harga[i]=banyak_potongan[i]*1500;}
       if (jenis_potongan[i] == 'P') {  
         harga[i]=banyak_potongan[i]*2000;}
     subtotal+=harga[i]; }
    cout << "             GEROBAK FRIED CHICKEN" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "No.  |  Jenis    | Harga    | Banyak   | Jumlah  " << endl;
    cout << "     |  Potong   | Satuan   | Beli     | Harga   " << endl;
    cout << "=====================================================" << endl; 
    
    for (int i=1; i<=jumlah; i++) {
    cout << i << "    |";
        if (jenis_potongan[i] == 'D') {
           cout << " Dada      | ";
                        cout << "2500     | ";}
        if (jenis_potongan[i] == 'P') {
           cout << " Paha      | "; 
                        cout << "2000     | ";}
        if (jenis_potongan[i] == 'S') {
           cout << " Sayap     | ";
                        cout << "1500     | ";}
                  cout << " " << banyak_potongan[i] << "       | " << "Rp. " << harga[i] << endl;}
    int pajak;
    int total_bayar;
    pajak =0.1*subtotal;
    total_bayar=pajak+subtotal;
    cout << "                           Jumlah Bayar  Rp. " << subtotal << endl;
    cout << "                           Pajak 10%     Rp. " << pajak << endl;
    cout << "                           Total Bayar   Rp. " << total_bayar << endl;
    cout << " " << endl;
    char pesan_lagi;
    cout << "Anda Ingin Memesan Lagi? [Y/T] = ";
    cin >> pesan_lagi;
    if (pesan_lagi == 'Y') {
        goto Home;}
    if (pesan_lagi == 'T') {
    cout << "Terima Kasih & Silahkan Datang Kembali" << endl;}}
    else if (jumlah == 0) {
    cout << endl;
    cout << "Banyak Jenis Tidak Boleh Null" << endl;}
  return 0;
}