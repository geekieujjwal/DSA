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

void printArrays()
{
    cout << "Hi there! I am from arrays.cpp" << endl;
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    // int uniqueElement = findUniqueElement(arr, size);
    // cout << uniqueElement;
    // printPairs(arr, size);
    // sortZeroAndOne(arr, size);
    // shiftElementBy1(arr, size);
    // shiftElementBy2(arr, size);
}