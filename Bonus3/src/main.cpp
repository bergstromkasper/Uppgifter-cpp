#include <iostream>
using namespace std;

int main() {
    int t1, m1, s1, t2, m2, s2, ttot, mtot, stot;

    cout << "Hur snabbt sprang du i lopp 1 i formatet TT MM SS?" << endl;
    cin >> t1 >> m1 >> s1;

    cout << "Hur snabbt sprang du i lopp 2 i formatet TT MM SS?" << endl;
    cin >> t2 >> m2 >> s2;

    // Testar så att man inte skriver minut eller sekunder som har mer tal än 2 eller är
    // större än 59.
    if(to_string(m1).length() > 2 or to_string(m2).length() > 2
     or m1 > 59 or m2 > 59){
        cout << "Minuter kan bara skrivas mellan 0 och 59" << endl;
    }
    if(to_string(s1).length() > 2 or to_string(s2).length() > 2
     or s1 > 59 or s2 > 59){
        cout << "Sekunder kan bara skrivas mellan 0 och 59" << endl;
    }

    // Addera ihop totalen.
    ttot = t1 + t2;
    mtot = m1 + m2;
    stot = s1 + s2;

    // Om antalet sekunder är mer än 60 i totalen, så ska jag lägga till 1 minut och
    // ta bort 60 sekunder.
    if(stot > 60){
        mtot = mtot + 1;
        stot = stot - 60;
    }   

    // Om antalet minuter är mer än 60 i totalen, så ska jag lägga till 1 timme och
    // ta bort 60 minuter.
    if(mtot > 60){
        ttot = ttot + 1;
        mtot = mtot - 60;
    }

    cout << "Du sprang loppen på " << ttot << " timmar "
     << mtot << " minuter och " << stot << " sekunder.";

}