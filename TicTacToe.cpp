#include <iostream>

using namespace std;

class TicTacToe {
private:
    char board[3][3];
    char currentPlayer;
    int moves;

public:
    TicTacToe() {
        resetBoard();
    }

    void resetBoard() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            }
        }

        currentPlayer = 'X';
        moves = 0;
    }

    void printBoard() {
        cout << "-------------" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "| ";
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << " | ";
            }
            cout << endl << "-------------" << endl;
        }
    }

    bool makeMove(int row, int col) {
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            cout << "Invalid move! Try again." << endl;
            return false;
        }

        board[row][col] = currentPlayer;
        moves++;

        if (checkWin()) {
            cout << "Player " << currentPlayer << " wins!" << endl;
            return true;
        } else if (moves == 9) {
            cout << "It's a draw!" << endl;
            return true;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        return false;
    }

    char getCurrentPlayer() const {
        return currentPlayer;
    }

    bool checkWin() {
        // Check rows
        for (int i = 0; i < 3; i++) {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
                return true;
            }
        }

        // Check columns
        for (int j = 0; j < 3; j++) {
            if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[0][j] == board[2][j]) {
                return true;
            }
        }

        // Check diagonals
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
            return true;
        }

        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
            return true;
        }

        return false;
    }
};

int main() {
    TicTacToe game;
    int row, col;

    cout << "Tic-Tac-Toe Game" << endl;

    while (true) {
        game.printBoard();

        cout << "Player " << game.getCurrentPlayer() << ", enter your move (row and column): ";
        cin >> row >> col;

        if (game.makeMove(row, col)) {
            break;
        }
    }

    return 0;
}

