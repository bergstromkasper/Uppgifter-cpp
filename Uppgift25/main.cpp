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
	cout << "Talet �r mindre �n 50";
} else {
	cout << "Talet �r st�rre �n 50";
}
	


	return 0;
}
