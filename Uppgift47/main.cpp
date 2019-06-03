#include <iostream>
#include <string>

using namespace std;

struct boll
{
	int radie;
	int vikt;
	string colour;
	
};
boll double_vikt(boll x){
	x.radie = x.radie * 2;
	x.vikt = x.vikt * 8;
	
	return x;
}

int main(int argc, char** argv) {
	int radie,vikt;
	string colour;
	cout << "Skriv Radie, vikt och färg på din boll: ";
	cin >> radie>>vikt>>colour;
	boll user {radie,vikt,colour};
	boll computer {radie,vikt,colour};
	computer = double_vikt(computer);
	
	cout << "Din boll:" << endl << "Radie: "<< user.radie << endl << "Vikt: "<< user.vikt << endl << "Färg: " << user.colour << endl;
	cout << "Datorns boll:" << endl << "Radie: "<< computer.radie << endl << "Vikt: "<< computer.vikt << endl << "Färg: " << computer.colour;
	return 0;
}
