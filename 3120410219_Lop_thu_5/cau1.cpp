#include <iostream>
#include <fstream>
using namespace std;
void ghifile(char *inf, int *&a, int &n)
{
    fstream fin(inf, ios::in);
    if (!fin.is_open())
        cout << "Khong mo duoc1" << endl;
    fin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    fin.close();
}
void Min(char *outf, int *a, int n)
{
    fstream fout(outf, ios::out);
    if (!fout.is_open())
        cout << "Khong mo duoc2" << endl;
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    fout << min << endl;
    fout.close();
}
void maxOdd(char *outf, int *a, int n)
{
    fstream fout(outf, ios::app);
    if (!fout.is_open())
        cout << "Khong mo duoc3" << endl;
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    if (max % 2 == 0)
        fout << max + 1;
    else
        fout << max + 2;
    fout.close();
}
int main()
{
    //Do Lien Hung_3120410219_Lop_Thu_5
    //IDE Visual Studio Code
    system("cls");
    char *inf = "D:\\Cfree\\3120410219_Lop_thu_5\\input.txt";
    char *outf = "D:\\Cfree\\3120410219_Lop_thu_5\\output.txt";
    int n, *a;
    ghifile(inf, a, n);
    Min(outf, a, n);
    maxOdd(outf, a, n);
    delete[] a;
    system("pause");
    system("cls");
    return 0;
}
