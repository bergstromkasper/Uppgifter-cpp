#include <iostream>
using namespace std;
int main() {
 float heltal;
 float tal = 0; // ange tal 0
 cout << "Skriv in 5 heltal: " << endl;

 cin >> heltal; // Skriv ett Heltal
 tal = tal + heltal; // Spara heltalet på "tal". Och ta tal + heltal
// ex om heltalet skrivet är 4, så blir det tal = 0 + 4. Och på nästa blir det då
// tal = 4 + 6
 cin >> heltal;
 tal = tal + heltal;

 cin >> heltal;
 tal = tal + heltal;

 cin >> heltal;
 tal = tal + heltal;

 cin >> heltal; 
 tal = tal + heltal;
// skriv ut medelvärdet genom att ta alla heltal skrivna in och dela på 5.
 cout << "Medelvärdet är: " << tal / 5;
}