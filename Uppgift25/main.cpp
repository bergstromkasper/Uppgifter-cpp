#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int array[7];
	int total = 0;
	for(int i = 0; i < 7; i++){
		cout << "Skriv in heltal: ";
		cin >> array[i];
	}
	for(int i = 0; i < 7; i++){
	total =	total + array[i];
	}

if(total <= 50){
	cout << "Talet är mindre än 50";
} else {
	cout << "Talet är större än 50";
}
	


	return 0;
}
