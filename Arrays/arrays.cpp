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

void shiftNegativeToLeft(int arr[], int sizeOfArr){
    cout << "Original Array: ";
  for (int i = 0; i < sizeOfArr; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Array after updation: ";
  // ----->>>> FIRST APPROACH WITH TWO POINTERS
//   int left = 0;
//   int right = sizeOfArr - 1;
//   while (left < right) {
//     if (arr[left] > 0) {
//       swap(arr[left], arr[right]);
//       right--;
//     } else {
//       left++;
//     }
//   }

    // ------>>>> SECOND APPROACH WITH TWO POINTERS
  int index = 0;
  int j = 0;
  while (index < sizeOfArr) {
    if (arr[index] > 0) {
      index++;
    } else {
      swap(arr[index], arr[j]);
      index++;
      j++;
    }
  }

  //Printing the array
  for (int i = 0; i < sizeOfArr; i++) {
    cout << arr[i] << " ";
  }
}


void sortZeroOneTwo(int nums[], int sizeOfArr){
    int left = 0;
   int right = sizeOfArr - 1;
   for (int i = 0; i <= right;) {
     if (nums[i] == 0) {
       swap(nums[i], nums[left]);
       left++;
       i++;
     } else if (nums[i] == 2) {
       swap(nums[i], nums[right]);
       right--;
     } else {
       i++;
     }
   }
   // Printing the array
   for (int i = 0; i < sizeOfArr; i++) {
     cout << nums[i] << " ";
   }
}

void shiftElementByk(int arr[], int sizeOfArr){
    cout << "Enter the no. with which you want to make the shift: ";
    int k;
    cin >> k;
    int ans[sizeOfArr];
    for (int index = 0; index < sizeOfArr; index++) {
        int indexNew = (index + k) % sizeOfArr;
        ans[indexNew] = arr[index];
    }
    // Printing the array
    for (int i = 0; i < sizeOfArr; i++) {
        cout << ans[i] << " ";
    }
}

void rotateBy90(int row, int col, int arr[][4]){
    // Transposing the matrix
  for (int i = 0; i < row; i++) {
    for (int j = i; j < col; j++) {
      swap(arr[i][j], arr[j][i]);
    }
  }

  // Now reversing each row
  for (int i = 0; i < row; i++) {
    int left = 0;
    int right = row - 1;
    while (left < right) {
      swap(arr[i][left], arr[i][right]);
      left++;
      right--;
    }
  }

  // Printing the array
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int findindMissingNo(int arr[], int sizeOfArr){
    for (int i = 1; i <= sizeOfArr; i++) {
    bool targetFound = false;
    for (int j = 0; j < sizeOfArr; j++) {
      if (i == arr[j]) {
        targetFound = true;
        break;
      }
    }
    if (!targetFound) {
      cout << "Missing no. found is: " << i;
      return 0;
    }
  }
  return 1;
}

bool keyPair(int arr[], int size, int input) {
  sort(arr, arr + size);
  int left = 0;
  int right = size - 1;
  while (left < right) {
    if (arr[left] + arr[right] > input) {
      right--;
    } else if (arr[left] + arr[right] < input) {
      left++;
    } else if (arr[left] + arr[right] == input) {
      cout << arr[left] << " , " << arr[right] << endl;
      return true;
    } else {
      return false;
    }
  }
  return 0;
}

int pivotIndex(int arr[], int size) {
  // BRUTE FORCE
  for (int i = 0; i < size; i++) {
    int leftSum = 0;
    int rightSum = 0;
    for (int left = 0; left < i; left++) {
      leftSum = leftSum + arr[left];
    }
    for (int right = size - 1; right > i; right--) {
      rightSum = rightSum + arr[right];
    }
    if (leftSum == rightSum) {
      cout << "Pivot Index found: " << arr[i];
      return 0;
    }
  }
  cout << "There is no pivot index";
  return 0;

  // OPTIMIZED WAY
  
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

    // ----------->>> SHIFTING ALL NEGATIVE NOs TO THE LEFT SIDE <<<<------------------
    // int arr[7] = {23, -7, 12, -10, -11, 40, 60};
    // int sizeOfArr = sizeof(arr) / sizeof(int);

    // shiftNegativeToLeft(arr, sizeOfArr);

    // ----------->>> SORTING ZERO ONE AND TWO NUMBERS <<<<------------------
    // int nums[] = {2, 0, 2, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    // int sizeOfArr = sizeof(nums) / sizeof(int);
    
    // sortZeroOneTwo(nums, sizeOfArr);

    // ----------->>> SHIFTING ELEMENTS BY k NUMBER <<<<------------------
    // int arr[6] = {10, 20, 30, 40, 50, 60};
    // int sizeOfArr = sizeof(arr) / sizeof(int);

    // shiftElementByk(arr, sizeOfArr);

    // ----------->>> ROTATING A 2D ARRAY (MATRIX (n X n)) BY 90deg  <<<<------------------
    // int arr[4][4] = {
    //   {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // int row = sizeof(arr) / sizeof(arr[0]);
    // int col = sizeof(arr[0]) / sizeof(int);
    // rotateBy90(row, col, arr);

    // ----------->>> FINDING MISSING NUMBER BETWEEN 0 TO n IN AN ARRAY  <<<<------------------
    // int arr[] = {1, 7, 3, 2, 5, 6, 8};
    // int sizeOfArr = sizeof(arr) / sizeof(int);

    // findindMissingNo(arr, sizeOfArr);

    // ----------->>> KEY PAIR PROBLEM  <<<<------------------
    // int arr[] = {1, 4, 45, 6, 10, 8};
    // int size = sizeof(arr) / sizeof(int);
    // int input;
    // cout << "Enter the input value: ";
    // cin >> input;
    // cout << endl;

    // bool result = keyPair(arr, size, input);
    // if (result) {
    //   cout << "Pair Exist";
    // } else {
    //   cout << "Pair doesn't exist";
    // }

    // ----------->>>PIVOT INDEX PROBLEM  <<<<------------------
    int arr[] = {1, 7, 3, 6, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    pivotIndex(arr, size);

    cout << endl;
}