/*

	I am Enver and I am an engineering student. 
	In this code We will be able to perform matrix multiplication.

	sincerely...

*/


#include <iostream>

using namespace std;

int main() {

	int array1[3][3] = {}, array2[3][3] = {}; cout << endl;

	cout << "  a00  a01  a02  \n" << "  a10  a11  a12  \n" << "  a20  a21  a22  \n\n";




	cout << "\tPlease enter the values of Matrix 1" << endl << endl;
	for (int r = 0; r < 3; r++) {

		for (int c = 0; c < 3; c++) {

			cout << "  Enter the value of array1[" << r << "]" << "[" << c << "]: ";
			cin >> array1[r][c];
			

		}

	}


	cout << endl << endl << endl;


	cout << "\tPlease enter the values of Matrix 2" << endl << endl;
	for (int r = 0; r < 3; r++) {

		for (int c = 0; c < 3; c++) {

			cout << "  Enter the value of array2[" << r << "]" << "[" << c << "]: ";
			cin >> array2[r][c];
			

		}

	}

	int newArray[3][3];

	// Very important part !

	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			newArray[r][c] = 0;
			for (int i = 0; i < 3; i++) {
				newArray[r][c] += array1[r][i] * array2[i][c];
			}
		}
	}


	cout << endl << endl << endl;

	cout << "\tNew Array: " << endl << endl;

	for (int r = 0; r < 3; r++) {

		for (int c = 0; c < 3; c++) {

			cout <<"  " << newArray[r][c];


		}

		cout << endl;

	}


	return 0;
}
