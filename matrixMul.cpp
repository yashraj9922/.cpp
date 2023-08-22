// matrix multiplication

#include <iostream>
using namespace std;

int main()
{
    int row1, col1, row2, col2;
    cout << "Enter the number of rows and columns of first matrix ";
    cin >> row1 >> col1;
    cout << "Enter the number of rows and columns of second matrix ";
    cin >> row2 >> col2;

    if (col1 != row2)
    {
        cout << "Matrix multiplication is not possible" << endl;
        return 0;
    }

    int mat1[row1][col1], mat2[row2][col2], product[row1][col2];

    cout << "Enter the elements of first matrix" << endl;
    for (int i = 0; i < row1; i++)
    {
        cout << "Enter the elements of row " << i + 1 << endl;
        for (int j = 0; j < col1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the elements of second matrix" << endl;
    for (int i = 0; i < row2; i++)
    {
        cout << "Enter the elements of row " << i + 1 << endl;
        for (int j = 0; j < col2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Product of two matrices is" << endl;
    for (int i = 0; i < row1; i++)
    {
        cout << "Product of row " << i + 1 << endl;
        for (int j = 0; j < col2; j++)
        {
            cout << product[i][j] << endl;
        }
    }

    return 0;
}