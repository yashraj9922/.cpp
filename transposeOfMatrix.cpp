// transpose of a Matrix

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows and columns of matrix ";
    cin >> row >> col;

    int mat[row][col];

    cout << "Enter the elements of matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Enter the elements of row " << i + 1 << endl;
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Transpose of matrix is" << endl;
    for (int i = 0; i < col; i++)
    {
        cout << "Transpose of row " << i + 1 << endl;
        for (int j = 0; j < row; j++)
        {
            cout << mat[j][i] << endl;
        }
    }

    return 0;
}