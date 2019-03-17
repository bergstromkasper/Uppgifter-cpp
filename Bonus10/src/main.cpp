#include <iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, next = 0, total = 0;

    for (int i = 0; i < 20; i++)
    {
        total = total + next;
        cout << next << ", ";
        n1 = n2;
        n2 = next;
        next = n1 + n2;
    }
    cout << "Summan av talen är: " << total;
}