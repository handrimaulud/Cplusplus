#include <iostream>
#include <sstream>

using namespace std;

int main() {
  int jumlah_pesan1, jumlah_pesan2, jumlah_pesan3, harga1, harga2, harga3;
  string nama;
  cout << "Masukan Nama Anda        : ";
  getline(cin, nama);
  string tanggal;
  cout << "Masukan Tanggal Hari Ini : ";
  getline(cin, tanggal);
  cout << " ---------------------------------------" << endl;
  cout << "\t Ice Boba Brown Sugar \t \t \t" << endl;
  cout << " ---------------------------------------" << endl;
  cout << "[k] \t Kecil  \t Rp. 12.000" << endl;
  cout << "[s] \t Sedang \t Rp. 18.000" << endl;
  cout << "[b] \t Besar  \t Rp. 25.000" << endl;
  cout << " ---------------------------------------" << endl;
  char pesan1;
  cout << "Pesan Yang Mana [k/s/b] : ";
  cin >> pesan1;
  cout << "  " << endl; 
  cout << "Beli Berapa : ";
  cin >> jumlah_pesan1;
  if (pesan1 == 'k') {harga1 = jumlah_pesan1*12000;}
  else if (pesan1 == 's') {harga1 = jumlah_pesan1*18000;}
  else if (pesan1 == 'b') {harga1 = jumlah_pesan1*25000;}
  cout << "Total Untuk Ice Boba Brown Sugar ";
  if (pesan1 == 'k') { cout << "Kecil : " << harga1 << endl;}
  else if (pesan1 == 's') { cout << "Sedang : " << harga1 << endl;}
  else if (pesan1 == 'b') { cout << "Besar : " << harga1 << endl;} 
  char beli_tidak1;
  cout << "Mau Beli Ice Boba Brown Sugar Ukuran Lain [ y / t ] : ";
  cin >> beli_tidak1;
  cout << "  " << endl;
  /*-----------------------------pesan ke dua----------------------------------*/
  if (beli_tidak1 == 'y') {
    char pesan2;
    cout << "Pesan Yang Mana [k/s/b] : ";
    cin >> pesan2;
    cout << "  " << endl;
    cout << "Beli Berapa : ";
    cin >> jumlah_pesan2; 
    if (pesan2 == 'k') {harga2 = jumlah_pesan2*12000;}
    else if (pesan2 == 's') {harga2 = jumlah_pesan2*18000;}
    else if (pesan2 == 'b') {harga2 = jumlah_pesan2*25000;}
    cout << "Total Untuk Ice Boba Brown Sugar ";
    if (pesan2 == 'k') { cout << "Kecil : " << harga2  << endl;}
    else if (pesan2 == 's') { cout << "Sedang : " << harga2  << endl;}
    else if (pesan2 == 'b') { cout << "Besar : " << harga2 << endl;}
    char beli_tidak2; 
    cout << "Mau Beli Ice Boba Brown Sugar Ukuran Lain [ y / t ] : ";
    cin >> beli_tidak2;
    cout << "  " << endl;
/*------------------------------- pesan ketiga--------------------------*/
    if (beli_tidak2 == 'y') {            
       char pesan3;
       cout << "Pesan Yang Mana [k/s/b] : "; 
       cin >> pesan3; 
       cout << "  " << endl;
       cout << "Beli Berapa : ";
       cin >> jumlah_pesan3;
       if (pesan3 == 'k') {harga3 = jumlah_pesan3*12000;}
       else if (pesan3 == 's') {harga3 = jumlah_pesan3*18000;}
       else if (pesan3 == 'b') {harga3 = jumlah_pesan3*25000;}
       cout << "Total Untuk Ice Boba Brown Sugar ";
       if (pesan3 == 'k') { cout << "Kecil : " << harga3 << endl;}
       else if (pesan3 == 's') { cout << "Sedang : " << harga3 << endl;}
       else if (pesan3 == 'b') { cout << "Besar : " << harga3 << endl;}
       cout << " " << endl;
       int total3 = harga2+harga1+harga3;
       cout << "Total         : " << total3 << endl;
       cout << "Pajak         : 8000" << endl;
       int total_bayar3 = total3+8000;
       cout << "Total Bayar   : " << total_bayar3  << endl;
       cout << "Uang Bayar    : ";
       int duit;
       cin >> duit;
       int kembalian3 = duit-total_bayar3;
       cout << "Kembalian     : " << kembalian3 << endl; 
       char cetak;
       cout << "Mau Cetak Struk [ y / t ] : ";
       cin >> cetak;
       if (cetak == 'y') {
          int qty31, j31;
          if (pesan1 == 'k') {
              if (pesan2 == 'k') {
                  if (pesan3 == 'k') {
                      qty31=jumlah_pesan3+jumlah_pesan2+jumlah_pesan1;
                      j31=qty31*12000;}
                  if (pesan3 == 's') {
                      qty31=jumlah_pesan1+jumlah_pesan2;
                      j31=qty31*12000;}
                  if (pesan3 == 'b') {
                      qty31=jumlah_pesan1+jumlah_pesan2;
                      j31=qty31*12000;}}
              if (pesan2 == 's') {
                  if (pesan3 == 'k') {
                      qty31=jumlah_pesan3+jumlah_pesan1;
                      j31=qty31*12000;}
                  if (pesan3 == 's') {
                       qty31=jumlah_pesan1;
                       j31=qty31*12000;}
                  if (pesan3 == 'b') {
                       qty31=jumlah_pesan1;
                       j31=qty31*12000;}}
              if (pesan2 == 'b') {
                  if (pesan3 == 'k') {
                       qty31=jumlah_pesan3+jumlah_pesan1;
                      j31=qty31*12000;}
                  if (pesan3 == 's') {
                       qty31=jumlah_pesan1;
                       j31=qty31*12000;}
                  if (pesan3 == 'b') {
                       qty31=jumlah_pesan1;
                       j31=qty31*12000;}}}
          if (pesan1 == 's') {
              if (pesan2 == 'k') {
                  if (pesan3 == 'k') {
                      qty31=jumlah_pesan2+jumlah_pesan3;
                      j31=qty31*12000;}
                  if (pesan3 == 's') {
                      qty31=jumlah_pesan2;
                      j31=qty31*12000;}
                  if (pesan3 == 'b') {
                      qty31=jumlah_pesan2;
                      j31=qty31*12000;}}
              if (pesan2 == 's') {
                  if (pesan3 == 'k') {
                      qty31=jumlah_pesan3;
                      j31=qty31*12000;}
                  if (pesan3 == 's') {
                      qty31=0;
                      j31=0;}
                  if (pesan3 == 'b') {
                      qty31=0;
                      j31=0;}}
              if (pesan2 == 'b') {
                  if (pesan3 == 'k') {
                      qty31=jumlah_pesan3;
                      j31=qty31*12000;}
                  if (pesan3 == 's') {
                      qty31=0;
                      j31=0;}
                  if (pesan3 == 'b') {
                      qty31=0;
                      j31=0;}}}
          if (pesan1 == 'b') {
              if (pesan2 == 'k') {
                  if (pesan3 == 'k') {
                      qty31=jumlah_pesan2+jumlah_pesan3;
                      j31=qty31*12000;}
                  if (pesan3 == 's') {
                      qty31=jumlah_pesan2;
                      j31=qty31*12000;}
                  if (pesan3 == 'b') {
                      qty31=jumlah_pesan2;
                      j31=qty31*12000;}}
              if (pesan2 == 's') {
                  if (pesan3 == 'k') {
                      qty31=jumlah_pesan3;
                      j31=qty31*12000;}
                  if (pesan3 == 's') {
                      qty31=0;
                      j31=0;}
                  if (pesan3 == 'b') {
                      qty31=0;
                      j31=0;}}
              if (pesan2 == 'b') {
                  if (pesan3 == 'k') {
                      qty31=jumlah_pesan3;
                      j31=qty31*12000;}
                  if (pesan3 == 's') {
                      qty31=0;
                      j31=0;}
                  if (pesan3 == 'b') {
                      qty31=0;
                      j31=0;}}}
          int qty32, j32;
          if (pesan1 == 'k') {
              if (pesan2 == 'k') {
                  if (pesan3 == 'k') {
                      qty32=0;
                      j32=0;}
                  if (pesan3 == 's') {
                      qty32=jumlah_pesan3;
                      j32=qty32*18000;}
                  if (pesan3 == 'b') {
                      qty32=0;
                      j32=0;}}
              if (pesan2 == 's') {
                  if (pesan3 == 'k') {
                      qty32=jumlah_pesan2;
                      j32=qty32*18000;}
                  if (pesan3 == 's') {
                       qty32=jumlah_pesan2+jumlah_pesan3;
                       j32=qty32*18000;}
                  if (pesan3 == 'b') {
                       qty32=jumlah_pesan2;
                       j32=qty32*18000;}}
              if (pesan2 == 'b') {
                  if (pesan3 == 'k') {
                       qty32=0;
                      j32=0;}
                  if (pesan3 == 's') {
                       qty32=jumlah_pesan3;
                       j32=qty32*18000;}
                  if (pesan3 == 'b') {
                       qty32=0;
                       j32=0;}}}
          if (pesan1 == 's') {
              if (pesan2 == 'k') {
                  if (pesan3 == 'k') {
                      qty32=jumlah_pesan1;
                      j32=qty32*18000;}
                  if (pesan3 == 's') {
                      qty32=jumlah_pesan1+jumlah_pesan3;
                      j32=qty32*18000;}
                  if (pesan3 == 'b') {
                      qty32=jumlah_pesan1;
                      j32=qty32*18000;}}
              if (pesan2 == 's') {
                  if (pesan3 == 'k') {
                      qty32=jumlah_pesan1+jumlah_pesan2;
                      j32=qty32*18000;}
                  if (pesan3 == 's') {
                      qty32=jumlah_pesan1+jumlah_pesan2+jumlah_pesan3;
                      j32=qty32*18000;}
                  if (pesan3 == 'b') {
                      qty32=jumlah_pesan1+jumlah_pesan2;
                      j32=qty32*18000;}}
              if (pesan2 == 'b') {
                  if (pesan3 == 'k') {
                      qty32=jumlah_pesan1;
                      j32=qty32*18000;}
                  if (pesan3 == 's') {
                      qty32=jumlah_pesan3+jumlah_pesan1;
                      j32=qty32*18000;}
                  if (pesan3 == 'b') {
                      qty32=jumlah_pesan1;
                      j32=qty32*18000;}}}
          if (pesan1 == 'b') {
              if (pesan2 == 'k') {
                  if (pesan3 == 'k') {
                      qty32=0;
                      j32=0;}
                  if (pesan3 == 's') {
                      qty32=jumlah_pesan3;
                      j32=qty32*18000;}
                  if (pesan3 == 'b') {
                      qty32=0;
                      j32=0;}}
              if (pesan2 == 's') {
                  if (pesan3 == 'k') {
                      qty32=jumlah_pesan2;
                      j32=qty32*18000;}
                  if (pesan3 == 's') {
                      qty32=jumlah_pesan2+jumlah_pesan3;
                      j32=qty32*18000;}
                  if (pesan3 == 'b') {
                      qty32=jumlah_pesan2;
                      j32=qty32*18000;}}
              if (pesan2 == 'b') {
                  if (pesan3 == 'k') {
                      qty32=0;
                      j32=0;}
                  if (pesan3 == 's') {
                      qty32=jumlah_pesan3;
                      j32=qty32*18000;}
                  if (pesan3 == 'b') {
                      qty32=0;
                      j32=0;}}}
            int qty33, j33;
          if (pesan1 == 'k') {
              if (pesan2 == 'k') {
                  if (pesan3 == 'k') {
                      qty33=0;
                      j33=0;}
                  if (pesan3 == 's') {
                      qty33=0;
                      j33=0;}
                  if (pesan3 == 'b') {
                      qty33=jumlah_pesan3;
                      j33=qty33*25000;}}
              if (pesan2 == 's') {
                  if (pesan3 == 'k') {
                      qty33=0;
                      j33=0;}
                  if (pesan3 == 's') {
                       qty33=0;
                       j33=0;}
                  if (pesan3 == 'b') {
                       qty33=jumlah_pesan3;
                       j33=qty33*24000;}}
              if (pesan2 == 'b') {
                  if (pesan3 == 'k') {
                       qty33=jumlah_pesan2;
                      j33=qty33*25000;}
                  if (pesan3 == 's') {
                       qty33=jumlah_pesan2;
                       j33=qty33*25000;}
                  if (pesan3 == 'b') {
                       qty33=jumlah_pesan2+jumlah_pesan3;
                       j33=qty33*25000;}}}
          if (pesan1 == 's') {
              if (pesan2 == 'k') {
                  if (pesan3 == 'k') {
                      qty33=0;
                      j33=0;}
                  if (pesan3 == 's') {
                      qty32=0;
                      j32=0;}
                  if (pesan3 == 'b') {
                      qty33=jumlah_pesan3;
                      j33=qty33*25000;}}
              if (pesan2 == 's') {
                  if (pesan3 == 'k') {
                      qty33=0;
                      j33=0;}
                  if (pesan3 == 's') {
                      qty33=0;
                      j33=0;}
                  if (pesan3 == 'b') {
                      qty33=jumlah_pesan3;
                      j33=qty33*25000;}}
              if (pesan2 == 'b') {
                  if (pesan3 == 'k') {
                      qty33=jumlah_pesan2;
                      j33=qty33*25000;}
                  if (pesan3 == 's') {
                      qty33=jumlah_pesan2;
                      j33=qty33*25000;}
                  if (pesan3 == 'b') {
                      qty33=jumlah_pesan2+jumlah_pesan3;
                      j33=qty33*25000;}}}
          if (pesan1 == 'b') {
              if (pesan2 == 'k') {
                  if (pesan3 == 'k') {
                      qty33=jumlah_pesan1;
                      j33=qty33*25000;}
                  if (pesan3 == 's') {
                      qty33=jumlah_pesan1;
                      j33=qty33*25000;}
                  if (pesan3 == 'b') {
                      qty33=jumlah_pesan1+jumlah_pesan3;
                      j33=qty33*25000;}}
              if (pesan2 == 's') {
                  if (pesan3 == 'k') {
                      qty33=jumlah_pesan1;
                      j33=qty33*25000;}
                  if (pesan3 == 's') {
                      qty33=jumlah_pesan1;
                      j33=qty33*25000;}
                  if (pesan3 == 'b') {
                      qty33=jumlah_pesan1+jumlah_pesan3;
                      j33=qty33*25000;}}
              if (pesan2 == 'b') {
                  if (pesan3 == 'k') {
                      qty33=jumlah_pesan1+jumlah_pesan2;
                      j33=qty33*25000;}
                  if (pesan3 == 's') {
                      qty33=jumlah_pesan1+jumlah_pesan2;
                      j33=qty33*25000;}
                  if (pesan3 == 'b') {
                      qty33=jumlah_pesan1+jumlah_pesan2+jumlah_pesan3;
                      j33=qty33*25000;}}}
          cout << "=====================================================" << endl;
          cout << "              Ice Boba Brown Sugar                   " << endl;
          cout << "        Jl. Rekaman Dalam Banget No. 10              " << endl;
          cout << "=====================================================" << endl;
          cout << nama << "                       " << tanggal << endl;
          cout << "=====================================================" << endl;
          cout << "Menu   \t Harga Satuan \t Qty \t Jumlah" << endl;
          cout << "Kecil  \t 12.000       \t " << qty31 <<  "\t " << j31 << endl;
          cout << "Sedang \t 18.000       \t " << qty32 <<  "\t " << j31 << endl;
          cout << "Besar  \t 25.000       \t " << qty33 <<  "\t " << j33 << endl;
          cout << "----------------------------------------------------" << endl;
          cout << "                  Total         : " << total3 << endl;
          cout << "                  Pajak         : 8000" << endl;
          cout << "                  Total Bayar   : " << total_bayar3 << endl;
          cout << "                  Uang Bayar    : " << duit << endl;
          cout << "                  Kembalian     : " << kembalian3 << endl; 
          cout << "=====================================================" << endl;
          cout << "Terima Kasih Sudah Beli Ice Boba Brown Di Kami" << endl;
          cout << "=====================================================" << endl;}
       else if (cetak == 't') {
          cout << " " << endl;}
    }
/*--------------pesan ketiga ditutup--------------*/  
    else if (beli_tidak2 == 't') {
    int total2 = harga1+harga2;
    cout << "Total         : " << total2 << endl;
    cout << "Pajak         : 8000" << endl;
    int total_bayar2 = total2 + 8000;
    cout << "Total Bayar   : " << total_bayar2  << endl;
    cout << "Uang Bayar    : ";
    int duit;
    cin >> duit;
    int kembalian2 = duit - total_bayar2;            cout << "Kembalian     : " << kembalian2 << endl; 
    char cetak;
    cout << "Mau Cetak Struk [ y / t ] : ";
    cin >> cetak;
    if (cetak == 'y') {
        int qty21, j21;
          if (pesan1 == 'k') {
              if (pesan2 == 'k') {
                  qty21=jumlah_pesan1+jumlah_pesan2;
                  j21=qty21*12000;}
              if (pesan2 == 's') {
                  qty21=jumlah_pesan1;
                  j21=qty21*12000;}
              if (pesan2 == 'b') {
                  qty21=jumlah_pesan1;
                  j21=qty21*12000;}}
          if (pesan1 == 's') {
              if (pesan2 == 'k') {
                  qty21=jumlah_pesan2;
                  j21=qty21*12000;}
              if (pesan2 == 's') {
                  qty21=0;
                  j21=0;}
              if (pesan2 == 'b') {
                  qty21=0;
                  j21=0;}}
          if (pesan1 == 'b') {
              if (pesan2 == 'k') {
                  qty21=jumlah_pesan2;
                  j21=qty21*12000;}
              if (pesan2 == 's') {
                  qty21=0;
                  j21=0;}
              if (pesan2 == 'b') {
                  qty21=0;
                  j21=0;}}
          int qty22, j22;
          if (pesan1 == 'k') {
              if (pesan2 == 'k') {
                  qty22=0;
                  j22=0;}
              if (pesan2 == 's') {
                  qty22=jumlah_pesan2;
                  j22=qty22*18000;}
              if (pesan2 == 'b') {
                  qty22=0;
                  j22=0;}}
          if (pesan1 == 's') {
              if (pesan2 == 'k') {
                  qty22=jumlah_pesan1;
                  j22=qty22*18000;}
              if (pesan2 == 's') {
                  qty22=jumlah_pesan1+jumlah_pesan2;
                  j22=qty22*18000;}
              if (pesan2 == 'b') {
                  qty22=jumlah_pesan1;
                  j22=qty22*18000;}}
          if (pesan1 == 'b') {
              if (pesan2 == 'k') {
                  qty22=0;
                  j22=0;}
              if (pesan2 == 's') {
                  qty22=jumlah_pesan2;
                  j22=qty22*18000;}
              if (pesan2 == 'b') {
                  qty22=0;
                  j22=0;}}
            int qty23, j23;
          if (pesan1 == 'k') {
              if (pesan2 == 'k') {
                  qty23=0;
                  j23=0;}
              if (pesan2 == 's') {
                  qty23=0;
                  j23=0;}
              if (pesan2 == 'b') {
                  qty23=jumlah_pesan2;
                  j23=qty23*25000;}}
          if (pesan1 == 's') {
              if (pesan2 == 'k') {
                  qty23=0;
                  j23=0;}
              if (pesan2 == 's') {
                  qty23=0;
                  j23=0;}
              if (pesan2 == 'b') {
                  qty23=jumlah_pesan2;
                  j23=qty23*25000;}}
          if (pesan1 == 'b') {
              if (pesan2 == 'k') {
                  qty23=jumlah_pesan1;
                  j23=qty23*25000;}
              if (pesan2 == 's') {
                  qty23=jumlah_pesan1;
                  j23=qty23*25000;}
              if (pesan2 == 'b') {
                  qty23=jumlah_pesan1+jumlah_pesan2;
                  j23=qty23*25000;}}
       cout << "=====================================================" << endl;
       cout << "              Ice Boba Brown Sugar                   " << endl;
       cout << "        Jl. Rekaman Dalam Banget No. 10              " << endl;               
       cout << "=====================================================" << endl;
       cout << nama << "                       " << tanggal << endl;
       cout << "=====================================================" << endl;
       cout << "Menu   \t Harga Satuan \t Qty \t Jumlah" << endl;
       cout << "Kecil  \t 12.000       \t " << qty21 << "\t " << j21 << endl;
       cout << "Sedang \t 18.000       \t " << qty22 << "\t " << j22 << endl;
       cout << "Besar  \t 25.000       \t " << qty23 << "\t " << j23 << endl;
       cout << "----------------------------------------------------" << endl;
       cout << "                  Total         : " << total2 << endl;
       cout << "                  Pajak         : 8000" << endl;
       cout << "                  Total Bayar   : " << total_bayar2 << endl;
       cout << "                  Uang Bayar    : " << duit << endl;
       cout << "                  Kembalian     : " << kembalian2 << endl; 
       cout << "=====================================================" << endl;
       cout << "Terima Kasih Sudah Beli Ice Boba Brown Di Kami" << endl;
       cout << "=====================================================" << endl;}
   else if (cetak == 't') {
       cout << " " << endl;}
   }
/*----------------------------- pesan kedua--------------------*/
  }
  else if (beli_tidak1 == 't') {
  int total1= harga1;
  cout << "Total         : " << total1 << endl;
  cout << "Pajak         : 8000" << endl;
  int total_bayar1 = total1+8000;
  cout << "Total Bayar   : " << total_bayar1  << endl;    
  cout << "Uang Bayar    : ";
  int duit;
  cin >> duit;
  int kembalian1 = duit - total_bayar1;
  cout << "Kembalian     : " << kembalian1 << endl; 
  char cetak;
  cout << "Mau Cetak Struk [ y / t ] : ";
  cin >> cetak;
  if (cetak == 'y') {
    int qty11, j11;
    if (pesan1 == 'k') {
              qty11=jumlah_pesan1;
              j11=qty11*12000;}
    if (pesan1 == 's') {
              qty11=0;
              j11=0;}
    if (pesan1 == 'b') {
              qty11=0;
              j11=0;}
    int qty12, j12;
    if (pesan1 == 'k') {
              qty12=0;
              j12=0;}
    if (pesan1 == 's') {
              qty12=jumlah_pesan1;
              j12=qty12*18000;}
    if (pesan1 == 'b') {
              qty12=0;
              j12=0;}
    int qty13, j13;
    if (pesan1 == 'k') {
              qty13=0;
              j13=0;}
    if (pesan1 == 's') {
              qty13=0;
              j13=0;}
    if (pesan1 == 'b') {
              qty13=jumlah_pesan1;
              j13=qty13*25000;}
     cout << "=====================================================" << endl;
     cout << "              Ice Boba Brown Sugar                   " << endl;
     cout << "        Jl. Rekaman Dalam Banget No. 10              " << endl;
     cout << "=====================================================" << endl;
     cout << nama << "                       " << tanggal << endl;
     cout << "=====================================================" << endl;
     cout << "Menu   \t Harga Satuan \t Qty \t Jumlah" << endl;
     cout << "Kecil  \t 12.000       \t " << qty11 << "\t " << j11 << endl;
     cout << "Sedang \t 18.000       \t " << qty12 << "\t " << j12 << endl;
     cout << "Besar  \t 25.000       \t " << qty13 << "\t " << j13 << endl;
     cout << "----------------------------------------------------" << endl;
     cout << "                  Total         : " << total1  << endl;
     cout << "                  Pajak         : 8000" << endl;
     cout << "                  Total Bayar   : " << total_bayar1 << endl;
     cout << "                  Uang Bayar    : " << duit << endl;
     cout << "                  Kembalian     : " << kembalian1 << endl; 
     cout << "=====================================================" << endl;
     cout << "Terima Kasih Sudah Beli Ice Boba Brown Di Kami" << endl;
     cout << "=====================================================" << endl;
  } else if (cetak == 't') {
    cout << " " << endl;}}
  return 0;
}
