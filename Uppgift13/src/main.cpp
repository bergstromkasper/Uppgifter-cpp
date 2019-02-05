#include <iostream>
using namespace std;

int main()
{
    int steg, avslut, start, check, tal;

    cout << "Välj starttal: ";
    cin >> start;
    check = 0;
    while (check == 0)
    {
        if (start >= 10 && start <= 20)
        {
            check = 1;
            cout << "Hur många steg ska räknaren ta?" << endl;
            cin >> steg;
            cout << "Och var ska den sluta räkna?" << endl;
            cin >> avslut;
            tal = start;
            while (tal > avslut)
            {
                tal = tal - steg;
                cout << tal << endl;
            }
        }
        else
        {
            cout << "Talet kan bara vara mellan 10 och 20" << endl;
            cin >> start;
        }
    }
}