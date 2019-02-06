#include <iostream>
using namespace std;

int main()
{
    int heltal, steg, tal, avslut;
    int check = 0;
    cout << "Skriv ett heltal mellan 10 och 20: ";
    cin >> heltal;
    tal = heltal;

    while (check == 0)
    {
        if (heltal >= 10 && heltal <= 20)
        {
            cout << "Hur många steg ska programmet ta?: ";
            cin >> steg;
            cout << "Var ska programmet sluta räkna?: ";
            cin >> avslut;
            check = 1;
            for (tal; tal > avslut; tal = tal - steg)
            {
                cout << tal << endl;
            }
        }
        else
        {
            cout << "Talet måste vara mellan 10 och 20: ";
            cin >> heltal;
        }
    }
}