#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int tal, gissning, ai;
    int min = 0, max = 100;
    bool less, more;
    srand(time(0));
    cout << "Du måste gissa ett hemligt tal mellan 1 till 100." << endl;
    tal = rand() % 100 + 1;

    for (int i = 0; i < 5; i++)
    {

        cout << "Gissning " << i + 1 << ":";
        cin >> gissning;
        if (gissning == tal)
        {
            cout << "You win!" << endl;
            return 0;
        }
        else if (gissning > tal)
        {
            cout << "Talet är mindre.";
            cout << endl;
            max = gissning;
        }
        else if (gissning < tal)
        {
            cout << "Talet är större.";
            cout << endl;
            min = gissning;
        }

        ai = rand() % max + min;
        while (ai >= max or ai == 0 or ai == gissning)
        {
            ai = rand() % max + min;
        }
        // AI
        cout << "AI gissar på " << ai << endl;
        if (ai == tal)
        {
            cout << "AI win!";
            return 0;
        }
        else if (ai > tal)
        {
            cout << "Talet är mindre.";
            cout << endl;
            max = ai;
        }
        else if (ai < tal)
        {
            cout << "Talet är större.";
            cout << endl;
            min = ai;
        }
    }
    cout << "Talet var: " << tal;
}