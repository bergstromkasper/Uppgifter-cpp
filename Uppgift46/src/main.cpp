#include <iostream>
using namespace std;

int summa(int start)
{
    int i = start - 1;
    for (i; i > 0; i--)
    {
        start = start + i;
    }
    return start;
}
int main()
{
    int tal;
    cout << "Välj ett tal: ";
    cin >> tal;
    cout << summa(tal);
}