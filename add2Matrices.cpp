// program to add two matrices

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows and columns of matrix ";
    cin >> row >> col;
    int mat1[row][col], mat2[row][col], sum[row][col];

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

    cout << "Sum of two matrices is" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Sum of row " << i + 1 << endl;
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            cout << sum[i][j] << endl;
        }
    }

    return 0;
}