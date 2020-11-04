#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <thread>
#include <random>

HANDLE Handle;

using namespace std;

void setWindow(int Width, int Height) {
	_COORD coord;
	coord.X = Width;
	coord.Y = Height;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Bottom = Height - 1;
	Rect.Right = Width - 1;

	Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle
	SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size
	SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size

	CONSOLE_CURSOR_INFO     cursorInfo;
	GetConsoleCursorInfo(Handle, &cursorInfo);
	cursorInfo.bVisible = false; // set the cursor visibility (get rid of _)
	SetConsoleCursorInfo(Handle, &cursorInfo);
}

// Move to co-ords on the console screen
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Use cout to output char at x, y co-ords with attribute
void outputChar(int attribute, int x, int y, char c) {
	gotoxy(x, y);
	SetConsoleTextAttribute(Handle, attribute);
	cout << c;
}

// Line Algorithm
/*

For bresenhams algorithm a slope of 0 degrees = 0
and a slope of 45 is 1. This algorithm only works in these cases.
I.e. we can only reasonably draw a line within 1/8th of a circle.

*/


// Basic distance algorithm.
float distance2d(int x1, int y1, int x2, int y2) {
	float dx = (float)x1 - (float)x2;
	float dy = (float)y1 - (float)y2;
	return sqrt((dx * dx) + (dy * dy));
}

// shoutout to rltk
void line_algorithm(int x1, int y1, int x2, int y2) {
	float x = static_cast<float>(x1) + 0.5F;
	float y = static_cast<float>(y1) + 0.5F;

	float dest_x = static_cast<float>(x2);
	float dest_y = static_cast<float>(y2);

	float n_steps = distance2d(x1, y1, x2, y2);
	int steps = static_cast<const int>(std::floor(n_steps) + 1);

	float slope_x = (dest_x - x) / n_steps;
	float slope_y = (dest_y - y) / n_steps;

	for (int i = 0; i < steps; ++i) {
		outputChar(13, x, y, '*');
		x += slope_x;
		y += slope_y;
	}

}

int main() {

	while (1) {

		int startx = 10;
		int starty = 10;

		int endy = 7;
		int endx = 5;

		line_algorithm(startx, starty, endx, endy);


		this_thread::sleep_for(200ms);
	}


	system("PAUSE");
	return 1;
}