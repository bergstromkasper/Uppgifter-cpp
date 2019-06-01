#include <iostream>
#include <string>
using namespace std;

int main()
{
    char first;
    string rest;
    cout << "Skriv ditt namn: ";
    cin >> first >> rest;
    first = 'Z';
    cout << first << rest;
}