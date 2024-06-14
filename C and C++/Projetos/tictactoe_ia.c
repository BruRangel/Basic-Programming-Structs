#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

int main()
{
    char winner = ' ';

    resetBoard();

    while (winner == ' ' && checkFreeSpaces() != 0)
    {
        printBoard();

        playerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }

        computerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
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
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
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
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void playerMove()
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

        if (board[x][y] != ' ')
        {
            printf("Invalid move.\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
}

void computerMove()
{
    int x, y;

    // First, check if the computer can win in the next move
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            if (board[x][y] == ' ')
            {
                board[x][y] = COMPUTER;
                if (checkWinner() == COMPUTER)
                {
                    return;
                }
                board[x][y] = ' '; // Undo the move
            }
        }
    }

    // If computer cannot win in the next move, check if player can win in the next move and block them
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            if (board[x][y] == ' ')
            {
                board[x][y] = PLAYER;
                if (checkWinner() == PLAYER)
                {
                    board[x][y] = COMPUTER; // Block player's winning move
                    return;
                }
                board[x][y] = ' '; // Undo the move
            }
        }
    }

    // If neither winning nor blocking is possible, make a random move
    do
    {
        srand(time(0));
        x = rand() % 3;
        y = rand() % 3;
    } while (board[x][y] != ' ');

    board[x][y] = COMPUTER;
}

char checkWinner()
{
    // check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }

    // check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
        {
            return board[0][i];
        }
    }

    // check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
    {
        return board[0][2];
    }

    return ' ';
}

void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("You win!");
    }
    else if (winner == COMPUTER)
    {
        printf("You lose!");
    }
    else
    {
        printf("It's a tie");
    }
}