#include <iostream>

using namespace std;

int main()
{
    int a,b,fpb;
    cout << "Masukkan Bilangan Pertama : ";
    cin >> a;

    cout << "Masukkan Bilangan Kedua : ";
    cin >> b;
    cout << "faktor Persekutuan { ";
    for (int i=1; i<=a; i++)
    {
        if (a%i==0 && b%i==0)
            {
            fpb = i;
            cout << i << " ";
        }

    }

    cout << "}" << endl <<"FPB dari kedua bilangan adalah : "<<fpb<<endl;
    return 0;
}
