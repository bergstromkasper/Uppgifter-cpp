#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int array[5] = {4,7,10,13,17};
	bool run = true;
	int tal;
	
	while(run == true){
		cout << "Skriv ett heltal: ";
		cin >> tal; 
		
		if(tal == array[0] or tal == array[1] or tal == array[2] or tal == array[3] or tal == array[4]){
			cout << "Grattis";
			run = false;
		}
	}


	return 0;
} 
