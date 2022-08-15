#include <iostream>


using namespace std;

int checkWin(int game[])
{
    if(game[4] != 0)
    {
        if(game[4] == game[0] && game[4] == game[8])
            return game[4];
        if(game[4] == game[2] && game[4] == game[6])
            return game[4];
        if(game[4] == game[1] && game[4] == game[7])
            return game[4];
        if(game[4] == game[3] && game[4] == game[5])
            return game[4];
    }
    if(game[0] != 0)
    {
        if(game[0] == game[3] && game[0] == game[6])
            return game[0];
        if(game[0] == game[1] && game[0] == game[2])
            return game[0];
    }
    if(game[8] != 0)
    {
        if(game[8] == game[2] && game[8] == game[5])
            return game[8];
        if(game[8] == game[6] && game[8] == game[7])
            return game[8];
    }
    return 0;
}


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

void easyGame()
{
    int turn = 1;
    bool play = 1;
    int game[] = {0, 0, 0, 0,0, 0, 0, 0, 0};

    int inp;

    while(play && turn < 10)
    {
        printGame(game);
        cout << "Select square 1-9: ";
        cin >> inp;

        inp--;

        system("cls");
        if(inp >= 0 && inp <= 8 && game[inp] == 0)
        {
            game[inp] = 1;
            int winner = checkWin(game);
            if(winner)
            {
                printGame(game);
                cout << "X wins\n";
                system("pause");
                system("cls");
                return;
            }

            turn++;

            int choice = rand() %9;
            while(game[choice] != 0 && turn <=9)
            {
                choice = rand() %9;
            }
            if(turn <=9)
            {
                game[choice] = 2;
                winner = checkWin(game);
                if(winner == 2)
                {
                    printGame(game);
                    cout << "O wins\n";
                    system("pause");
                    system("cls");
                    return;
                }
                turn++;
            }
        }
    }
}


int main() {

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

        switch(inp)
        {
        case 1:
            easyGame();
            break;
        case 4:
            cout << "Thanks for playing\n";
            con = 0;
            break;
        default:
            break;
        }

    }


    return 0;
}
