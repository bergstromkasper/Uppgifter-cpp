#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
/* Hann inte skirva kommentarer om det som inte fungerade nu men kollar mer och lägger på senare. */

//
int carrier = 1;
int battleship = 2;
int cruiser = 3;
int submarine = 4;
int destroyer = 5;

// Håller reda på information om varje location
struct Location
{
    int location; // 1 - 100
    int state;
};

// Deklarera en vector som sparar Location i "locations"
vector<Location> locations;
// Skapar 100 Location som sparar en location på 1-100 och en state för varje.
void createLocations()
{
    for (int i = 0; i < 100; i++)
    {
        Location curr;
        curr.location = i + 1;
        curr.state = 0;
        locations.push_back(curr);
    }
}

// Markerar båtar på spelplanen
void markLocation(char y, int x, int size, char dir)
{
    //Direction
    bool up = false, down = false, left = false, right = false;
    if (dir == 'U' or dir == 'u')
    {
        up = true;
    }
    else if (dir == 'D' or dir == 'd')
    {
        down = true;
    }
    else if (dir == 'L' or dir == 'l')
    {
        left = true;
    }
    else if (dir == 'R' or dir == 'r')
    {
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
 for (int i = 0; i < 10; i++)
    {
        if (y == i + 65)
        {
            cout << "Start played" << endl;
            start = i * 10 + x;
        }
    }
    if (up)
    {
        for (int i = 1; i < size; i++)
        {
            cout << "up played" << endl;
            locations[start - (i * 10)].state = 1;
        }
    }
    else if (down)
    {
        for (int i = 1; i < size; i++)
        {
            cout << "down played" << endl;
            cout << "Count: " << i << endl;
            locations[start + (i * 10)].state = 1;
        }
    }
    else if (left)
    {
        for (int i = 1; i < size; i++)
        {

            cout << "Left played" << endl;
            locations[start - i].state = 1;
        }
    }
    else if (right)
    {
        for (int i = 1; i < size; i++)
        {
            cout << "Right played" << endl;
            cout << "Count: " << i << endl;
            locations[start + i].state = 1;
        }
    }

    //---------------------------------------
}

int setup()
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
    //------------------------

    // Placera alla båtarna
    cout << "Place your boats, location on board and direction. Example: 'A3 UP, J6 DOWN, H9 LEFT, D5 RIGHT'";
    while (carrier > 0)
    {
        // Efter den har frågat efter Carrier så markerar den location för den men efter så frågar den inte efter Battleship.
        cout << endl
             << "Place carrier: Size 5: ";
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
    // Den gör allting fram tills hit, vet inte varför den inte fortsätter efter den har gjort carrier.
    while (battleship > 0)
    {
        cout << endl
             << "Place 2 battleships: Size 4: ";
        for (int i = battleship; i > 0;)
        {
            char y, direction;
            int x;
            cin >> y >> x >> direction;
            markLocation(y, x, 4, direction);
            battleship--;
        }
    }
    cout << endl
         << "Place 3 cruisers: Size 3: ";
    for (int i = cruiser; i > 0; cruiser--)
    {
        char y, direction;
        int x;
        cin >> y >> x >> direction;
        markLocation(y, x, 3, direction);
        cin.ignore(255, '\n');
    }
    cout << endl
         << "Place 4 submarines: Size 3: ";
    for (int i = submarine; i > 0; submarine--)
    {
        char y, direction;
        int x;
        cin >> y >> x >> direction;
        markLocation(y, x, 3, direction);
        cin.ignore(255, '\n');
    }
    cout << endl
         << "Place 5 destroyers: Size 2: ";
    for (int i = destroyer; i > 0; destroyer--)
    {
        char y, direction;
        int x;
        cin >> y >> x >> direction;
        markLocation(y, x, 2, direction);
        cin.ignore(255, '\n');
    }

    //-------------------------------
}

int main()
{
    createLocations();
    setup();
}
