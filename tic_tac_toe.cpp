#include <iostream>

using namespace std;

void printGame(int game[])
{
    for(int i = 0; i < 9; i++)
    {
        switch(game[i])
        {
        case 1:
            cout << "X";
            break;
        case 2:
            cout << "O";
            break;
        default:
            cout << " ";
            break;
        }
        switch(i)
        {
        case 0:
        case 1:
        case 3:
        case 4:
        case 6:
        case 7:
            cout << " | ";
            break;
        case 2:
        case 5:
            cout << "\n---------\n";
                 break;
        default:
            cout << "\n";
            break;
        }
    }
    return;
}

int main() {
    int game[9];

    printGame(game);
    return 0;
}
