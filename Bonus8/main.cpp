#include <iostream>
using namespace std;

int main(int argc, char** argv) {
int program;
	cout << "Välj program: " << endl;
	cout << "1" << endl << "2" << endl << "3" << endl;
	cin >> program;

	
	if(program == 1){
		for(int j = 0; j <= 9; j++){
		for(int i = 0; i <= 9;){
			cout << i << " "; 
			i++;
		}
		cout << endl;
	}
}
	
	
	
if(program == 2){
	for(int i = 0; i <= 9; i++){
	for(int j = 0; j <= i; j++){
		cout << j << " ";
	}	
	cout << endl;
	}		
}
	
	
if(program == 3){
	int start = 9;
	for(int i = 0; i <= 9;){
	for(start; start >= 0; start--){
		for(int j = 0; j <= i; j++){
				cout << " ";
			}
		for(int e = 0; e <= start; e++){
			cout << e;
		}
		i++;
		cout << endl;
	}
	}
	}

}

