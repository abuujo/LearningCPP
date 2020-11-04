/*#include <iostream>
#include <string>

using namespace std;

class CheckerBoard {
public:
	void initBoard(char on, char off) {
		int onOff = 1;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				//For every cell in a row
				if (onOff == 1) {
					board[i][j] = on;
					onOff = 0;
				}
				else {
					board[i][j] = off;
					onOff = 1;
				}
			}
			if (onOff == 0) {
				onOff = 1;
			}
			else {
				onOff = 0;
			}
		}
	}

	void printBoard() {
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cout << " " << board[i][j] << " ";
			}
			cout << endl;
		}
	}

private:
	char board[8][8];

};

int main() {

	CheckerBoard newBoard;
	newBoard.initBoard('@', '#');
	newBoard.printBoard();

	system("PAUSE");
	return 0;
}*/