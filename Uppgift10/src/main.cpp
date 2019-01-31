#include <iostream>
using namespace std;
int main() {
    int tim;

    cout << "Hur många timmar jobbade du senaste månaden?" << endl;;
    cin >> tim;

    if(tim <= 160){ // Om jobbat tid mindre eller lika med 160 så får man 100kr
                    // timlön * antal timmar.
        cout << tim * 100 << " kr i lön";
    } else if(tim >= 161){
        // Om jobbar mer än 160 timmar så får man 16000kr för 160 timmar jobbat med
        // 100kr timlön + antalet timmar jobbat - 160 för de första 16000kronorna * 150;
        tim = tim - 160;
        cout << 16000 + tim * 150 << " kr i lön";
    }
}