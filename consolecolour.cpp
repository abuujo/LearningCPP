#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

int main() {

	char input;

	const WORD colors[] =
	{
	0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F,
	0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6
	};

	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD index = 0;

	// Remember how things were when we started
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hstdout, &csbi);

	// Tell the user how to stop
	SetConsoleTextAttribute(hstdout, 0xEC);
	std::cout << "    ";
	SetConsoleTextAttribute(hstdout, 0xFF);
	std::cout << "    ";
	SetConsoleTextAttribute(hstdout, 0xEC);
	std::cout << "    " << endl;

	SetConsoleTextAttribute(hstdout, 0xFF);
	std::cout << "    ";
	SetConsoleTextAttribute(hstdout, 0xEC);
	std::cout << "    ";
	SetConsoleTextAttribute(hstdout, 0xFF);
	std::cout << "    " << endl;

	SetConsoleTextAttribute(hstdout, 0xEC);
	std::cout << "    ";
	SetConsoleTextAttribute(hstdout, 0xFF);
	std::cout << "    ";
	SetConsoleTextAttribute(hstdout, 0xEC);
	std::cout << "    " << endl;
	// Keep users happy
	SetConsoleTextAttribute(hstdout, csbi.wAttributes);
	system("PAUSE");
	return 0;
}