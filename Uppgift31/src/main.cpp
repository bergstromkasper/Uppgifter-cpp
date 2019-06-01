#include <iostream>
#include <string>
using namespace std;

int main()
{
    int length;
    string ord;

    cout << "Skriv ditt ord: ";
    getline(cin, ord);
    length = ord.length();
    for (int i = 0; i < length; i++)
    {
        if (ord[i] == 'Z')
        {
            ord[i] = 'a';
        }
    }
    cout << ord;
}