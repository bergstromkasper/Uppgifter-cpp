#include <iostream>
using namespace std;



bool primTal(int n, int i = 2) {  
    if (n <= 2){
    	// Om n == 2 så return true annars false.
        return (n == 2)?true : false;
		} 
		//Om n % i == 0 så är det inte ett primtal.
    if (n % i == 0){
        return false; 
		}
    if (i * i > n){
        return true;
	} 
    return primTal(n, i + 1); 
} 

int main() { 
    int tal;
	cout << "Skriv in ett tal som störst är 1 000 000: ";
	cin >> tal; 
    if (primTal(tal)) 
        cout << "Det är ett primtal"; 
    else
        cout << "Det är inte ett primtal"; 
  
    return 0; 
} 
