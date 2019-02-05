#include <iostream>
using namespace std;

int main()
{
    int pinkod, kod, fails;
    fails = 0;
    kod = 1234;

    cout << "Skriv din fyrsiffriga pinkod: ";
    cin >> pinkod;

    while (pinkod != kod && fails < 2)
    {
        cout << "Försök igen!" << endl;
        cin >> pinkod;
        fails++;
    }
    if (fails >= 2)
    {
        cout << "Ditt kort är nu spärrat!";
    }
    if (pinkod == kod && fails < 2)
    {
        cout << "Grattis, du får nu ta ut pengar!";
    }
}