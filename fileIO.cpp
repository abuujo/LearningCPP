/*#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {

	ofstream outputFile;
	ifstream inputFile;
	
	//lets output a file
	outputFile.open("testFile1.txt");
	if (outputFile.fail()) {
		// could not open file
		perror("testFile1.txt");
		return 1;
	}
	outputFile << "Hello world\n" << "Hello world\n" << "Hello world\n";
	outputFile.close();
	

	inputFile.open("testFile1.txt");
	if (inputFile.fail()) {
		perror("testFile1.txt");
		return 1;
	}

	string input;
	while (getline(inputFile, input)) {
		cout << input << endl;
	}



	system("PAUSE");
	return 0;
}*/