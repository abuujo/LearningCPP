/*#include <iostream>
#include <random>
#include <string>
#include <ctime>
using namespace std;


int main() {
	
	// We need to seed the rng with the current time so that the seed changes
	// and that way it wont re-use the same numbers as before but be more random.
	default_random_engine randomGenerator(time(0));

	uniform_int_distribution<int> diceRoll(1,6);


	cout << "Rolling : " << diceRoll(randomGenerator) << endl;



	system("PAUSE");
	return 0;
}*/