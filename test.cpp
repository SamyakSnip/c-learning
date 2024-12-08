#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void swaps(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r)
{
    if (l == r)
        cout<< str << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swaps(str + l, str + i);
            permute(str, l + 1, r);
            swaps(str + l, str + i);
        }
    }
}

int main()
{
    char str[] = "samyak"; // Input string
    int n = strlen(str);
    cout << "All permutations of the string are:" << endl;
    permute(str, 0, n - 1);

    return 0;
}