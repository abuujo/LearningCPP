/*#include <iostream>
#include <string>

using namespace std;



class Board {
public:
	void initBoard() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				gameBoard[j][i] = ' ';
			}
		}
	}

	int insertPeice(int x, int y, char peice) {
		if (checkBoard(x, y) == ' ') {
			gameBoard[x][y] = peice;
			return 0;
		}
		else {
			return 1;
		}
	}

	void drawBoard() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << gameBoard[j][i];
			}
			cout << endl;
		}
	}

	int checkWin() {
		int checkWin = 0;

		int verticalWin = 0;
		int horizontalWin = 0;
		int diagonalWin = 0;

		// vertical win
		for (int i = 0; i < 3; i++) {
			if (gameBoard[0][i] != ' ') {
				if ((gameBoard[0][i] == gameBoard[1][i]) && (gameBoard[1][i] == gameBoard[2][i])) {
					verticalWin = 1;
				}
			}
		}

		// horizontal win
		for (int i = 0; i < 3; i++) {
			if (gameBoard[i][0] != ' ') {
				if ((gameBoard[i][0] == gameBoard[i][1]) && (gameBoard[i][1] == gameBoard[i][2])) {
					horizontalWin = 1;
				}
			}
		}

		// diagonal win
		if (gameBoard[0][0] != ' ') {
			if ((gameBoard[0][0] == gameBoard[1][1]) && (gameBoard[1][1] == gameBoard[2][2])) {
				diagonalWin = 1;
			}
		}
		if (gameBoard[2][2] != ' ') {
			if ((gameBoard[2][0] == gameBoard[1][1]) && (gameBoard[1][1] == gameBoard[0][2])) {
				diagonalWin = 1;
			}
		}

		if ((verticalWin == 1) | (horizontalWin == 1) | (diagonalWin == 1)) {
			checkWin = 1;
		}
		
		return checkWin;
	}


private:
	char checkBoard(int x, int y) {
		return gameBoard[x][y];
	}

	char gameBoard[3][3];
};


int main() {
	
	Board ttt;
	ttt.initBoard();
	char turn = 'x';

	while(ttt.checkWin() == 0) {
		ttt.drawBoard();

		int x = 0;
		int y = 0;
		
		cout << "Enter x: ";
		cin >> x;
		cout << endl;

		cout << "Enter y: ";
		cin >> y;
		cout << endl;

		int check = ttt.insertPeice(x, y, turn);

		if (check == 0) {
			if (turn == 'x') {
				turn = '0';
			}
			else {
				turn = 'x';
			}
		}
	}
	if (turn == 'x') {
		turn = '0';
	}
	else {
		turn = 'x';
	}
	cout << turn << " wins" << endl;


	system("PAUSE");
	return 0;
}

*/