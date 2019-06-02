#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int rand1, rand2;
    srand(time(0));
    rand1 = rand() % 10 + 1;
    rand2 = rand() % 10 + 1;
    if (rand1 > rand2)
    {
        cout << rand2 << endl
             << rand1;
    }
    else
    {
        cout << rand1 << endl
             << rand2;
    }
}