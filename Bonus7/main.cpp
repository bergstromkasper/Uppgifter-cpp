#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int start, underscore, plats, rader, stjrn;
	plats = 0;
	cout << "Hur m�nga rader ska det vara?: ";
	cin >> rader;
	cout << "Hur m�nga stj�rnor per rad?: ";
	cin >> stjrn;
	cout << "V�lj plats 1 till " << stjrn << " :";
	cin >> start;
	underscore = start - 1;
	
	//Skriv ut stj�rna om det inte �r p� plats underscore.'
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
