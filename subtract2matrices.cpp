// program to subtract two matrices

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows and columns of matrix ";
    cin >> row >> col;
    int mat1[row][col], mat2[row][col], diff[row][col];

    cout << "Enter the elements of first matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Enter the elements of row " << i + 1 << endl;
        for (int j = 0; j < col; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the elements of second matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Enter the elements of row " << i + 1 << endl;
        for (int j = 0; j < col; j++)
        {
            cin >> mat2[i][j];
        }
    }

    cout << "Difference of two matrices is" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Difference of row " << i + 1 << endl;
        for (int j = 0; j < col; j++)
        {
            diff[i][j] = mat1[i][j] - mat2[i][j];
            cout << diff[i][j] << endl;
        }
    }

    return 0;
}