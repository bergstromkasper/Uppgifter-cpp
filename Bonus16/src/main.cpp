#include <iostream>
using namespace std;

int WhileMax(int value)
{
    int heltal;

    while (heltal >= value)
    {
        cout << "Skriv in ett heltal: ";
        cin >> heltal;
    }
}
int main()
{
    // Sätter ett värde så länge.
    int value = 9;
    WhileMax(value);
}