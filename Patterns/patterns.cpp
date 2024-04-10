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

// Pattern 8 (Full Pyramid)
void pattern8()
{
    for (int row = 0; row < 7; row++)
    {
        for (int col = 0; col <= 6 - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Pattern 9 (Inverted Full Pyramid)
void pattern9()
{
    for (int row = 0; row < 7; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < 6 - row; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Pattern 10 (Rhombus)
void pattern10()
{
    int n = 4;
    int row = 2 * n;
    for (int i = 1; i <= row; i++)
    {
        int space_count = i > n ? i - (n + 1) : n - i;
        int star_count = i > n ? 2 * n - i + 1 : i;

        for (int j = 1; j <= space_count; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= star_count; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Pattern 11 (Hollow Pyramid)
void pattern11()
{
    int n = 4;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            if (col == 1 || col == row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
}

// Pattern 12 (Hollow Diamond)
void pattern12()
{
    int n = 5;
    for (int row = 1; row <= 2 * n; row++)
    {
        for (int col = 1; col <= 2 * n - 1; col++)
        {
            if (row + col == n + 1 || col - row == n - 1 || row - col == n || row + col == 3 * n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

// Pattern 13a (Flipped Solid Diamond Method 1)
void pattern13a()
{
    int n = 4;
    for (int i = 1; i <= 2 * n; i++)
    {
        int star = i > n ? i - n : n - i + 1;
        int space = i > n ? 4 * n - 2 * i + 1 : 2 * i - 1;
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// OR

// Pattern 13b (Flipped Solid Diamond Method 2)
void pattern13b()
{
    int n = 4;
    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= 2 * n + 1; j++)
        {
            if (i + j <= n + 1 || j - i >= n + 1 || i - j >= n || i + j >= 3 * n + 2)
            {
                cout << "* ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << "\n";
    }
}

// Pattern 14 ()
void pattern14()
{
    int n = 4;
    int row = 2 * n - 1;
    for (int i = 1; i <= row; i++)
    {
        int rowNum = i > n ? 4 * n - 2 * i - 1 : 2 * i - 1;
        for (int j = 1; j <= rowNum; j++)
        {
            if (j % 2 == 0)
            {
                cout << "* ";
            }
            else if (i > n)
            {
                cout << 2 * n - i << " ";
            }
            else
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
}

// Pattern 15 ()
void pattern15()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i + j == n + 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
}

// Pattern 16 ()
void pattern16()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int num = i == 1 || i == n ? i : i + 1;
        for (int j = 1; j <= num; j++)
        {
            if (j == 1 || i == n)
            {
                cout << j << " ";
            }
            else if (j == num)
            {
                cout << j - 1 << " ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << "\n";
    }
}

// Pattern 17 ()
void pattern17()
{
    int n = 5;
    for (int i = 1; i <= n; i++)

    {
        char ch = 'A' - 1;

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i >= j)
            {
                ch++;
            }
            else
            {
                ch--;
            }
            cout << ch;
        }
        cout << "\n";
    }
}

// Pattern 18 (Numeric hollow inverted half pyramid)
void pattern18()
{
    int n = 8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            if (j == 1)
            {
                cout << i << " ";
            }
            else if (i == 1)
            {
                cout << j << " ";
            }
            else if (i + j == n + 1)
            {
                cout << n << " ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << "\n";
    }
}

// Pattern 19 (Numeric palindrome equilateral pyramid)
void pattern19()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int start = 1;
        for (int j = 1; j <= n + i - 1; j++)
        {
            if (i + j >= n + 1)
            {
                cout << start << " ";
                if (j < n)
                {
                    start++;
                }
                else
                {
                    start--;
                }
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << "\n";
    }
}

// Pattern 20 (Numeric palindrome equilateral pyramid)
void pattern20()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 4 * n - 3; j++)
        {
            if (i + j <= 2 * n - 1 || j - i >= 2 * n - 1)
            {
                cout << "* ";
            }
            else
            {
                if (i % 2 == 1 && j % 2 == 1 || i % 2 == 0 && j % 2 == 0)
                {
                    cout << i << " ";
                }
                else
                {
                    cout << "* ";
                }
            }
        }
        cout << "\n";
    }
}

int main()
{
    // pattern1();
    // cout << endl;
    // pattern2();
    // cout << endl;
    // pattern3();
    // cout << endl;
    // pattern4();
    // cout << endl;
    // pattern5();
    // cout << endl;
    // pattern6();
    // cout << endl;
    // pattern7();
    // cout << endl;
    // pattern8();
    // cout << endl;
    // pattern9();
    // cout << endl;
    // pattern10();
    // cout << endl;
    // pattern11();
    // cout << endl;
    // pattern12();
    // cout << endl;
    // pattern13a();
    // cout << endl;
    // pattern13b();
    // cout << endl;
    // pattern14();
    // cout << endl;
    // pattern15();
    // cout << endl;
    // pattern16();
    // cout << endl;
    // pattern17();
    // cout << endl;
    // pattern18();
    // cout << endl;
    // pattern19();
    // cout << endl;
    pattern20();
}