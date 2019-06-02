#include <iostream>
#include <string>
using namespace std;

int calculator(int tal1, char function, int tal2)
{
    if (function == '-')
    {
        return tal1 - tal2;
    }
    if (function == '+')
    {
        return tal1 + tal2;
    }
    if (function == '/')
    {
        return tal1 / tal2;
    }
    if (function == '*')
    {
        return tal1 * tal2;
    }
}

int main()
{
    int tal1, tal2, svar;
    char function;
    cout << "Skriv din uträkning (tex 1 + 2): ";
    cin >> tal1 >> function >> tal2;

    svar = calculator(tal1, function, tal2);
    cout << svar;
}