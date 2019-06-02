#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	using std::string;
	
	
	string function;
	string avslut;
	int tal1, tal2;
	bool q = false;
	while(q == false){
		cout << "Välj räknesätt: addition, subtraktion, division, multiplikation: ";
		cin >> function;
		cout << "Skriv in dina 2 värden: ";
		cin >> tal1 >> tal2;
		if(function == "addition"){
			cout << tal1 + tal2;
		}else if(function == "subtraktion"){
			cout << tal1 - tal2;
		}else if(function ==  "division"){
			cout << tal1 / tal2;
		}else if(function == "multiplikation"){
			cout << tal1 * tal2;
		} else {
			q = true;
		}
		cout << endl << "Vill du avsluta? Ja eller Nej.";
		cin >> avslut;
		if(avslut == "Ja" or avslut == "ja"){
			q = true;
		}else if(avslut == "Nej" or avslut == "nej"){
		q = false;
		}
	}
	
	
	
	
	
	return 0;
}
