/*#include <iostream>
#include <vector>


using namespace std;

// Vectors are arrays that can expand.
// are they just universally better then arrays?
int main() {
	// initialised after declaration
	vector<string> itemNames;

	cout << itemNames.size() << endl;

	itemNames.push_back("hat");
	itemNames.push_back("tie");
	itemNames.push_back("shoe");
	itemNames.push_back("sock");
	itemNames.push_back("shirt");
		
	cout << itemNames.size() << endl;

	for (int i = 0; i < itemNames.size(); i++) {
		cout << itemNames[i] << " ";
	}

	cout << endl;

	itemNames[1] = itemNames.back();
	itemNames.pop_back();

	cout << itemNames.size() << endl;

	for (int i = 0; i < itemNames.size(); i++) {
		cout << itemNames[i] << " ";
	}

	cout << endl;

	system("PAUSE");
	return 0;
}*/