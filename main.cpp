#include <iostream>

using namespace std;

int main(){
    system("cls");

    // Array Merupakan sebuah kumpulan data yang letak memorynya ber urutan
    int Angka[5]; // Tipe_Data Nama_Data[Panjang_Array];

    // Memasukkan Sebuah angka ke array
    cout << "Memasukkan Angka Pada Array" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Angka Ke-" << i + 1 << " : " ;
        cin >> Angka[i]; // Array dimulai dari 0  
    }

    // Mengeluarkan sebuah angka pada array;
    cout << endl << "Mengeluarkan Angka Pada Array" << endl;
    for (int i = 0; i < 5; i++){
         cout << "Angka Ke-" << i + 1 << " : " << Angka[i] << endl;
         cout << "Dan Alamtnya : " << &Angka[i] << endl;
    }
    
    
    cin.get();
    return 0;
}