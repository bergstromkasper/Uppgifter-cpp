#include <iostream>
using namespace std;

int calculator(int temp)
{
    return temp * 9 / 5 + 32;
}
int temp()
{
    int temp;
    cout << "Skriv in din temperatur för att omvandla till Fahrenheit: ";
    cin >> temp;
    cout << calculator(temp);
}

int main()
{
    temp();
}