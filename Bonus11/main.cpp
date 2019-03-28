#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int heltal[5];
	bool is_same = false;
	for(int i = 0; i < 5; i++){
		cout << "skriv in tal " << i+1 << ": ";
		cin >> heltal[i];
	}
	
for(int i  = 0; i < 5; i++){
      for(int j = i + 1; j < 5; j++){
              if(heltal[i] == heltal[j]) {
                  is_same = true;
              }
       }
 }
	if(is_same == true){
		cout << "Du hade identiska tal!";
	} else {
		cout << "Du hade inga identiska tal";
	}

	return 0;
}
