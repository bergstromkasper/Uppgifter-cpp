#include <iostream>
#include <string>
using namespace std;

string AbbaMaker(string ord1, string ord2)
{
    string Abba;
    Abba = ord1 + ord2 + ord2 + ord1;
    return Abba;
}

int main()
{
    string ord1, ord2, Abba;
    cout << "Skriv 2 ord: ";
    cin >> ord1 >> ord2;
    Abba = AbbaMaker(ord1, ord2);
    cout << Abba;
}