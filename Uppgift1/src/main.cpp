
#include <iostream>

using namespace std;

int main() {
  int today, lastyear, mil;

 cout << "Hur många mil har din bil kört idag? " << endl;
 cin >> today;
 cout << "Hur många mil hade din bil kört för ett år sedan? " << endl;
 cin >> lastyear;
 mil = today - lastyear;
 cout << "Din bil har kört " << mil << " mil det senaste året!";
}