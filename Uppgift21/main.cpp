#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	bool increase = true;
	int tal = 0;
	
while(increase == true){
		cout << tal << " ";
		tal++;
	if(tal == 7 && increase == true){
		increase = false;
		tal--;
	while(increase == false && tal >= 0){
		cout << tal << " ";
		tal--;
	}
}
}

	
	return 0;
}
