#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int random(int t1, int t2)
{
    srand(time(0));
    if (t1 > t2)
    {
        return rand() % t1 + t2;
    }
    else
    {
        return rand() % t2 + t1;
    }
}
int main()
{
    int t1, t2;

    cout << "Välj 2 olika heltal: ";
    cin >> t1 >> t2;
    cout << random(t1, t2);
}