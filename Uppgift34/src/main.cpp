#include <iostream>
using namespace std;

int IncreaseFunction(int increase)
{
    return increase + 2;
}

int main()
{
    int tal, svar;
    cout << "Skriv in ett värde: ";
    cin >> tal;

    cout << IncreaseFunction(tal);
}