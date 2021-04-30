#include <iostream>
using namespace std;
void daycon(int a[], int n)
{
    int b[100], max;
    b[0] = 1;
    for (int i = 1; i < n; i++)
    {
        max = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] <= a[i])
                if (b[j] > max)
                    max = b[j];
        }
        b[i] = max + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}
int main()
{
    system("cls");
    int n = 8;
    int a[100] = {1, 2, 2, 7, 8, 0, 10, 3};
    daycon(a, n);
    system("pause");
    system("cls");
    return 0;
}
