// Rectangle Area
// By: Jonathan Bloedorn

#include <iostream>
#include <conio.h>

using namespace std;

// Get the rectangle length from the user
int GetLengthFromUser() {
	int length;
	cout << "Enter the length of the rectangle: ";
	cin >> length;

	return length;
}

// Get the rectangle width from the user
int GetWidthFromUser() {
	int width;
	cout << "Enter the width of the rectangle: ";
	cin >> width;

	return width;
}

// Calculate the area of the rectangle from its length and width
int CalculateArea(int length, int width) {
	return length * width;
}

void DisplayArea(int area) {
	cout << "The area of the rectangle is: " << area << "\n";
}

int main() {
	// call all the functions to fetch info and calculate the rectangle
	int length = GetLengthFromUser();
	int width = GetWidthFromUser();
	int area = CalculateArea(length, width);
	DisplayArea(area);

	(void)_getch();
	return 0;
}