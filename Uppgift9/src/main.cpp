#include <iostream>
using namespace std;

int main() {
 int n1, n2, n3;

 cout << "Välj 3 stycken heltal" << endl;
 cin >> n1 >> n2 >> n3;

 if(n1 >= n2 and n1 >= n3){
     cout << n1 << " är det största nummret";
 } else if(n2 >= n1 and n2 >= n3){
     cout << n2 << " är det största nummret";
 } else if(n3 >= n1 and n3 >= n2){
     cout << n3 << " är det största nummret";
 }
}