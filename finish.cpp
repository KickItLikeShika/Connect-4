#include "finish.h"

// import from the main code
extern char arr[7][7];
extern char player;
using namespace std;

int finish::who_wins()
{
    // Loop to go through the 2D and determine the winner
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            // First Player

            // By Row
            if (arr[i][j] == 'B' && arr[i][j + 1] == 'B' && arr[i][j + 2] == 'B' && arr[i][j + 3] == 'B' && j + 3 < 7)
                return 'B';
            // By Columns
            if (arr[i][j] == 'B' && arr[i + 1][j] == 'B' && arr[i + 2][j] == 'B' && arr[i + 3][j] == 'B' && i + 3 < 7)
                return 'B';

            // Second Player
            // By Rows
            if (arr[i][j] == 'R' && arr[i][j + 1] == 'R' && arr[i][j + 2] == 'R' && arr[i][j + 3] == 'R' && j + 3 < 7)
                return 'R';
            // By Columns
            if (arr[i][j] == 'R' && arr[i + 1][j] == 'R' && arr[i + 2][j] == 'R' && arr[i + 3][j] == 'R' && i + 3 < 7)
                return 'R';

            // Diagonal
            // First player
            if (arr[i][j] == 'B' && arr[i + 1][j + 1] == 'B' && arr[i + 2][j + 2] == 'B' && arr[i + 3][j + 3] == 'B' && j + 3 < 7 && i + 3 < 7)
                return 'B';

            // Second player
            if (arr[i][j] == 'R' && arr[i + 1][j + 1] == 'R' && arr[i + 2][j + 2] == 'R' && arr[i + 3][j + 3] == 'R' && j + 3 < 7 && i + 3 < 7)
                return 'R';
        }
    }
    // Sec Diagonal
    for (int u = 0; u < 7; u++)
    {
        for (int k = 6; k >= 0; k--)
        {
            // Frist player
            if (arr[u][k] == 'B' && arr[u + 1][k - 1] == 'B' && arr[u + 2][k - 2] == 'B' && arr[u + 3][k - 3] == 'B' && u + 3 < 7 && k - 3 >= 0)
                return 'B';

            // Second player
            if (arr[u][k] == 'R' && arr[u + 1][k - 1] == 'R' && arr[u + 2][k - 2] == 'R' && arr[u + 3][k - 3] == 'R' && u + 3 < 7 && k - 3 >= 0)
                return 'R';
        }
    }
    return '/';
}
