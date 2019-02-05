#include <iostream>
using namespace std;

int main()
{
    int heltal, check, multi;
    multi = 0;
    check = 0;
    cout << "Välj ett tal mellan 1 och 12" << endl;
    cin >> heltal;

    if (heltal <= 12 && heltal > 0)
    {
        check = 1;
        while (multi <= 12)
        {
            cout << multi << " x " << heltal << " = " << multi * heltal << endl;
            multi++;
        }
    }

    while (check == 0)
    {
        cout << "Talet måste vara mellan 1 och 12" << endl;
        cin >> heltal;
    }
}