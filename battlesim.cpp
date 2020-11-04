/*#include <iostream>
#include <random>
#include <ctime>


using namespace std;

int main() {
	cout << ">>>>> Red vs Blue <<<<<" << endl;

	//Attach Chance
	int redAttackChance = 5;
	int blueAttackChance = 6;

	//Health
	float redHealth = 250.0f;
	float blueHealth = 260.0f;
	float currentRedHealth = 250.0f;
	float currentBlueHealth = 260.0f;

	//Attach Damage
	float redAttack = 150.0f;
	float blueAttack = 110.0f;

	//Population
	int numRed;
	int numBlue;

	cout << "========================" << endl;
	cout << "Enter the number of Red" << endl;
	cin >> numRed;
	cout << "========================" << endl;
	cout << "Enter the number of Blue" << endl;
	cin >> numBlue;
	cout << "========================" << endl;
	cout << "Red:    " << numRed << endl;
	cout << "Blue:   " << numBlue << endl;
	cout << "========================" << endl;
	cout << ">>>>> <<<Begin!>>> <<<<<" << endl;

	char turn = 'R';

	//RNJESUS
	default_random_engine randomEngine(time(0));
	uniform_int_distribution<int> attackRoll(0, 10); 
	float attackResult;

	while ((numRed > 0) && (numBlue > 0)) {
		//Combat based on turns
		if (turn == 'R') {
			//Reds Turn
			attackResult = attackRoll(randomEngine);

			if (attackResult <= redAttack) {
				currentBlueHealth -= redAttack;
			}

			if (currentBlueHealth <= 0) {
				currentBlueHealth = blueHealth;
				numBlue -= 1;
			}
			//Change to Blue turn
			turn = 'B';
		}
		else {
			//Blue Turn
			attackResult = attackRoll(randomEngine);

			if (attackResult <= blueAttack) {
				currentRedHealth -= blueAttack;
			}

			if (currentRedHealth <= 0) {
				currentRedHealth = redHealth;
				numRed -= 1;
			}
			//Change to Red turn
			turn = 'R';
		}
	}

	cout << ">>>>> <<Finished!> <<<<<" << endl;
	cout << "========================" << endl;
	cout << "Red:    " << numRed << endl;
	cout << "Blue:   " << numBlue << endl;
	cout << "========================" << endl;

	if (numRed > numBlue) {
		cout << ">>>>> RED WINS <<<<<" << endl;
	}
	else {
		cout << ">>>>> Blue WINS <<<<<" << endl;
	}

	system("PAUSE");
	return 0;
}*/