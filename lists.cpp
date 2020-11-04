/*#include <iostream>
#include <list>
#include <string>

using namespace std;

// Lists are similar to vectors,
// consist of linked individual items

// VECTOR : abcd
// LIST   : a - b - c - d
//			begin		end
// if we cut b out of the vector we have a complicated process to replace it, so that they are all together.

// vectors are faster then lists.

int main() {
	
	list<string> itemNames;

	itemNames.push_back("gloves");
	itemNames.push_front("tie");
	itemNames.push_front("sock");
	itemNames.push_back("shoe");
	itemNames.push_front("shirt");
	// final order should be shirt sock tie glove shoe

	// Now we need to use iterators
	list<string>::iterator names;

	for (names = itemNames.begin() ; names != itemNames.end() ; names++) {
		cout << *names << endl;
	}
	cout << endl;

	itemNames.remove("shoe");
	for (names = itemNames.begin(); names != itemNames.end(); names++) {
		cout << *names << endl;
	}


	system("PAUSE");
	return 0;
}*/