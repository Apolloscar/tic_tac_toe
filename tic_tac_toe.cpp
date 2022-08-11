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
    bool con = 1;

    while(con)
    {
        int inp;
        cout << "Tic Tac Toe\n\n"
             << "Label of spaces are:\n\n"
             << "1 | 2 | 3\n"
             << "----------\n"
             << "4 | 5 | 6\n"
             << "----------\n"
             << "7 | 8 | 9\n\n"
             << "Select difficulty:\n\n"
             << "1. Easy\n"
             << "2. Medium\n"
             << "3. Impossible\n"
             << "4. Quit\n\n"
             << "Enter option #: ";
        cin >> inp;

        system("cls");

        if(inp == 4)
        {
            cout << "Thanks for playing";
            con = 0;
        }

    }


    return 0;
}
