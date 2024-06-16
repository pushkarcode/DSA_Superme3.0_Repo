#include <iostream>
using namespace std;
// ! row = i and j = col

void square_Patteren(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void hollow_square_Patteren(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
            {
                cout << "* ";
            }
            else if (j == 0 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void inverted_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void hollow_half_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void inverted_hollow_half_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void pyramid_with_numeric(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << (i + 1);
        }
        cout << endl;
    }
}

void full_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void inverted_full_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void Dimand_pattern(int n)
{
    full_pyramid(n);
    inverted_full_pyramid(n);
}

void hollow_full_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 /*|| i == n - 1*/ || j == 0 || j == i + 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
}

void hollow_inverted_full_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";

        for (int j = 0; j < n - i; j++)
        {
            if (/*i == 0 ||*/ i == n - 1 || j == 0 || j == n - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
}

void hollow_dimand_pyramid(int n)
{
    hollow_full_pyramid(n);
    hollow_inverted_full_pyramid(n);
}

void mix_pyramid(int n)
{
    // first half
    for (int i = 0; i < n; i++)
    {
        // start print
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "  ";
        }

        // start print
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // secand half
    for (int i = 0; i < n; i++)
    {
        // star *
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        // spaces
        for (int j = 0; j < (2 * (n - i) - 1); j++)
        {
            cout << "  ";
        }

        // star *
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void fancy_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j & 1)
            {
                cout << "* ";
            }
            else
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
}

void full_fancy_pattern(int n)
{
    fancy_pattern(n);
    n--;
    // inverted logic
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2 * (n - i) - 1); j++)
        {
            if (j & 1)
            {
                cout << "* ";
            }
            else
            {
                cout << n - i << " ";
            }
        }
        cout << endl;
    }
}

void numeric_hollow_half_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || i == j)
            {
                cout << j + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void ABCBA(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
            ch++;
        }
        ch--;
        while (ch > 'A')
        {
            ch--;
            cout << ch;
        }

        cout << endl;
    }
}

void numeric_hollow_inverted_half_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - i - 1)
            {
                cout << j + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void numeric_full_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }

        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

void solid_hald_diamand(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void hollow_fancy_full_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // start print
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            if (j & 1)
            {
                cout << "* ";
            }
            else
            {
                cout << i + 1 << " ";
            }
        }

        // start print
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void solid_fancy__hald_diamand(int n)
{
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << c;
            c++;
            if (j < i)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
    int start = c - n;

    for (int i = 0; i < n; i++)
    {
        int k = start;
        for (int j = 0; j < n - i; j++)
        {
            cout << k;
            k++;
            if (j < (n - i - 1))
            {
                cout << "*";
            }
        }
        start = start - (n - i - 1);
        cout << endl;
    }
}

void golu_fancy_half_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 || j == 0 || i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    n--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (j == 0 || j == n - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

void floyed_tringle_pattern(int n)
{
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}

void pascal_tringle_pattern(int n)
{
    for (int i = 1; i <=n; i++)
    {
        int C = 1;
        for (int j = 1; j <= i ; j++)
        {
            cout << C << " ";
            C = C * (i - j) / j;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    // square_Patteren(n);
    // hollow_square_Patteren(n);
    // pyramid(n);
    // inverted_pyramid(n);
    // hollow_half_pyramid(n);
    inverted_hollow_half_pyramid(n);
    // pyramid_with_numeric(n);
    // full_pyramid(n);
    // inverted_full_pyramid(n);
    // Dimand_pattern(n);
    // hollow_full_pyramid(n);
    // hollow_inverted_full_pyramid(n);
    // hollow_dimand_pyramid(n);

    // ! next day
    // mix_pyramid(n);
    // fancy_pattern(n);
    // full_fancy_pattern(n);
    // ABCBA(n);
    // numeric_hollow_half_pyramid(n);
    // numeric_hollow_inverted_half_pyramid(n);
    // numeric_full_pyramid(n);
    // solid_hald_diamand(n);
    // hollow_fancy_full_pyramid(n);
    // solid_fancy__hald_diamand(n);
    // golu_fancy_half_pyramid(n);
    // floyed_tringle_pattern(n);
    // pascal_tringle_pattern(n);

    return 0;
}