#include <iostream>

using std::cout;
using std::cin;

int main () 
{
    int alas, tinggi;
    float luas;

    cout << "Tuliskan nilai alasnya:";
    cin >> alas;

    cout << "Tuliskan nilai tingginya:";
    cin >> tinggi;

    luas = (0.5) * alas * tinggi;

    cout << "\n Jadi luasnya adalah: " << luas;
    return 0;
    
}