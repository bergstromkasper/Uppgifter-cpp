#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int start, underscore, plats, rader, stjrn;
	plats = 0;
	cout << "Hur många rader ska det vara?: ";
	cin >> rader;
	cout << "Hur många stjärnor per rad?: ";
	cin >> stjrn;
	cout << "Välj plats 1 till " << stjrn << " :";
	cin >> start;
	underscore = start - 1;
	
	//Skriv ut stjärna om det inte är på plats underscore.'
	for(int i = 0; i <= rader; i++){
	for(plats; plats <= stjrn; plats++){
	if(plats == underscore){
		cout << "_";
	} else {
	cout << "*";
	}
   }
   underscore++;
      if(underscore >= stjrn){
   	underscore = 0;
   }
   cout << endl;
   plats = 0;
  }
	return 0;
}
