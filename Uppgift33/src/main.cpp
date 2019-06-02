#include <iostream>
using namespace std;

void IncreaseFunction(int increase)
{
    cout << increase + 2;
}

int main()
{
    int tal;
    cout << "Skriv in ett värde: ";
    cin >> tal;
    IncreaseFunction(tal);
}