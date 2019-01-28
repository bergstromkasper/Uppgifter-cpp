#include <iostream>

using namespace std;

int main() {
  int today, lastyear, mil, bensin;
  float permil;

 cout << "Hur många mil har din bil kört idag? " << endl;
 cin >> today;
 cout << "Hur många mil hade din bil kört för ett år sedan? " << endl;
 cin >> lastyear;
 cout << "Hur mycket bensin har du förbrukar senaste året? " << endl;
 cin >> bensin;
 mil = today - lastyear;
 permil = mil / bensin;


 cout << "Antal körda mil: " << mil << endl;
 cout << "Antal liter bensin: " << bensin << endl;
 cout << "Förbrukning per mil: " << permil << endl;
}