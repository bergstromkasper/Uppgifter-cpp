#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int count = 0;
	int mult = 0;
	
	for(count; count <= 9; count++){
		for(mult; mult <= count; mult++){
			cout << "Baa ";
		}
		mult = 0;
		cout << endl;
	}
}
