#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int pythagoras(char val, int sida1, int sida2)
{
    if (val == 'H' or val == 'h')
    {
        return sqrt(pow(sida1, 2) + pow(sida2, 2));
    }
    if (val == 'K' or val == 'k')
    {
        if (sida1 < sida2)
        {
            return sqrt(pow(sida2, 2) - pow(sida1, 2));
        }
        else
        {
            return sqrt(pow(sida1, 2) - pow(sida2, 2));
        }
    }
}
int main()
{
    char val;
    int sida1, sida2;
    cout << "Vilken sida ska beräknas? (Hypotenusa eller Kateter): ";
    cin >> val;
    cout << "Hur långa är de 2 andra sidorna?: ";
    cin >> sida1 >> sida2;
    cout << pythagoras(val, sida1, sida2);
}