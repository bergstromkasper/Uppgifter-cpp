#include <iostream>
using namespace std;

int main() {
    int nu, modell, age;

    cout << "Vilket år är det idag?" << endl;
    cin >> nu;
    cout << "Vilken årsmodell har din bil?" << endl;
    cin >> modell;

    age = nu - modell;

    if(age <= 5){
        cout << "Du borde köpa en helförsäkring";
    } else  {
        cout << "Du borde skaffa en halvförsäkring";
    }
}