#include <iostream>
using namespace std;

// Pattern 1 (Square)
void pattern1()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Pattern 2 (Rectangle)
void pattern2()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Pattern 3 (Hollow Rectangle)
void pattern3()
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            if (row == 0 || row == 3)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == 7)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << "\n";
    }
}

// Pattern 4 (Half Pyramid)
void pattern4()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Pattern 5 (Inverted Half Pyramid)
void pattern5()
{
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Pattern 6 (Numeric Half Pyramid)
void pattern6()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

// Pattern 7 (Inverted Numeric Half Pyramid)
void pattern7()
{
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

int main()
{
    pattern1();
    cout << endl;
    pattern2();
    cout << endl;
    pattern3();
    cout << endl;
    pattern4();
    cout << endl;
    pattern5();
    cout << endl;
    pattern6();
    cout << endl;
    pattern7();
}