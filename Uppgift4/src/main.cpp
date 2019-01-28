#include <iostream>
using namespace std;

int main() {
int A, B, C;

cout << "Skriv värde A: ";
cin >> A;
cout << "Skriv värde B: ";
cin >> B;

C = A;
A = B;
B = C;

cout << "A: " << A << endl;
cout << "B: " << B << endl;
cout << "Värdena har bytt plats";
}