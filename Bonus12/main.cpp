#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int heltal[7];
	int ny, position, temp;
	bool q = true;
	for(int i = 0; i < 7; i++){
		cout << "Skriv in heltal " << i + 1 << ": ";
		cin >> heltal[i];
	}
	
	cout << "Skriv in ett nytt värde: ";
	cin >> ny;
	
	while(q == true){
		cout << "Skriv ett tal mellan 0 och 6: ";
		cin >> position;
		if(position >= 0 && position <= 6){
			q = false;
		}
	}
	
	for(int i = 7; i > position - 1; i--){
		heltal[i + 1] = heltal[i];
	}
	heltal[position] = ny;
	
	for(int i = 0; i < 7; i++){
		cout << heltal[i] << " ";
	}
	
	return 0;
}
