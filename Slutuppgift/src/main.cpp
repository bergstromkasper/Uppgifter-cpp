#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;


// Håller reda på information om varje location
struct Locations
{
    int location; // 1 - 100
    int state; // 0 = Water  1 = boat  2 = non-guessable
};

struct number
{
    int loc; 
    int state; 
};




// Placerar båtar på spelplanen 
void drawBoard(char y, int x, int size, char dir){
    //Direction
    bool up = false, down = false, left = false, right = false;
    if(dir == 'U' or dir == 'u'){
        up = true;
    } else if (dir == 'D' or dir == 'd'){
        down = true;
    } else if (dir == 'L' or dir == 'l'){
        left = true;
    } else if (dir == 'R' or dir == 'r'){
        right = true;
    }
// --------------------


//Markera locations för båten du placerat
    /* A = 65 / 0
    B = 66 / 1
    C = 67 / 2
    D = 68 / 3
    E = 69 / 4
    F = 70 / 5
    G = 71 / 6
    H = 72 / 7
    I = 73 / 8
    J = 74 / 9 */
    int start;
    for(int i = 0; i < 10; i++){
        if(y == i + 65){
          cout << "Start" <<  i * 10 + x << endl;
          start = i * 10 + x;
        }
    }
    if(up == true){
        for(int i = 1; i < size; i++){
            cout << "Up" << start - (i * 10) << endl;
        }
    } else if (down == true){
        for(int i = 1; i < size; i++){
            cout << "Down" << start + (i * 10) << endl;
        }
        
    }else if (left == true){
        for(int i = 1; i < size; i++){
            cout << "Left" << start - i << endl;
        }
    }else if (right == true){
        for(int i = 1; i < size; i++){ 
            cout << "Right" << start + i << endl;
        }
    }
//---------------------------------------
}
int setup(){
    int carrier = 1;
    int battleship = 2;
    int cruiser = 3;
    int submarine = 4;
    int destroyer = 5;
    char y, direction;
    int x;

    //Första spelplan så man kan se var man ska sätta sina båtar.
cout << "   ";
for (int i = 1; i < 11; i++){
    cout << i << "  ";
}
cout << endl;
for(int i = 65; i < 75;i++){
cout << (char)i << "  ";
    for(int j = 0; j<10; j++){
        cout << "O  ";
    }
    cout << endl;
}
//------------------------
cout << "Place your boats, location on board and direction. Example: 'A3 UP, J6 DOWN, H9 LEFT, D5 RIGHT'";
cout <<  endl << "Place carrier: Size 5: ";
cin >> y >> x >> direction;
drawBoard(y, x, 5, direction);
/*
while (battleship > 0){
    cout << "Place Battleship, Size 4: ";
}
*/
}



int main() {
setup();



/* 2 player or computer
cout << "1 or 2 Players.";
cin >> players;
if (players == 1){
    computer = false;
} else {
    computer = true;
}
if (computer == true){
    cout << " ______Computer______";
} else {
cout << " ______Player 1______";
}

*/

}