#include <iostream>
using namespace std;

// matrix is two dimensional array. You should transposition matrix
void transposition(int rows, int cols, int **matrix) {
	for (int j = 0; j < cols; j++) {
		for (int i = 0; i < rows; i++) {
			cout << matrix[i][j];
			if (i != rows - 1) cout << " ";
		}
		cout << endl;
	}
}
int main(int narg, char** argv)
{
	int rows;
	int cols;
	cin >> rows;
	cin >> cols;
	int** matrix = new int*[rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    transposition(rows, cols, matrix);

	return 0;
}
