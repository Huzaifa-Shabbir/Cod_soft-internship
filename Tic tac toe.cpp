#include <iostream>
#include <cstdlib>
using namespace std;

const int BOARD_SIZE = 3;
char board[BOARD_SIZE][BOARD_SIZE] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

void printBoard() {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            cout << board[i][j];
            if (j < BOARD_SIZE - 1)
                cout << " | ";
        }
        cout << endl;
        if (i < BOARD_SIZE - 1)
            cout << "---------" << endl;
    }
}

bool checkWin(char symbol) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
            return true;
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
            return true;
    }
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
        return true;
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
        return true;
    return false;
}

bool checkDraw(int count) {
    return count == BOARD_SIZE * BOARD_SIZE;
}

bool isValidMove(int input) {
    return input >= 1 && input <= 9 && board[(input - 1) / BOARD_SIZE][(input - 1) % BOARD_SIZE] != 'o' && board[(input - 1) / BOARD_SIZE][(input - 1) % BOARD_SIZE] != 'x';
}

void makeMove(int input, char symbol) {
    board[(input - 1) / BOARD_SIZE][(input - 1) % BOARD_SIZE] = symbol;
}

int main() {
    string name1, name2;
    char symbol1, symbol2;
    cout << "Player 1: Enter your name: ";
    cin >> name1;
    cout << "Player 2: Enter your name: ";
    cin >> name2;
    cout << name1 << ", enter your symbol (o or x): ";
    cin >> symbol1;
    cout << name2 << ", enter your symbol (o or x): ";
    cin >> symbol2;

    int count = 0;
    while (true) {
        printBoard();
        int input;
        cout << (count % 2 == 0 ? name1 : name2) << ": Enter the place value: ";
        cin >> input;
        if (!isValidMove(input)) {
            cout << "Error! Please enter a valid input." << endl;
            continue;
        }
        makeMove(input, count % 2 == 0 ? symbol1 : symbol2);
        ++count;

        if (checkWin(symbol1)) {
            printBoard();
            cout << "GAME ENDED!" << endl;
            cout << name1 << " WINS!" << endl;
            break;
        }
        else if (checkWin(symbol2)) {
            printBoard();
            cout << "GAME ENDED!" << endl;
            cout << name2 << " WINS!" << endl;
            break;
        }
        else if (checkDraw(count)) {
            printBoard();
            cout << "GAME ENDED!" << endl;
            cout << "IT'S A DRAW!" << endl;
            break;
        }

        system("pause");
        system("CLS");
    }

    return 0;
}
