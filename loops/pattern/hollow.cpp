#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j, k;
    cout << "enter tjhe number of row and col you want" << endl;
    cin >> row >> col;
    int n = row;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1)
            {
                cout << "*";
            }
            else if (j == 0 || j == col - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}