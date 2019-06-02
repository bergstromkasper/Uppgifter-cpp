#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int array[10];
	for(int i = 0; i < 10; i++){
		cout << "Skriv in värde " << i << ": ";
		cin >> array[i];
	}
	return 0;
}
