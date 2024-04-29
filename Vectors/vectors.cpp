#include <iostream>
#include "vectors.h"
#include <vector>

using namespace std;

void printVector(vector<int> v)
{
    v.push_back(1);
    v.push_back('a');
    v.push_back(3);
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << endl;
    }
}

void print2DVector(vector<vector<int> > vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

void printVectors()
{
    cout << "Hi there! I am from vectors.cpp" << endl;
    // vector<int> vec(5, -1);
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }

    // vector<int> v;
    // printVector(v);

    // ----------->>> PRINTING 2D VECTOR <<<<------------------

    // vector<vector<int> > vec(5, vector<int>(10, 7));
    // print2DVector(vec);

    // ----------->>> PRINTING 2D JACKED VECTOR <<<<------------------

    // vector<int> arr1(5, 0);
    // vector<int> arr2(7, 1);
    // vector<int> arr3(9, 0);
    // vector<int> arr4(7, 1);
    // vector<int> arr5(5, 0);
    // vector<vector<int> > arr;
    // arr.push_back(arr1);
    // arr.push_back(arr2);
    // arr.push_back(arr3);
    // arr.push_back(arr4);
    // arr.push_back(arr5);

    // for (int i = 0; i < arr.size(); i++) {
    //     for (int j = 0; j < arr[i].size(); j++) {
    //     cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}