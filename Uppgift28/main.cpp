#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string function;
	double tal1, tal2;
	
	cout << "Skriv in en utr�kning (Tex 2 + 3, eller 2 - 3)";
	cin >> tal1 >> function >> tal2;
	
	if (function == "-"){
		cout << "Du fick talet: " << tal1-tal2;
	} else if (function == "+"){
		cout << "Du fick talet: " << tal1+tal2;
	} else if (function == "*"){
		cout << "Du fick talet: " << tal1*tal2;
	} else if (function == "/"){
		cout << "Du fick talet: " << tal1/tal2;
	} else if (function != "+" or function != "-" or function != "/" or function != "*"){
		cout << "Du skrev inte in r�tt r�knes�tt.";
	}
	
	return 0;
}
