#include <iostream>
#include "forms.h"
#include "play.h"
#include "finish.h"

// import from the main code
extern char arr[7][7];
extern char player;
using namespace std;

// Taking the input from the player and make it happen
void play::playing(string x)
{
    cout << endl
         << " ---------- "
         << "It's " << player << " turn"
         << " ---------- " << endl
         << " "
         << "Enter the number of the column: ";
    // Taking the number of the column from the user
    cin >> x;
    // C1
    if (x == "1")
    {
        // Putting the R and B above each other in the same comlumn
        if (arr[6][0] == 'X')
            arr[6][0] = player;
        else if (arr[5][0] == 'X')
            arr[5][0] = player;
        else if (arr[4][0] == 'X')
            arr[4][0] = player;
        else if (arr[3][0] == 'X')
            arr[3][0] = player;
        else if (arr[2][0] == 'X')
            arr[2][0] = player;
        else if (arr[1][0] == 'X')
            arr[1][0] = player;
        else if (arr[0][0] == 'X')
            arr[0][0] = player;

        // If the whole column was already used
        else
        {
            cout << "Field is already used, try again!" << endl
                 << endl;
            playing(x);
        }
    }
    // C2
    else if (x == "2")
    {
        // Putting the R and B above each other in the same comlumn
        if (arr[6][1] == 'X')
            arr[6][1] = player;
        else if (arr[5][1] == 'X')
            arr[5][1] = player;
        else if (arr[4][1] == 'X')
            arr[4][1] = player;
        else if (arr[3][1] == 'X')
            arr[3][1] = player;
        else if (arr[2][1] == 'X')
            arr[2][1] = player;
        else if (arr[1][1] == 'X')
            arr[1][1] = player;
        else if (arr[0][1] == 'X')
            arr[0][1] = player;

        // If the whole column was already used
        else
        {
            cout << "Field is already used, try again!" << endl
                 << endl;
            playing(x);
        }
    }
    // C3
    else if (x == "3")
    {
        // Putting the R and B above each other in the same comlumn
        if (arr[6][2] == 'X')
            arr[6][2] = player;
        else if (arr[5][2] == 'X')
            arr[5][2] = player;
        else if (arr[4][2] == 'X')
            arr[4][2] = player;
        else if (arr[3][2] == 'X')
            arr[3][2] = player;
        else if (arr[2][2] == 'X')
            arr[2][2] = player;
        else if (arr[1][2] == 'X')
            arr[1][2] = player;
        else if (arr[0][2] == 'X')
            arr[0][2] = player;

        // If the whole column was already used
        else
        {
            cout << "Field is already used, try again!" << endl
                 << endl;
            playing(x);
        }
    }
    // C4
    else if (x == "4")
    {
        // Putting the R and B above each other in the same comlumn
        if (arr[6][3] == 'X')
            arr[6][3] = player;
        else if (arr[5][3] == 'X')
            arr[5][3] = player;
        else if (arr[4][3] == 'X')
            arr[4][3] = player;
        else if (arr[3][3] == 'X')
            arr[3][3] = player;
        else if (arr[2][3] == 'X')
            arr[2][3] = player;
        else if (arr[1][3] == 'X')
            arr[1][3] = player;
        else if (arr[0][3] == 'X')
            arr[0][3] = player;

        // If the whole column was already used
        else
        {
            cout << "Field is already used, try again!" << endl
                 << endl;
            playing(x);
        }
    }
    // C5
    else if (x == "5")
    {
        // Putting the R and B above each other in the same comlumn
        if (arr[6][4] == 'X')
            arr[6][4] = player;
        else if (arr[5][4] == 'X')
            arr[5][4] = player;
        else if (arr[4][4] == 'X')
            arr[4][4] = player;
        else if (arr[3][4] == 'X')
            arr[3][4] = player;
        else if (arr[2][4] == 'X')
            arr[2][4] = player;
        else if (arr[1][4] == 'X')
            arr[1][4] = player;
        else if (arr[0][4] == 'X')
            arr[0][4] = player;

        // If the whole column was already used
        else
        {
            cout << "Field is already used, try again!" << endl
                 << endl;
            playing(x);
        }
    }
    // C6
    else if (x == "6")
    {
        // Putting the R and B above each other in the same comlumn
        if (arr[6][5] == 'X')
            arr[6][5] = player;
        else if (arr[5][5] == 'X')
            arr[5][5] = player;
        else if (arr[4][5] == 'X')
            arr[4][5] = player;
        else if (arr[3][5] == 'X')
            arr[3][5] = player;
        else if (arr[2][5] == 'X')
            arr[2][5] = player;
        else if (arr[1][5] == 'X')
            arr[1][5] = player;
        else if (arr[0][5] == 'X')
            arr[0][5] = player;

        // If the whole column was already used
        else
        {
            cout << "Field is already used, try again!" << endl
                 << endl;
            playing(x);
        }
    }
    // C7
    else if (x == "7")
    {
        // Putting the R and B above each other in the same comlumn
        if (arr[6][6] == 'X')
            arr[6][6] = player;
        else if (arr[5][6] == 'X')
            arr[5][6] = player;
        else if (arr[4][6] == 'X')
            arr[4][6] = player;
        else if (arr[3][6] == 'X')
            arr[3][6] = player;
        else if (arr[2][6] == 'X')
            arr[2][6] = player;
        else if (arr[1][6] == 'X')
            arr[1][6] = player;
        else if (arr[0][6] == 'X')
            arr[0][6] = player;

        // If the whole column was already used
        else
        {
            cout << "Field is already used, try again!" << endl
                 << endl;
            playing(x);
        }
    }
    // If the player entered an input out of range
    else
    {
        cout << "Enter a number form 1-7 please, try again!" << endl
             << endl;
        playing(x);
    }
}
void play::change_player()
{
    // B for Blue
    // R for Red
    if (player == 'B')
        player = 'R';
    else
        player = 'B';
}
