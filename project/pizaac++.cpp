#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{   Home :
    cout << "       DELICIOUS PIZZA K-BEN" << endl;
    cout << "----------------------------------" << endl;
    cout << " Code \t Size      \t Price    " << endl;
    cout << "----------------------------------" << endl;
    cout << " [S] \t Small  \t Rp. 25000" << endl;
    cout << " [M] \t Medium \t Rp. 50000" << endl;
    cout << " [L] \t Large  \t Rp. 90000" << endl;
    cout << "----------------------------------" << endl;
    int purchases;
    cout << "Purchase = ";
    cin >> purchases;
    if (purchases > 0) {
    char type[10];
    int amountof[10];
    int at=1;
    int price[10];
    int subtotal=0;

    for (int i=1; i<=purchases; i++) {
      cout << "Purchase  - " << at++ << endl;  
      cout << "Size [S/M/L] : ";
      cin >> type[i];
      cout << "Pieces : ";
      cin >> amountof[i];
      cout << "--------------------------" << endl << endl;
       if (type[i] == 'S') {
         price[i]=amountof[i]*25000;}
       if (type[i] == 'M') {
         price[i]=amountof[i]*50000;}
       if (type[i] == 'L') {  
         price[i]=amountof[i]*90000;}
     subtotal+=price[i]; }
    cout << "             DELICIOUS PIZZA K-BEN           " << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "No.  |  Type    | Unit     | Unit     | Amount of  " << endl;
    cout << "     |  Size    | Price    | Piece    | Total   " << endl;
    cout << "=====================================================" << endl; 
    
    for (int i=1; i<=purchases; i++) {
    cout << i << "    |";
        if (type[i] == 'S') {
           cout << " Small     | ";
                        cout << "25000    | ";}
        if (type[i] == 'M') {
           cout << " Medium    | "; 
                        cout << "50000    | ";}
        if (type[i] == 'L') {
           cout << " Large     | ";
                        cout << "90000    | ";}
                  cout << " " << amountof[i] << "       | " << "IDR " << price[i] << endl;}
    int tax;
    int pay;
    tax =0.1*subtotal;
    pay=tax+subtotal;
    cout << "                         Amount Of Paid  IDR " << subtotal << endl;
    cout << "                         Taxes 10%       IDR " << tax << endl;
    cout << "                         Payment         IDR " << pay << endl;
    cout << " " << endl;
    char order;
    cout << "Another order? [Y/N] = ";
    cin >> order;
    if (order == 'Y') {
        goto Home;}
    if (order == 'N') {
    cout << "Thank you & Bon appétit! :)" << endl;}}
    else if (purchases == 0) {
    cout << endl;
    cout << "Purchase not allowed" << endl;}
  return 0;
}
