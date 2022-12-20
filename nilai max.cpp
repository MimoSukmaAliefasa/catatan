#include <iostream>

using namespace std;

int main(){
int a,b,c,maxi;

    cin >> a;
    cin >> b;
    cin >> c;

    if(a > b && a > c){
        maxi = a;
    }
    if(b > a && b > c){
        maxi = b;
    }
    if(c > a && c > b){
        maxi = c;
    }
    cout << "nilai max: " <<maxi;
    cout << "\n\n";
}
