#include <stdio.h>

#define SIZE 3

// Function to initialize the game board
void initializeBoard(char board[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '-';
        }
    }
}

// Function to display the game board
void displayBoard(char board[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Function to check if a player has won
int checkWin(char board[][SIZE], char player) {
    // Checking rows
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
    }

    // Checking columns
    for (int j = 0; j < SIZE; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
            return 1;
    }

    // Checking diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;

    return 0;
}

int main() {
    char board[SIZE][SIZE];
    char currentPlayer = 'X';
    int row, col;

    initializeBoard(board);

    while (1) {
        printf("Player %c's turn\n", currentPlayer);
        printf("Enter row (0-2): ");
        scanf("%d", &row);
        printf("Enter column (0-2): ");
        scanf("%d", &col);

        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != '-') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        board[row][col] = currentPlayer;
        displayBoard(board);

        if (checkWin(board, currentPlayer)) {
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        if (currentPlayer == 'X')
            currentPlayer = 'O';
        else
            currentPlayer = 'X';
    }

    return 0;
}
