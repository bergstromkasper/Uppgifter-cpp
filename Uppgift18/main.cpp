#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int count = 0;
	int mult, user;
	mult = 0;
	
	cout << "Välj ett tal mellan 1 och 15: ";
	cin >> user;
	if(user <= 15){
	
	for(count; count <= user - 1; count++){
		for(mult; mult <= count; mult++){
			cout << "Baa ";
		}
		mult = 0;
		cout << endl;
	}
} else {
	cout << "talet måste vara mellan 1 och 15";
}
}
