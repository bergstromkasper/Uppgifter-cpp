#include <iostream>
using namespace std;

int main() {
float kilopris1, kilopris2, vikt1, vikt2, pris1, pris2, total, moms;

cout << "Vikt av vara 1 i kilo: ";
cin >> vikt1;
cout << "Kilopris på varan i kr: ";
cin >> kilopris1;

cout << "Vikt av vara 2 i kilo: ";
cin >> vikt2;
cout << "Kilopris på varan i kr: ";
cin >> kilopris2;

pris1 = vikt1 * kilopris1; 
pris2 = vikt2 * kilopris2;
total = pris1 + pris2;
moms = total * 1.12;
cout << "Det kostar " << moms << ":-";
}