#include <iostream>
#include <cmath>
using namespace std;

int main() {
float kat1, kat2, hypo2, hypo;

cout << "Längd på katet 1: ";
cin >> kat1;
cout << "Längd på katet 2: ";
cin >> kat2;
hypo2 = pow(kat1, 2) + pow(kat2, 2);
hypo = sqrt(hypo2);
cout << "Längden på hypotunosan är: " << hypo;
}