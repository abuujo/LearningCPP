/*#include <iostream>
#include <string>

using namespace std;



class Board {
public:
	void initBoard() {
		for (int y = 0; y < 10; y++) {
			for (int x = 0; x < 10; x++) {
				if ((x == 0) | (x == 9)) {
					gameBoard[x][y] = '*';
				}
				else if ((y == 0) | (y == 9)) {
					gameBoard[x][y] = '*';
				}
				else {
					gameBoard[x][y] = ' ';
				}
			}
		}
	}

	void drawBoard(int dx, int dy) {
		xPos += dx;
		yPos += dy;
		for (int y = 0; y < 10; y++) {
			for (int x = 0; x < 10; x++) {
				if (x == xPos && y == yPos) {
					cout << '@';
				}
				else {
					cout << gameBoard[x][y];
				}
			}
			cout << endl;
		}

	}

private:
	char checkBoard(int x, int y) {
		return gameBoard[x][y];
	}
	int xPos = 4;
	int yPos = 4;
	char gameBoard[10][10];
};


int main() {

	int input = 0;

	// 1 ^ 
	// 2 >
	// 3 <
	// 4 down
	// 5 is endgame

	Board rl;
	rl.initBoard();
	while (input != 5) {
		int dx = 0;
		int dy = 0;
		cin >> input;

		system("CLS");
		switch(input) {
		case 1 :  
			dy -= 1;
			break;
		case 2 : 
			dx += 1;
			break;
		case 3 : 
			dx -= 1;
			break;
		case 4 : 
			dy += 1;
			break;
		}

		rl.drawBoard(dx, dy);
	}


	system("PAUSE");
	return 0;
}*/

