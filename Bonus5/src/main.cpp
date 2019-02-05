#include <iostream>
using namespace std;

int main()
{
    float total, kontant, vxl, handla, check, tusen, hundra, femtio, tjugo, tio, fem, en;
    tusen = 0;
    hundra = 0;
    femtio = 0;
    tjugo = 0;
    tio = 0;
    fem = 0;
    en = 0;
    // använder check för att kolla att talet är under 10 000
    check = 0;

    cout << "Hur mycket pengar har personen handlat för?" << endl;
    cin >> handla;
    cout << "hur mycket betalar personen i kontant?" << endl;
    cin >> kontant;
    vxl = kontant - handla;
    while (check == 0)
    {
        if (handla <= 10000 && kontant <= 10000)
        {
            // Om handla är mindre eller lika med 10 000 så ska check bli 1 och while loopen sluta köra
            check = 1;
        }
        else
        {
            // annars ska man ändra numret
            cout << "Man får bara handla för 10000 max i kontant" << endl;
            cin >> handla;
            cout << "Kontant" << endl;
            cin >> kontant;
        }
    }

    cout << "Totalt " << vxl << " kr växel" << endl;

    while (vxl - 1000 > -1)
    {
        vxl = vxl - 1000;
        tusen = tusen + 1;
    }
    cout << tusen << " st tusenlappar" << endl;
    // Om vxl - 100 är större än -1 men mindre än 1000
    while (vxl - 100 > -1 && vxl <= 999)
    {
        vxl = vxl - 100;
        hundra = hundra + 1;
    }
    cout << hundra << " st hundralappar" << endl;
    // Om vxl - 100 är större än -1 men mindre än 100
    while (vxl - 50 > -1 && vxl <= 99)
    {
        vxl = vxl - 50;
        femtio = femtio + 1;
    }
    cout << femtio << " st femtiolappar" << endl;
    // Om vxl - 100 är större än -1 men mindre än 50
    while (vxl - 20 > -1 && vxl <= 49)
    {
        vxl = vxl - 20;
        tjugo = tjugo + 1;
    }
    cout << tjugo << " st tjugolappar" << endl;
    // Om vxl - 100 är större än -1 men mindre än 20
    while (vxl - 10 > -1 && vxl <= 19)
    {
        vxl = vxl - 10;
        tio = tio + 1;
    }
    cout << tio << " st tiokronor" << endl;
    // Om vxl - 100 är större än -1 men mindre än 10
    while (vxl - 5 > -1 && vxl <= 9)
    {
        vxl = vxl - 5;
        fem = fem + 1;
    }

    cout << fem << " st femkronor" << endl;
    // Om vxl - 100 är större än -1 men mindre än 5
    while (vxl - 1 >= 0 && vxl <= 4)
    {
        vxl = vxl - 1;
        en = en + 1;
    }
    cout << en << " st enkronor" << endl;
}