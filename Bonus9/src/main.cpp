#include <iostream>
using namespace std;


int main() {
    int program;

    cout << "Välj program 4 till 6: ";
    cin >> program;


if(program == 4){
    int space = 9;
    int rad = 1;
    // Skriver ut 9 rader.
    for(int j = 0; j < 9; j++){
        // Skriver ut mellanslag beroende på rad nummer.
        for(int i = 0; i <= space; i++){
        cout << " ";
        }
        // Skriver ut och räknar upp till rad nummer.
        for(int e = 0; e < rad; e++){
            cout << e + 1 << " ";
        }
        // Räknar ner från rad nummer till 1.
        for(int f = rad - 1; f > 0; f--){
            cout << f << " ";
        }
    space--;
    rad++;
    cout << endl;
    }
}


if(program == 5){
    int space = 9;
    int rad = 1;
    // Skriver ut 9 rader.
    for(int j = 0; j < 9; j++){
        // Skriver ut mellanslag beroende på rad nummer.
        for(int i = 0; i <= space; i++){
        cout << " ";
        }
        // Skriver ut och räknar upp till rad nummer.
        for(int e = 0; e < rad; e++){
            cout << e + 1 << " ";
        }
        // Räknar ner från rad nummer till 1.
        for(int f = rad - 1; f > 0; f--){
            cout << f << " ";
        }
    space--;
    rad++;
    cout << endl;
    // när den kommer till hälften
    if(rad == 9){
        for(int j = 0; j < 9; j++){
        // Skriver ut mellanslag beroende på rad nummer.
        for(int i = 0; i <= space; i++){
        cout << " ";
        }
        // Skriver ut och räknar upp till rad nummer.
        for(int e = 0; e < rad; e++){
            cout << e + 1 << " ";
        }
        space++;
        rad--;
        cout << endl;
    }
}
}
}
if(program == 6){
    int space = 9;
    int rad = 1;
    // Skriver ut 9 rader.
    for(int j = 0; j < 9; j++){
        // Skriver ut mellanslag beroende på rad nummer.
        for(int i = 0; i <= space; i++){
        cout << " ";
        }
        // Skriver ut och räknar upp till rad nummer.
        for(int e = 0; e < rad; e++){
            cout << e + 1 << " ";
        }
        // Räknar ner från rad nummer till 1.
        for(int f = rad - 1; f > 0; f--){
            cout << f << " ";
        }
    space--;
    rad++;
    cout << endl;
    // när den kommer till hälften
    if(rad == 9){
        for(int j = 0; j < 9; j++){
        // Skriver ut mellanslag beroende på rad nummer.
        for(int i = 0; i <= space; i++){
        cout << " ";
        }
        // Skriver ut och räknar upp till rad nummer.
        for(int e = 0; e < rad; e++){
            cout << e + 1 << " ";
        }
                // Räknar ner från rad nummer till 1.
        for(int f = rad - 1; f > 0; f--){
            cout << f << " ";
        }
        space++;
        rad--;
        cout << endl;
    }
}
}




}


}