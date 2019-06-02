#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int slag[5];
    srand(time(0));

    for (int i = 0; i < 5; i++)
    {
        slag[i] = rand() % 6 + 1;
        cout << "Tärning " << i + 1 << ": " << slag[i] << endl;
    }
}