#include <iostream>
using namespace std;

int main() {
   int i, nilai [5];
   //Pengisian elemen array
   nilai [0] = 34;
   nilai [1] = 56;
   nilai [2] = 63;
   nilai [3] = 77;
   nilai [4] = 98;
   //Menampilkan data ke layar
   for (i = 0; i < 5; i++) {
       cout << nilai[i] << endl;
   }
    return 0;
}