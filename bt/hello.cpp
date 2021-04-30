#include <iostream>
#include <fstream>
using namespace std;
void ghifile(ifstream &file, int *&a, int &n)
{
    file >> n;
    a = new int [n];
    for (int i = 0; i < n; i++)
        file >> a[i];
}
void daycon(ofstream &file, int *a, int n)
{
    int d = 1, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= a[i + 1])
            d++;
        else if (d > max)
        {
            max = d;
            d = 1;
        }
    }
    file << max;
}
int main()
{
    system("cls");
    ifstream fin;
    fin.open("D:\\Cfree\\bt\\input1.txt");
    ofstream fout;
    fout.open("D:\\Cfree\\bt\\output1.txt");
    int n;
    int *a;
    ghifile(fin, a, n);
    daycon(fout, a, n);
    fin.close();
    fout.close();
    delete []a;
    system("pause");
    system("cls");
    return 0;
}