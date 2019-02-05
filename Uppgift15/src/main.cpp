#include <iostream>
using namespace std;

int main()
{
    int heltal;
    cout << "Skriv valfritt heltal: ";
    cin >> heltal;

    for (heltal; heltal >= 0; heltal--)
    {
        cout << heltal << endl;
    }
}