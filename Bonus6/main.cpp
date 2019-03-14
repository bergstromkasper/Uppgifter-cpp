#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int user, underscore, plats;
	plats = 0;
	cout << "Välj plats 1 till 10: ";
	cin >> user;
	underscore = user - 1;
	
	//Skriv ut stjärna om det inte är på plats underscore.'
	for(int i = 0; i <= 6; i++){
	for(plats; plats <= 9; plats++){
	if(plats == underscore){
		cout << "_";
	} else {
	cout << "*";
	}
   }
   underscore++;
      if(underscore >= 10){
   	underscore = 0;
   }
   cout << endl;
   plats = 0;
  }
	return 0;
}
