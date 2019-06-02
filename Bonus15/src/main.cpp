#include <iostream>
using namespace std;

int ConvertF(int temp)
{
    return temp * 9 / 5 + 32;
}
int ConvertC(int temp)
{
    return (temp - 32) / 1.8;
}

int FormelVal(char val, int temp)
{
    int svar;
    if (val == 'F' || val == 'f')
    {
        svar = ConvertF(temp);
    }
    if (val == 'C' || val == 'c')
    {
        svar = ConvertC(temp);
    }
    return svar;
}

int main()
{
    int temp, grad;
    char val;
    cout << "Vill du omvandla Celsius till Fahrenheit (F) eller Fahrenheit till celsius (C)?: ";
    cin >> val;
    cout << "Skriv in din temperatur som ska omvandlas: ";
    cin >> temp;
    grad = FormelVal(val, temp);
    cout << grad;
}