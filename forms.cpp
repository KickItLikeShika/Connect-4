#include <iostream>
#include "forms.h"
#include "play.h"
#include "finish.h"

using namespace std;
// import the array from the main code
extern char arr[7][7];
// fill all the array with Xs to determine the empty fields
void forms::fill_array()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            arr[i][j] = 'X';
        }
    }
}
void forms::game_form()
{
    // I'm using linux, you can use 'cls' here instead of clear if you were using windows
    system("clear");
    // system("cls");
    cout << "This is a CONNECT FOUR game made by KickItLikeShika." << endl
         << endl;
    // Draw the game with the 2D array
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << "  " << arr[i][j] << "  ";
        }
        cout << endl
             << endl;
    }
}
