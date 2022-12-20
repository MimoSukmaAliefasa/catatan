#include <iostream>

using namespace std;

int main()
{
    int data[]={5,6,3,7,2,9,8,6,4,1};
    int cari;

    cout << "\t Mencari NIlai pada Data Array \n \n";

    cout << "Isi Datanya : ";
    for(int i = 0; i < 10; i++){
        cout << data[i] << ", ";
    }

    cout << "\n\n Cari Nilai Berapa : ";
    cin >> cari;

    for(int j = 0; j < 10; j++){
        if(cari == data[j]){

            cout << "\n Data dengan Nilai" << cari << "terdapat pada Indeks ke-"<<j;
        }
    }
}
