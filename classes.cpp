/*#include <iostream>
#include <string>

using namespace std;

// A Class is a description of an object, think designing complicated data types.
class Monster {
// Public functions should be accessable from the user of the data type
public:
	void growl() {
		cout << _name << " growls" << endl;
	}
	void setName(string name) {
		_name = name;
	}
	string getName() {
		return _name;
	}
// Private functions are those which should only be used by the object for the object.
// same with data. 
private:
	string _name;
};


int main() {

	Monster lion;
	lion.setName("Me");
	lion.growl();
	cout << lion.getName() << endl;
	system("PAUSE");
	return 0;
}
*/