#include <iostream>
using namespace std;

int main()
{
    bool is_ten;
    int kontroll;
    cout << "Skriv in ett värde: ";
    cin >> kontroll;

    if (kontroll == 10)
    {
        is_ten = true;
    }

    if (kontroll != 10)
    {
        is_ten = false;
    }

    if (is_ten == true)
    {
        cout << "Du skrev in 10";
    }
    else if (is_ten == false)
    {
        cout << "Du skrev inte in 10";
    }
}