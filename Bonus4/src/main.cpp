#include <iostream>
using namespace std;

int main() {
 float t1, t2;

 cout << "Skriv 2 valfria värden: "<< endl;
 cin >> t1 >> t2;

    if(t1 == t2){
    cout << "Grattis!";
    } else if(t1 - t2 <= 10 && t1 - t2 >= -10){ // t1 - t2 måste vara mellan -10 och 10
    // beroende på vilken ordning man skriver in talen.
    cout << "Close but no cigar!";
    } else {
    cout << "Not even close!";
  }
}