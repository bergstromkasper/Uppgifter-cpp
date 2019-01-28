#include <iostream>
using namespace std;

int main() {
int heltal;
cout << "Skriv ett valfritt heltal: ";
cin >> heltal;
if(heltal > 45 && heltal < 63){
    cout << "GRATTIS! DU VANN! BRA JOBBAT!";
} else {
    cout << "GAME OVER";
}
}