#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    string items[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Skriv in föremål " << i << ": ";
        cin >> items[i];
    }
    cout << "Orkar " << items[0] << " inte " << items[1] << " skriva " << items[2] << " en " << items[3] << " hel " << items[4] << " historia "
         << items[5] << " det " << items[6] << " här " << items[7] << " räcker " << items[8] << " : ) " << items[9];
    return 0;
}
