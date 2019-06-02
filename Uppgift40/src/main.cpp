#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int tal1, tal2;
    srand(time(0));
    cout << "Välj 2 olika heltal: ";
    cin >> tal1 >> tal2;
    if (tal1 > tal2)
    {

        cout << rand() % tal1 + tal2;
    }
    else
    {
        cout << rand() % tal2 + tal1;
    }
}