#include <stdio.h>

// Function to print the Tic-Tac-Toe board
void printBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|"); // Vertical separator
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n"); // Horizontal separator
    }
}

// Function to check if the game is over (win or tie)
int isGameOver(char board[3][3]) {
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1; // Row win
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1; // Column win
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1; // Diagonal win
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1; // Diagonal win

    // Check for a tie
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return 0; // Game still ongoing
        }
    }
    return -1; // It's a tie
}

int main() {
    char board[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
    int currentPlayer = 1; // Player 1 starts

    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printf("\nPlayer %d's turn:\n", currentPlayer);
        printBoard(board);

        int row, col;
        printf("Enter row (0, 1, or 2) and column (0, 1, or 2) separated by a space: ");
        scanf("%d %d", &row, &col);

        // Check for valid input
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        // Update the board
        if (currentPlayer == 1) {
            board[row][col] = 'X';
            currentPlayer = 2;
        } else {
            board[row][col] = 'O';
            currentPlayer = 1;
        }

        // Check if the game is over
        int result = isGameOver(board);
        if (result == 1) {
            printf("\nPlayer %d wins!\n", (currentPlayer == 1) ? 2 : 1);
            printBoard(board);
            break;
        } else if (result == -1) {
            printf("\nIt's a tie!\n");
            printBoard(board);
            break;
        }
    }

    return 0;
}

