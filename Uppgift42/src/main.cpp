#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int tal, gissning;
    srand(time(0));
    cout << "Du måste gissa ett hemligt tal mellan 1 till 100." << endl;
    tal = rand() % 100 + 1;
    bool q = true;
    while (q == true)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Gissning " << i + 1 << ":";
            cin >> gissning;

            if (gissning == tal)
            {
                cout << "You win!";
                q = false;
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
        cout << "Talet var: " << tal;
        q = false;
    }
}