#include <iostream>
using namespace std;

int fibbonacci(int n1, int n2, int ret){
	int rtrn;
	if (ret != 6765){
		
		n1 = n2;
		n2 = ret;
		rtrn = ret;
		ret = n1 + n2;
		cout << rtrn << ", ";
		fibbonacci(n1, n2, ret);
		return 0;		
		
	}
}
int main(int argc, char** argv) {
	int n1 = 0,n2 = 1,ret = 0,tal;
	
	cout << "De första 20 Fibonaccitalen: ";
	tal = fibbonacci(n1,n2,ret);
	return 0;
}
