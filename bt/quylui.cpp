#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n, i = 0;
    cin >> n;
    int money[4] = {10, 5, 2, 1};
    int a[4] = {0, 0, 0, 0};
    while (n != 0)
    {
        a[i] += n / money[i];
        n %= money[i];
        i++;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << money[i] << "=" << a[i] << endl;
    }
    system("pause");
    system("cls");
    return 0;
}