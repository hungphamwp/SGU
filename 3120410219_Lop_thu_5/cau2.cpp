#include <iostream>
#include <string.h>
using namespace std;
void countString(char *s)
{
    int trang = 0, so = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
            trang++;
        if (s[i] >= '0' && s[i] <= '9')
            so++;
    }
    cout << "khoang trang = " << trang << endl;
    cout << "so = " << so << endl;
}
void tachString(char *s)
{
    char *t1 = strdup(s);
    int n = 0;
    t1 = strtok(t1, " ");
    /*
    In ra từ đã tách đầu tiên
    Tách từ tiếp theo từ chuỗi con trỏ t1
    Tăng số lượng từ n
    */
    while (t1 != NULL)
    {
        puts(t1);
        t1 = strdup(strtok(NULL, " "));
        n++;
    }
    cout << "Co " << n << " tu" << endl;
}
void checkString(char *s)
{
    /*
    Copy chuoi s vao t1
    Dao chuoi s vao t2
    */
    char *t1 = strdup(s);
    char *t2 = strrev(s);
    if (strcmp(t1, t2) == 0)
        cout << "chuoi doi xung" << endl;
    else
        cout << "chuoi khong doi xung" << endl;
}
int main()
{
    //3120410219_Đỗ Liên Hưng_Lop_Thu_5
    //IDE Visual Studio Code
    system("cls");
    char *s = new char[255];
    cout << "nhap chuoi: ";
    gets(s);
    countString(s);
    tachString(s);
    checkString(s);
    delete[] s;
    system("pause");
    system("cls");
    return 0;
}
