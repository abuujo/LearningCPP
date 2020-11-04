/*#include <iostream>
#include <string>
using namespace std;

// Wihtout using namespace, the below code would need
// std::cout 
// so using a namespace gives us access to the functions directly instead of through std::

// Function for checking if a number is cursed.
// If you want to put this function below main, make sure to include the definintion above,
// like with a header file. 
bool cursedNumber(int number) {
	if (number == 18) {
		// random number
		return true;
	}
	return false;
}

int main() {

	string playerName;
	int age;

	// Name
	cout << "What is your name ?" << endl;
	cin >> playerName;

	cout << "Hello , " << playerName << endl;

	//Age
	cout << "What is your age ?" << endl;
	cin >> age;

	cout << playerName << ", aged  " << age << endl;

	if (age < 12) {
		cout << "too young to play" << endl;
		cout << "What is your age ?" << endl;
		cin >> age;

		cout << playerName << ", aged  " << age << endl;
	} 

	if (age > 130) {
		cout << "too old to exist" << endl;
		cout << "What is your age ?" << endl;
		cin >> age;

		cout << playerName << ", aged  " << age << endl;
	}


	// Drawing the years to 130
	int count = 0;
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 10; j++) {

			if (cursedNumber(count)) {
				cout << "[c]";
			}
			else if (count < 12) {
				cout << "[-]";
			}
			else if (count == age) {
				cout << "[X]";
			}
			else {
				cout << "[0]";
			}
			count++; // start at age 0
		}
		if (cursedNumber(age)) {
			cout << " <== Your age is cursed";
		}
		cout << endl;
	}

	system("PAUSE");
	return 0;
}
*/
