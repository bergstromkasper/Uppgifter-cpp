#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int slag[5];
    char val;
    srand(time(0));

    for (int i = 0; i < 5; i++)
    {
        slag[i] = rand() % 6 + 1;
        cout << "Tärning " << i + 1 << ": " << slag[i] << endl;
    }
    cout << "Vill du slå om en tärning? Ja eller Nej: ";
    cin >> val;
    cin.ignore(255, '\n');
    if (val == 'J' or val == 'j')
    {
        int number;
        cout << "Vilken tärning vill du slå om(1-5)? ";
        cin >> number;
        number = number - 1;
        if (number == 0)
        {
            slag[0] = rand() % 6 + 1;
        }
        else if (number == 1)
        {
            slag[1] = rand() % 6 + 1;
        }
        else if (number == 2)
        {
            slag[2] = rand() % 6 + 1;
        }
        else if (number == 3)
        {
            slag[3] = rand() % 6 + 1;
        }
        else if (number == 4)
        {
            slag[4] = rand() % 6 + 1;
        }
        for (int i = 0; i < 5; i++)
        {
            cout << "Tärning " << i + 1 << ": " << slag[i] << endl;
        }
    }
}