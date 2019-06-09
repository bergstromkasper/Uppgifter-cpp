#include <iostream>
using namespace std;



bool primTal(int n, int i = 2) {  
    if (n <= 2){
    	// Om n == 2 s� return true annars false.
        return (n == 2)?true : false;
		} 
		//Om n % i == 0 s� �r det inte ett primtal.
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
	cout << "Skriv in ett tal som st�rst �r 1 000 000: ";
	cin >> tal; 
    if (primTal(tal)) 
        cout << "Det �r ett primtal"; 
    else
        cout << "Det �r inte ett primtal"; 
  
    return 0; 
} 
