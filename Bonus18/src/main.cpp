#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int tal, gissning, ai;
    srand(time(0));
    cout << "Du måste gissa ett hemligt tal mellan 1 till 100." << endl;
    tal = rand() % 100 + 1;

    for (int i = 0; i < 5; i++)
    {
        cout << "Gissning " << i + 1 << ":";
        cin >> gissning;
        ai = rand() % 100 + 1;

        if (gissning == tal)
        {
            cout << "You win!" << endl;
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
        cout << "AI gissar på " << ai << endl;
        if (ai == tal)
        {
            cout << "AI win!";
        }
        else if (ai > tal)
        {
            cout << "Talet är mindre.";
            cout << endl;
        }
        else if (ai < tal)
        {
            cout << "Talet är större.";
            cout << endl;
        }
    }
    cout << "Talet var: " << tal;
}