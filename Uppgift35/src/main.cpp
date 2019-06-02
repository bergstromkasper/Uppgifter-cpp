#include <iostream>
using namespace std;

int IncreaseFunction(int tal1, int tal2)
{
    return tal1 + tal2;
}

int main()
{
    int tal1, tal2, svar;
    cout << "Skriv in två värde: ";
    cin >> tal1 >> tal2;

    cout << IncreaseFunction(tal1, tal2);
}