#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void resetBoard();
void printBoard();
int checkFreeSpaces();
void player1Move();
void player2Move();
char checkWinner();
void printWinner(char);

char board[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

int main()
{
    char winner = ' ';

    resetBoard();

    while(winner == ' ' && checkFreeSpaces() != 0)
    {
        printBoard();

        player1Move();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }

        player2Move();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
    }

    printBoard();
    printWinner(winner);

    return 0;
}

void resetBoard()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkFreeSpaces()
{
    int freeSpaces = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void player1Move()
{
    int x;
    int y;

    do
    {
        printf("Enter the row number (1-3): \n");
        scanf("%d", &x);
        x--;

        printf("Enter the column number (1-3): \n");
        scanf("%d", &y);
        y--;

        if(board[x][y] != ' ')
        {
            printf("Invalid move.\n");
        }
        else
        {
            board[x][y] = PLAYER1;
            break;
        }
    } while (board[x][y] != ' ');

}

void player2Move()
{
    // creates a seed based on current time
    srand(time(0));
    int x;
    int y;

    if(checkFreeSpaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');
        
        board[x][y] = PLAYER2;
    }
    else
    {
        printWinner(' ');
    }
}

char checkWinner()
{
    // check rows
    for(int i = 0; i < 3; i++)
    {
        if (board[i][0] == board [i][1] && board[i][0] == board [i][2])
        {
            return board[i][0];
        }
    }

    // check columns
    for(int i = 0; i < 3; i++)
    {
        if (board[0][i] == board [1][i] && board[0][i] == board [2][i])
        {
            return board[0][i];
        }
    }    

    // check diagonals
        if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
        {
            return(board[0][0]);
        }
        if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
        {
            return(board[0][2]);
        }
    
    return ' ';
}

void printWinner(char winner)
{
    if(winner = PLAYER1)
    {
        printf("You win!");
    }
    else if(winner == PLAYER2)
    {
        printf("You lose!");
    }
    else
    {
        printf("It's a tie");
    }
}