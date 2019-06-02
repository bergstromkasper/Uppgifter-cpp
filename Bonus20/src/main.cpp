#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
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
        string number;

        int length;
        cout << "Vilka tärning vill du slå om(1-5)? : ";
        getline(cin, number);
        length = number.length();
        for (int i = 0; i < length; i++)
        {

            if (number[i] == '1')
            {
                slag[0] = rand() % 6 + 1;
            }
            else if (number[i] == '2')
            {
                slag[1] = rand() % 6 + 1;
            }
            else if (number[i] == '3')
            {
                slag[2] = rand() % 6 + 1;
            }
            else if (number[i] == '4')
            {
                slag[3] = rand() % 6 + 1;
            }
            else if (number[i] == '5')
            {
                slag[4] = rand() % 6 + 1;
            }
            else if (number[i] == ' ')
            {
                length = length;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            cout << "Tärning " << i + 1 << ": " << slag[i] << endl;
        }
    }
}