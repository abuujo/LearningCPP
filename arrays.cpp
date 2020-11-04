/*#include <iostream>
#include <string>

using namespace std;

const int numItems = 4;
const string shopItemNames[numItems] = { "hat","Boot","sword","helmet" };

void printInven(int playerInventory[numItems]);
void buyFromShop(int playerInventory[numItems]);
char checkWantsToBuy();

int main() {
	int playerInventory[numItems] = { 0,3,1,0 };
	cout << "Welcome to the item shop" << endl;

	for (int i = 0; i < numItems; i++) {
		cout << shopItemNames[i] << endl;
	}

	printInven(playerInventory);
	cout << endl;
	buyFromShop(playerInventory);
	printInven(playerInventory);
	cout << "Thank you for visiting" << endl;

	system("PAUSE");
	return 0;
}

void printInven(int playerInven[]) {
	cout << "printing player inventory" << endl;
	for (int i = 0; i < numItems; i++) {
		if (playerInven[i] > 0) {
			cout << shopItemNames[i] << " | " << playerInven[i] << endl;
		}
	}
}

void buyFromShop(int playerInven[]) {
	char wantsToBuy = checkWantsToBuy();
	while(wantsToBuy == 'y') {
		cout << "make selection : 1 , 2, 3, 4" << endl;
		int selection;
		cin >> selection;
		selection -= 1;
		playerInven[selection] += 1;
		wantsToBuy = checkWantsToBuy();
	}

}

char checkWantsToBuy() {
	char wantsToBuy = 'l';
	while ((wantsToBuy != 'y') && (wantsToBuy != 'n')) {
		cout << "Buy from the shop? y/n" << endl;
		cin >> wantsToBuy;
		cout << wantsToBuy << endl;
	}
	return wantsToBuy;
}
*/