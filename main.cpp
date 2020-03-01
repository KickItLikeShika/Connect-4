// The client code
#include <iostream>
#include "forms.h"
#include "play.h"
#include "finish.h"

using namespace std;

// The 2D array that we will use it to form the game
char arr[7][7];
// Who will play the B(Blue) or the R(Red)
char player = 'B';

int main()
{
    // Making the objects from the classes
    forms form;
    play pl;
    finish end;

    string x;
    int n = 0;

    // Form the game for the first time
    form.fill_array();
    form.game_form();
    // Counter to end the game
    while (1)
    {
        // Increse the counter
        n++;
        // Printing numbers to make it easy to know in which column are we playing
        cout << "  1    2    3    4    5    6    7" << endl;

        // Calling functions

        // to take the input and replace the X with B or R
        pl.playing(x);
        // to make the new game form after the replacement
        form.game_form();
        // to change between the red and blue players
        pl.change_player();
        // to determine the winner
        end.who_wins();
        if (end.who_wins() == 'B')
        {
            cout << "         ^^^BLUE WINS!^^^" << endl;
            break;
        }
        else if (end.who_wins() == 'R')
        {
            cout << "         ^^^RED WINS!^^^" << endl;
            break;
        }
        else if (end.who_wins() == '/' && n == 49)
        {
            cout << "            IT'S A DRAW!" << endl;
            break;
        }
    }
}
