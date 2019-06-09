#include <iostream>

using namespace std;

int talsumma(int summa, int x){
	if (x > 0){
		// Om du precis fått värdet så börja med x + x annars så tar jag summa + x
	if (summa > 0){
		summa = summa + x - 1;
	 } else {
	 	summa = x + x - 1;
	 }
	x--;
		talsumma(summa, x);
	}
// Om den är klar returna summan.
	if(x == 0){
	return summa;
}
}

int main(int argc, char** argv) {
	int tal, summa = 0;
	cout << "Skriv in ett heltal: ";
	cin >> tal;
	
	summa = talsumma(summa, tal);
	cout << "Total: " << summa;
	return 0;
}
