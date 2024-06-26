#include <iostream>
using namespace std;

const int ROWS = 13;
const int COLM = 8;

int row;
char colm;

int arrayRow;
int arrayCol;

char seats[COLM][ROWS] = { {'D','D','D','D','D','D','D','D','D','D','D','D',' '},
						  {'C','C','C','C','C','C','C','C','C','C','C','C',' '},
						  {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
						  {' ',' ',' ',' ',' ',' ',' ',' ',' ','1','1','1','1'},
						  {'1','2','3','4','5','6','7','8','9','0','1','2','3'},
						  {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
						  {'B','B','B','B','B','B','B','B','B','B','B','B','B'},
						  {'A','A','A','A','A','A','A','A','A','A','A','A','A'}, };

// findRowIndex: given user input, returns appropriate row index into arrays.
// @param thisRow - integer indicating row selected by the user
// @return appropriate index of the 2-D array if the specified row is valid, ERROR otherwise
int findRowIndex(int thisRow);
// findSeatIndex: given user input, returns appropriate column index into seating chart array.
// @param thisSeat - character indicating selected seat within row
// @return appropriate index of the 2-D array if the specified seat is valid, ERROR otherwise
int findSeatIndex(char thisSeat);
// displaySeatColumn: given a 2-D mapping of the seating chart in the form [columns][rows],
// will print out a "column" of seats on one row of output (i.e., seat 'A' for all rows in the plane)
// @param seats - reference to a 2-D character array
// @param column - reference to which column of seats to display
void displaySeatColumn(char seats[][ROWS], int column);

int main() {
	


	return 0;
}


int findRowIndex(int thisRow) {
	if (thisRow < 14 && thisRow > 0) {
		return thisRow - 1;
	}
	else {
		return -1;
	}
}


int findSeatIndex(char thisSeat) {
	switch (thisSeat) {
	case 'A':
		return 7;
	case 'B':
		return 6;
	case 'C':
		return 1;
	case 'D':
		return 0;
	default:
		return -1;
	}
}

void displaySeatColumn(char seats[][ROWS], int column) {
	for (int j = 0; j < ROWS; j++) {
		cout << seats[column][j] << " ";
	}
}