#include <iostream>
#include "arrays.h"
using namespace std;

using namespace std;

int findUniqueElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

void printPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }
}

// void sortZeroAndOne(int arr[], int size) {
//   int zeroCount = 0;
//   int oneCount = 0;
//   for (int i = 0; i < size; i++) {
//     if (arr[i] == 0) {
//       zeroCount++;
//     } else {
//       oneCount++;
//     }
//   }
//   for (int i = 0; i < size; i++) {
//     if (i < oneCount) {
//       arr[i] = 1;
//     } else {
//       arr[i] = 0;
//     }
//   }
//   cout << "No. of zeroes are: " << zeroCount << endl;
//   cout << "No. of ones are: " << oneCount << endl;
//   cout << "Array after sorting: "
//        << "(";
//   for (int i = 0; i < size; i++) {
//     cout << arr[i] << ",";
//   }
//   cout << ")";
// }

void sortZeroAndOne(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (arr[left] == 1)
        {
            swap(arr[left], arr[right]);
            right -= 1;
        }
        else
        {
            left += 1;
        }
    }

    cout << "Array after sorting: "
         << "(";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << ")";

    // DIFFERENT TWO POINTER APPROACH

    // int j = -1;
    // for (int i = 0; i < size; i++) {
    //   if (arr[i] == 1) {
    //     j = i;
    //     break;
    //   }
    // }
    // for (int i = j + 1; i < size; i++) {
    //   if (arr[i] == 0) {
    //     arr[i] = 1;
    //     arr[j] = 0;
    //     j++;
    //   }
    // }
}

void shiftElementBy1(int arr[], int size)
{
    int i = size - 2;         // 4
    int temp = arr[size - 1]; // 60
    while (i >= 0)
    {
        arr[i + 1] = arr[i];
        arr[i] = temp;
        i--;
    }

    cout << "Array after shifting: "
         << "(";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << ")";
}

void shiftElementBy2(int arr[], int size)
{
    int tempArr[2] = {arr[size - 2], arr[size - 1]};
    int i = size - 3;
    while (i >= 0)
    {
        arr[i + 2] = arr[i];
        i--;
    }
    arr[0] = tempArr[0];
    arr[1] = tempArr[1];

    cout << "Array after shifting: "
         << "(";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << ")";
}

void sumOfDiagElem(int arr[][4], int rows, int cols)
{
    cout << "Size of row is: " << rows << "\n";
    cout << "Size of col is: " << cols << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int sumOfDiag = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = cols - 1; j >= 0; j--)
        {
            if (i + j == rows - 1)
            {
                sumOfDiag += arr[j][i];
            }
        }
    }
    cout << "Sum of diagonal is: " << sumOfDiag;
}

void transposeOfMatrix(int arr[][4], int rows, int cols)
{
    cout << "Before transposing the matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < cols; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "After transposing the matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printArrays()
{
    cout << "Hi there! I am from arrays.cpp" << endl;

    // ----------->>> FINDING UNIQUE ELEMENT IN THE ARRAY <<<<------------------

    // int arr[6] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // int uniqueElement = findUniqueElement(arr, size);
    // cout << uniqueElement;
    // printPairs(arr, size);
    // sortZeroAndOne(arr, size);
    // shiftElementBy1(arr, size);
    // shiftElementBy2(arr, size);

    // ----------->>> FINDING SUM OF DIAGONAL ELEMENTS <<<<------------------

    // int arr[4][4] = {
    //     {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // int rows = sizeof(arr) / sizeof(arr[0]);
    // int cols = sizeof(arr[0]) / sizeof(int);
    // sumOfDiagElem(arr, rows, cols);

    // ----------->>> TRANSPOSING A MATRIX (2D ARRAY) <<<<------------------
    // int arr[4][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {7, 8, 9, 0}, {3, 5, 6, 6}};

    // int rows = sizeof(arr) / sizeof(arr[0]);
    // int cols = sizeof(arr[0]) / sizeof(int);
    // transposeOfMatrix(arr, rows, cols);
}