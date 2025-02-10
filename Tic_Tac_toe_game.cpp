#include <iostream>
using namespace std;

//3x3 Array
char board[3][3];
char currentPlayer;

//Initializes board with numbers 1 to 9
void initializeBoard() {
    char num = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = num++;
    currentPlayer = 'X';
}

// Disiplays the board
void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << board[i][j] << (j < 2 ? " | " : "");
        cout << "\n" << (i < 2 ? "---------\n" : "");
    }
}

 
bool isValidMove(int move) {
    return board[(move-1)/3][(move-1)%3] == ('0' + move);
}

void makeMove(int move) {
    board[(move-1)/3][(move-1)%3] = currentPlayer;
}

bool checkWin() {
    for (int i = 0; i < 3; i++)
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
            return true;
    return (board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
           (board[0][2] == board[1][1] && board[1][1] == board[2][0]);
}

bool checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] >= '1' && board[i][j] <= '9')
                return false;
    return true;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    char playAgain;
    do {
        initializeBoard();
        while (true) {
            displayBoard();
            int move;
            cout << "Player " << currentPlayer << ", enter move (1-9): ";
            cin >> move;
            if (move < 1 || move > 9 || !isValidMove(move)) {
                cout << "Invalid move! Try again.\n";
                continue;
            }
            makeMove(move);
            if (checkWin()) {
                displayBoard();
                cout << "Player " << currentPlayer << " wins!\n";
                break;
            }
            if (checkDraw()) {
                displayBoard();
                cout << "It's a draw!\n";
                break;
            }
            switchPlayer();
        }
        cout << "Play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    return 0;
}
