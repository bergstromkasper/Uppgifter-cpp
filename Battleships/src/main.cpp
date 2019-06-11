#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include <unistd.h>
#include <tuple>
using namespace std;

// Håller reda på information om varje location
struct Location
{
    int location; // 1 - 100
    int state;
};
struct AILocation
{
    int location;
    int state;
};
int AIsetup();
int playerGuess();
void game();
// Deklarera en vector som sparar Location i "locations"
vector<Location> locations;
vector<AILocation> AIlocations;
int AIcarrier = 1;
int AIbattleship = 2;
int AIcruiser = 2;
int AIsubmarine = 2;
int AIdestroyer = 3;
bool cruiserMark = false;

// Skapar 100 Location som sparar en location på 1-100 och en state för varje.
Location curr;
AILocation aicurr;
void createLocations()
{
    for (int i = 0; i < 100; i++)
    {
        curr.location = i + 1;
        curr.state = 0;
        locations.push_back(curr);
    }
        for (int i = 0; i < 100; i++)
    {
        aicurr.location = i + 1;
        aicurr.state = 0;
        AIlocations.push_back(aicurr);
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
     cout << endl << "--------------Player-------------" << endl << "    ";
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
            cout << "{X}";
        } else if (locations[i].state == 3){
            cout << " / ";
        } else {
            cout << " O ";
        }
    }
    cout << endl << endl;
    cout << "-------------Computer------------" << endl;
    cout << "    ";
    for (int i = 1; i < 11; i++)
    {
        cout << i << "  ";
    }
    // counter för bokstäver
    int  AIcounter = 0;
    for(int i = 0; i < 100; i++){
        //radbrytning +  bokstäver
        if(i == 0 || i == 10 || i == 20 || i == 30 || i == 40 || i == 50 || i == 60 || i == 70 || i == 80 || i == 90){
            int  letterCounter = AIcounter + 65;
            cout << endl<< (char)letterCounter << "  ";
            AIcounter++;
            }
        if(AIlocations[i].state == 1){
            cout << " O ";
        } else if (AIlocations[i].state == 2){
            cout << "{X}";
        } else if (AIlocations[i].state == 3){
            cout << " / ";
        } else {
            cout << " O ";
        }
    }
}
bool AImarking;
// Marks boat for draw
void markLocation(char yAxis, int xAxis, int size, char dir)
{
    //Decides direction of boat.
    dir = (toupper(dir));
    bool up = false, down = false, left = false, right = false;
    if (dir == 'U') {
        up = true;
    } else if (dir == 'D'){
        down = true;
    } else if (dir == 'L'){
        left = true;
    } else if (dir == 'R') {
        right = true;
    }
    // --------------------

    //If user or AI
    bool userMarking;
    if(AImarking){
        userMarking = false;
    } else {
        userMarking = true;
    }

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
    //Transform xAxis input to same program uses
    xAxis = xAxis - 1;
    int start;
    bool ignoreMarks = false;
    int toMark[size];
    //Changes player input to a number from 1 to 100
    yAxis = (toupper(yAxis));
    for (int i = 0; i < 10; i++)
    {
        if (yAxis == i + 65){
            start = i * 10 + xAxis;
            //------------------
            //Marks starting location
            if(userMarking){
                if(locations[start].state != 0 or locations[start - 1].state != 0 or locations[start + 1].state != 0 or locations[start + 10].state != 0 or locations[start - 10].state != 0){
                    ignoreMarks = true;
                } else{
                    toMark[0] = locations[start].location;
                } 
            } else {//          START                               LEFT                                RIGHT                               DOWN                                      UP
                if(AIlocations[start].state != 0 or AIlocations[start - 1].state != 0 or AIlocations[start + 1].state != 0 or AIlocations[start + 10].state != 0 or AIlocations[start - 10].state != 0){
                    ignoreMarks =  true;
                } else {
                    toMark[0] = AIlocations[start].location;
                }    
            }
        }
    }
    //--------------------------


    // Up
    if (up)
    {
        bool boatClear = true;
        for (int i = 1; i  < size; i++)
        {   //               LEFT                                         RIGHT                                             UP
        if(AIlocations[start - (i * 10) - 1].state != 0 or AIlocations[start - (i * 10) + 1].state != 0 or AIlocations[start - (size * 10)].state != 0 or AIlocations[start - (size * 10) - 10].state != 0){
                boatClear = false;
            }
            if(userMarking){// if less than 0 its outside play area
                if(locations[start - (i * 10)].state != 0 or start - (i * 10) < 0){
                    ignoreMarks = true;
                } else {
                    toMark[i] = locations[start - (i * 10)].location;
                }
            } else {
                if(AIlocations[start - (i * 10)].state != 0 or start - (i * 10) < 0 or boatClear == false){
                    ignoreMarks = true;
                } else {
                    toMark[i] =  AIlocations[start - (i * 10)].location;
                }
            }
        }
    } // Down
    else if (down)
    {
        bool boatClear = true;
        for (int i = 1; i < size; i++)
        {//                   LEFT                                              RIGHT                                           DOWN
            if(AIlocations[start + (i * 10) - 1].state != 0 or AIlocations[start + (i * 10) + 1].state != 0 or AIlocations[start + (size * 10)].state != 0 or AIlocations[start + (size * 10) + 10].state != 0){
                boatClear = false;
            }
            if(userMarking){
                if(locations[start + (i * 10)].state != 0 or start + (i * 10) > 100){
                    ignoreMarks = true;
                } else {
                    toMark[i] = locations[start + (i * 10)].location;
                }
            } else {
                if(AIlocations[start + (i * 10)].state != 0 or start + (i * 10) > 100 or boatClear == false){
                    ignoreMarks = true;
                } else {
                    toMark[i] = AIlocations[start + (i * 10)].location;
                }
            }
        }
    }// Left
    else if (left)
    {
        int checkLeft;
        bool boatClear = true;
        for (int i = 1; i < size; i++)
        {//                     LEFT                                           UP                                              DOWN
            if(AIlocations[(start - size) - 1].state != 0 or AIlocations[(start - i) - 10].state != 0 or AIlocations[(start -i) + 10].state != 0){
                boatClear = false;
            }
            checkLeft = (start - i) % 10 - size + i;
            if(userMarking){
                if(locations[start - i].state != 0 or checkLeft <= -1 or start % 10 == 0){
                    ignoreMarks = true;
                } else {
                    toMark[i] = locations[start - i].location;
                }
            } else {
                if(AIlocations[start - i].state != 0 or checkLeft <= -1 or boatClear == false or start % 10 == 0){
                    ignoreMarks = true;
                } else {
                    toMark[i] = AIlocations[start -i].location;
                }
            }
        }
    }// Right
    else if (right)
    {
        int checkRight;
        bool boatClear = true;
        for (int i = 1; i < size; i++)
        {//                 RIGHT                                        UP                                          DOWN
            if(AIlocations[(start + size) + 1].state != 0 or AIlocations[(start + i) - 10].state != 0 or AIlocations[(start + i) + 10].state != 0 or AIlocations[(start + i) + 1].state){
                boatClear = false;
            }
            checkRight = (start + i) % 10 + size - i;
            if(userMarking){
                if(locations[start + i].state != 0 or checkRight > 10 or start % 10 + size - i > 10 or start % 10 == 1){
                    ignoreMarks = true;
                } else {
                    toMark[i] = locations[start + i].location;
                }
            } else {
                if(AIlocations[start + i].state != 0 or checkRight > 10 or start % 10 + size - i > 10 or boatClear == false  or start % 10 == 1){
                    ignoreMarks = true;
                } else {
                    toMark[i] = AIlocations[start + i].location;
                }
            }
        }
    } 

    // Om den inte overlappar så markar den annars så gör du om.
    if (ignoreMarks == false){
        for(int i = 0; i < size; i++){
            if(userMarking){
                locations[toMark[i] - 1].state = 1;
            } else {
                AIlocations[toMark[i] - 1]. state = 1;
                }
            }
            //Reduce AI boats
            if(userMarking == false){
            if(size == 5){
                AIcarrier--;
                } else if (size == 4){
                    AIbattleship--;
                } else if (size == 3 && cruiserMark == true){
                    AIcruiser--;
                 } else if (size == 3 && cruiserMark == false){
                    AIsubmarine--; 
                } else if (size == 2){
                    AIdestroyer--;
                } 
            }
        } else {
            //If boats overlap replace
        if (userMarking){
            clearScreen();
            draw();
            cout << endl << "Boats can't overlap, be right next to eachother, or go outside board" << endl;
            cout << "Place boat again: ";   
            cin >> yAxis >> xAxis >> dir;
            cin.ignore(255, '\n');
            markLocation(yAxis, xAxis , size, dir);
        }
    }
    //If player is placing draw after every boat
    if(userMarking){
        draw();
    //If computer is placing draw after all boats are places
    } else if (AIcarrier == 0 && AIbattleship == 0 && AIcruiser == 0 && AIsubmarine == 0 && AIdestroyer == 0){
        draw();
    }
}

// Randomizes AI boat placement
tuple<int, int, char> randomTuple(){
    int y, x, dir;
    char direction;
    y = rand() % 10 + 65;
    x = rand() % 10 + 1;
    dir = (rand() % 4) + 1;
        if(dir == 1){
            direction = 'u';
        } else if (dir == 2){
            direction = 'r';
        } else if (dir == 3){
            direction = 'd';
        } else if (dir == 4){
            direction = 'l';
        }
    return make_tuple(y, x, direction);
}

int AIsetup(){
    cout << "Generating opponent...";
    AImarking = true;
    while(AIcarrier > 0){
        auto carrier = randomTuple();
        markLocation(char(get<0>(carrier)), get<1>(carrier), 5, get<2>(carrier));
        }

    while (AIbattleship > 0)
    {
        auto battleship = randomTuple();
        markLocation(char(get<0>(battleship)), get<1>(battleship), 4, get<2>(battleship));

    }  
    while (AIcruiser > 0)
    {
        cruiserMark = true; 
        auto cruiser = randomTuple();
        markLocation(char(get<0>(cruiser)), get<1>(cruiser), 3, get<2>(cruiser));
    }
     while (AIsubmarine > 0)
    {
        cruiserMark = false;
        auto submarine = randomTuple();
        markLocation(char(get<0>(submarine)), get<1>(submarine), 3, get<2>(submarine));
    } 
    while (AIdestroyer > 0)
    {
        auto destroyer = randomTuple();
        markLocation(char(get<0>(destroyer)), get<1>(destroyer), 2, get<2>(destroyer));
    }
}


int setup()
{
    // Deklarerar skeppen
    int carrier = 1;
    int battleship = 2;
    int cruiser = 2;
    int submarine = 2;
    int destroyer = 3;
    AImarking =  false;
    // Placera alla båtarna
    cout << "Place your boats, location on board and direction. Example: 'A3 down, J6 up, H9 left, D5 right'";
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
bool gameOver = false;
int aiGuess(){
    draw();
    bool aiGuessing = true;
    int aiGuess;
    aiGuess = rand() % 100 + 1;
while (aiGuessing){
    if(locations[aiGuess].state == 3){
        aiGuess =  rand() % 100 + 1;
    }else if (locations[aiGuess].state == 1){
        int hitdir;
        cout << endl << "Computer guessed: " << aiGuess << endl;
        locations[aiGuess].state = 2;
        hitdir = rand() % 4 + 1;
        if(hitdir == 1){
            aiGuess = aiGuess - 10;
        } else if (hitdir == 2){
            aiGuess = aiGuess + 1;
        } else if (hitdir == 3){
            aiGuess = aiGuess + 10;
        } else if (hitdir == 4){
            aiGuess = aiGuess - 1;
        }
        cout << endl << "Computer hit!" << endl << "Computer guesses again." << endl;
        usleep(1000000);
    } else {
        aiGuessing = false;
        cout << endl <<"Computer guessed: " << aiGuess << endl;
        locations[aiGuess].state = 3;
        cout << "Computer missed." << endl;
        usleep(1000000);
        if(gameOver == false){
            playerGuess();
        }
    }
}
}
int playerGuess(){
    draw();
    char yGuess;
    int xGuess;
    int locGuess;
    cout << endl << "Your turn!" << endl << "Guess a location (A3, G4, J8):" << endl;
    cin >> yGuess >> xGuess;
    //translate guess to location
    yGuess = (toupper(yGuess));
    for (int i = 0; i < 10; i++)
    {
        if (yGuess == i + 65)
        {
            locGuess = i * 10 + xGuess;
        }
    }
    //if hit change state to hit instead of ship.
    if(AIlocations[locGuess - 1].state == 1){
        AIlocations[locGuess - 1].state = 2;
        draw();
        cout << endl << "Hit!";
        cout << endl << "Guess again.";
        usleep(1000000);
        game();
        if(gameOver == false){
            playerGuess();
        }
    } else {
        AIlocations[locGuess - 1].state = 3;
        draw();
        cout <<endl << "Miss" << endl;
        usleep(1000000);
        game();
        if(gameOver == false){
            aiGuess();
        }
    }

}
bool notInProgress = true;
void game(){
    int diceRoll;
    //random starting guess
if(notInProgress){
    notInProgress = false;
    cout << endl << "Rolling dice.." << endl;
    diceRoll  = rand() % 2 + 1;
    if (diceRoll == 1){
        cout << "Player starts." << endl;
        usleep(1000000);
        playerGuess();
    } else if (diceRoll == 2){
        cout << "Computer starts." << endl;
        usleep(1000000);
        aiGuess();
    }
} else {
    int AIboatCounter = 0;
    int playerBoatCounter = 0;
    for(int i = 0; i < 100; i++){
        if(AIlocations[i].state == 1){
            AIboatCounter++;
            cout << "Counter++" << endl;
        }
        }
        if (AIboatCounter == 0){
            draw();
            gameOver = true;
            cout << endl <<"You win!";
            return;
    }
    for(int i = 0; i < 100; i++){
        if(locations[i].state == 1){
            playerBoatCounter++;
            cout << "Counter++" << endl;
        }
        }
        if (playerBoatCounter == 0){
            draw();
            gameOver = true;
            cout << endl << "You lose.";
            return;
    }
}

}

int main()
{
    clearScreen();
    srand(time(0));
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
    AIsetup();  
    game();
}