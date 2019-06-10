#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;


// Håller reda på information om varje location
struct Location
{
    int location; // 1 - 100
    int state;
};

// Deklarera en vector som sparar Location i "locations"
vector<Location> locations;
// Skapar 100 Location som sparar en location på 1-100 och en state för varje.
Location curr;
void createLocations()
{
    for (int i = 0; i < 100; i++)
    {
        curr.location = i + 1;
        curr.state = 0;
        locations.push_back(curr);
    }
}
void clearScreen(){
    // Kolla om linux eller windows (Clear för Linux CLS för windows)
    #ifdef __unix__         
    #elif defined(_WIN32) || defined(WIN32) 
    #define OS_Windows
    #endif
    #ifdef OS_WINDOWS
    system("CLS");
    #else 
    system("clear");
    #endif   

}

void draw(){
    // Bygg en ny spelplan efter varje ny båt är placerad/skjuten.
    //1-10 på x axeln
    clearScreen();
    cout << endl << endl << "    ";
    for (int i = 1; i < 11; i++)
    {
        cout << i << "  ";
    }
    // counter för bokstäver
    int  counter = 0;
    for(int i = 0; i < 100; i++){
        //radbrytning +  bokstäver
        if(i == 0 || i == 10 || i == 20 || i == 30 || i == 40 || i == 50 || i == 60 || i == 70 || i == 80 || i == 90){
            int  letterCounter = counter + 65;
            cout << endl<< (char)letterCounter << "  ";
            counter++;
            }
        if(locations[i].state == 1){
            cout << "(S)";
        } else if (locations[i].state == 2){
            cout << "X  ";
        } else {
            cout << " O ";
        }
    }
}

// Markerar båtar på spelplanen
void markLocation(char yAxis, int xAxis, int size, char dir)
{
    //Direction
    dir = (toupper(dir));
    bool up = false, down = false, left = false, right = false;
    if (dir == 'U')
    {
        up = true;
    }
    else if (dir == 'D')
    {
        down = true;
    }
    else if (dir == 'L')
    {
        left = true;
    }
    else if (dir == 'R')
    {
        right = true;
    }
    // --------------------

    //Markera locations för båten du placerat
    /* 
    A = 65 / 0
    B = 66 / 1
    C = 67 / 2
    D = 68 / 3
    E = 69 / 4
    F = 70 / 5
    G = 71 / 6
    H = 72 / 7
    I = 73 / 8
    J = 74 / 9 */
    xAxis = xAxis - 1;
    int start;
    bool ignoreMarks = false;
    int toMark[size];
    yAxis = (toupper(yAxis));
 for (int i = 0; i < 10; i++)
    {
        if (yAxis == i + 65)
        {
            start = i * 10 + xAxis;
             if(locations[start].state != 0){
                ignoreMarks = true;
            } else {
                toMark[0] = locations[start].location;
            }
        }
    }
    // Up
    if (up)
    {
        for (int i = 1; i  < size; i++)
        {
            // Om resultatet blir mindre än 0 så är båten utanför spelplanen
            if(locations[start - (i * 10)].state != 0 or start - (i * 10) < 0){
                ignoreMarks = true;
            } else {
                toMark[i] = locations[start - (i * 10)].location;
           }
            
    }
}
    // Down
    else if (down)
    {
        for (int i = 1; i < size; i++)
        {
         if(locations[start + (i * 10)].state != 0 or start + (i * 10) > 100){
                ignoreMarks = true;
            } else {
                toMark[i] = locations[start + (i * 10)].location;
            }
        }
    }
    // Left
    else if (left)
    {
        int checkLeft;
        for (int i = 1; i < size; i++)
        {
        checkLeft = (start - i) % 10 - size + i;
          if(locations[start - i].state != 0 or checkLeft < -1){
                ignoreMarks = true;
            } else {
                toMark[i] = locations[start - i].location;
            }
        }
    }
    // Right
    else if (right)
    {
        int checkRight;
        for (int i = 1; i < size; i++)
        {
        checkRight = (start + i) % 10 + size - i;
          if(locations[start + i].state != 0 or checkRight > 10 or start % 10 + size - i > 10){
            ignoreMarks = true;
        } else {
            toMark[i] = locations[start + i].location;
        }
        }
    }
    

    // Om den inte overlappar så markar den annars så gör du om.
    if (ignoreMarks == false){
        for(int i = 0; i < size; i++){
            locations[toMark[i] - 1].state = 1;
        }
    } else {
        cout << "Boats can't overlap or go outside board" << endl;
        cout << "Place boat again: ";   
        cin >> yAxis >> xAxis >> dir;
        cin.ignore(255, '\n');
        markLocation(yAxis, xAxis , size, dir);
    }
draw();
    //----------------------------------------------------
}


int setup()
{
    //------------------------
    // Deklarerar skeppen
    int carrier = 1;
    int battleship = 2;
    int cruiser = 2;
    int submarine = 2;
    int destroyer = 3;

    // Placera alla båtarna
    cout << "Place your boats, location on board and direction. Example: 'A3 UP, J6 DOWN, H9 LEFT, D5 RIGHT'";
    while (carrier > 0)
    {
        cout << endl
             << "Place carrier: Size 5: " << endl;
        for (int i = carrier; i > 0;)
        {
            char y, direction;
            int x;
            cin >> y >> x >> direction;
            cin.ignore(255, '\n');
            markLocation(y, x, 5, direction);
            carrier--;
            i--;
        }
    }
    while (battleship > 0)
    {
        cout << endl
             << "Place 2 battleships: Size 4" << endl;
        for (int i = battleship; i > 0;)
        {
            cout << endl <<  "Battleship(4): ";
            char y, direction;
            int x;
            cin >> y >> x >> direction;
            cin.ignore(255, '\n');
            markLocation(y, x, 4, direction);
            battleship--;
            i--;
        }
    }
    while(cruiser > 0){
        cout << endl
             << "Place 2 cruisers: Size 3" << endl;
        for (int i = cruiser; i > 0; cruiser--)
        {
            cout <<  endl << "Cruiser(3): ";
            char y, direction;
            int x;
            cin >> y >> x >> direction;
            cin.ignore(255, '\n');
            markLocation(y, x, 3, direction);
            cruiser--;
            i--;
        }
    }
    while (submarine > 0){
        cout << endl
            << "Place 2 submarines: Size 3" << endl;
        for (int i = submarine; i > 0; submarine--)
        {   
            cout << endl << "Submarine(3): ";
            char y, direction;
            int x;
            cin >> y >> x >> direction;
            cin.ignore(255, '\n');
            markLocation(y, x, 3, direction);
            submarine--;
            i--;
        }
    }
    while(destroyer > 0){
        cout << endl
            << "Place 3 destroyers: Size 2" << endl;
        for (int i = destroyer; i > 0; destroyer--)
        {
            cout << endl << "Destroyer(2): ";
            char y, direction;
            int x;
            cin >> y >> x >> direction;
            cin.ignore(255, '\n');
            markLocation(y, x, 2, direction);
            destroyer--;
            i--;
        }
    }

    //-------------------------------
}
void game(){
    int userGuess;

}

int main()
{
        //Första spelplan så man kan se var man ska sätta sina båtar.
    cout << "   ";
    for (int i = 1; i < 11; i++)
    {
        cout << i << "  ";
    }
    cout << endl;
    for (int i = 65; i < 75; i++)
    {
        cout << (char)i << "  ";
        for (int j = 0; j < 10; j++)
        {
            cout << "O  ";
        }
        cout << endl;
    }
    createLocations();
    setup();
    game();
}
