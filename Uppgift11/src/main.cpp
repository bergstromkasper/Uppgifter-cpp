#include <iostream>
using namespace std;

int main()
{
    int heltal;
    cout << "Skriv valfritt heltal: ";
    cin >> heltal;

    while (heltal > 0)
    {
        cout << heltal << endl;
        heltal--;
    }
}