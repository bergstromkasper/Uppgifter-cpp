#include <iostream>
using namespace std;

int main() {
    int operation, tal1, tal2;
    
    cout << "Välj ditt räknesätt" << endl;
    cout << "1 // +" << endl;
    cout << "2 // -" << endl;
    cout << "3 // *" << endl;
    cout << "4 // /" << endl;
    cin >> operation;
    
    cout << "Välj nu 2 stycken heltal" << endl;
    cin >> tal1;
    cin >> tal2;

    if (operation == 1){
        cout << tal1 + tal2;
    } else if(operation == 2){
        cout << tal1 - tal2;
    } else if(operation == 3){
        cout << tal1 * tal2;
    } else if(operation == 4){
        cout << tal1 / tal2;
    }
}