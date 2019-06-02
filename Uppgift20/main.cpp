#include <iostream>
using namespace std;



int main(int argc, char** argv) {
	bool run = true;
	int slut = 0;

while(run == true){
	cout << "vill du avluta programmet? " << endl;
	cout << "1 = Ja" << endl;
	cout << "2 = Nej"<< endl;
	cin >> slut;
	if(slut == 1){
		run = false;
	}
}

	return 0;
}
