#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    char svar;
    bool q = true;
    while (q == true)
    {
        srand(time(0));
        int tal = rand() % 100 + 1;
        cout << "Du måste gissa ett hemligt tal mellan 1 till 100." << endl;

        for (int i = 0; i < 5; i++)
        {
            int gissning = 0;
            cout << "Gissning " << i + 1 << ":";
            cin >> gissning;

            if (gissning == tal)
            {
                cout << "You win!";
                return 0;
            }
            else if (gissning > tal)
            {
                cout << "Talet är mindre.";
                cout << endl;
            }
            else if (gissning < tal)
            {
                cout << "Talet är större.";
                cout << endl;
            }
        }
        cout << endl
             << "Talet var: " << tal << endl;
        cout << "vill du köra igen?";
        cin >> svar;
        cin.ignore(255, '\n');
        if (svar == 'J' or svar == 'j')
        {
            q == true;
        }
        else if (svar == 'N' or svar == 'n')
        {
            q = false;
        }
    }
}
