#include <iostream>
using namespace std;
float dequy(int n)
{
    if (n <= 0)
        return 0;
    return (float)1 / n + dequy(n - 1);
}
float khudequy(int n)
{
    float s = 0;
    for (float i = 1; i <= n; i++)
    {
        s += 1 / i;
    }
    return s;
}
int caub(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int s = 1;
    for (int i = 2; i <= n; i++)
    {
        s = s + i * caub(i - 1);
    }
    return s;
}
int main()
{
    //3120410219_Đỗ Liên Hưng_Lop_Thu_5
    //IDE Visual Studio Code
    system("cls");
    int n;
    cin >> n;
    cout << "cau a:\n"
         << dequy(n) << endl
         << khudequy(n) << endl;
    cout << "cau b:\n"
         << caub(n) << endl;
    system("pause");
    system("cls");
    return 0;
}
