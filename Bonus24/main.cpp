#include <iostream>
using namespace std;


struct boll
{
int ypos;
int xpos;
	
};
boll new_coord(boll x){
	for(int i = 0; i <= 10-x.ypos; i++){
		cout << endl;
	}
	cout << "Skriv in ny Y och X koordinater mellan 0 och 10: ";
	cin >> x.ypos >> x.xpos;
	while (x.ypos > 10 or x.xpos > 10){
		cout << "Måste vara mellan 0 och 10: ";
		cin >> x.ypos>>x.xpos;
	}
	return x;
}

boll draw(boll x){
	system("cls");
	for (int i = 0; i < x.ypos; i++){
		cout << endl;
	}
	for (int i = 0; i < x.xpos; i++){
		cout << "  ";
	}
	cout << "O";
}

int main(int argc, char** argv) {
	int ypos, xpos, x = 1;
	cout << "Skriv in en Y och en X position mellan 0 och 10: ";
	cin >> ypos>>xpos;
	while (ypos > 10 or xpos > 10){
		cout << "Måste vara mellan 0 och 10: ";
		cin >> ypos>>xpos;
	}
	boll user {ypos,xpos};
	while(x != 0){
	draw(user);
	user = new_coord(user);
}
	cout << user.ypos << " " << user.xpos;
	return 0;
}
