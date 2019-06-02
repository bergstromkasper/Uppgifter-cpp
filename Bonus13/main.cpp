#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int heltal[10];
	bool minus,plus,lika;
	
	cout << "Skriv in 10 heltal" << endl;
	for(int i = 0; i < 10; i++){
		cin >> heltal[i];
	}
	
	for(int i = 0; i < 10; i++){
		if(heltal[i] < heltal[i + 1] && heltal[i + 1] < 11){
			plus = true;
		} else if(heltal[i] > heltal[i + 1]){
			minus = true;
		} else if(heltal[i] = heltal[i + 1]){
		lika = true;
		}
	}
cout << "Du hade:";
if(plus == true){
	cout << " plus,";
}
if(minus == true){
	cout << " minus,";
}
if(minus == true or plus == true){
	cout << " och";
}
if(lika == true){
	cout << " lika.";
}
	return 0;
}
