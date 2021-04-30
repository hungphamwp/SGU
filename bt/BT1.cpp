#include <iostream>
#include <string.h>
using namespace std;
void tach(char *s)
{
	//tao chuoi ban sao
	char *t1 = strdup(s);
	char *t2 = strdup(s);
	cout << "tach dau = " << strtok(t1, " ") << endl;
	t2 = strrchr(t2, ' ');
	cout << "tach cuoi = " << strtok(t2, " ") << endl;
}
void inhoa(char *s)
{
	//tao chuoi ki tu thuong
	char *t = strlwr(s);
	t[0] = toupper(t[0]);
	for (int i = 1; i < strlen(t); i++)
	{
		if (t[i] == ' ' && t[i + 1] != ' ')
			t[i + 1] = toupper(t[i + 1]);
	}
	puts(t);
}
void count(char *s)
{
}
void chucai(char *s)
{
	char *t = strlwr(s);
	for (char i = 'a'; i <= 'z'; i++)
	{
		int d = 0;
		for (int j = 0; j < strlen(t); j++)
		{
			if (t[j] == i)
				d++;
		}
		if (d != 0)
			cout << i << "-" << d << " ";
	}
}
void chuoi(char *s)
{
	char *t1 = strdup(s);
	char *t2 = strdup(s);
	//lay chuoi dau
	t1 = strtok(t1, " ");
	//lay chuoi cuoi
	t2 = strrchr(t2, ' ');
	t2 = strtok(t2, " ");
	//tao chuoi
	int a = strlen(t1);
	int b = strlen(t2);
	char *t = new char[a + b];
	t = strcat(t1, " ");
	t = strcat(t, t2);
	puts(t);
	delete[] t;
}
void daotu(char *s)
{
	char *t = strdup(s);
	char *a = new char[256];
	//tach chuoi
	t = strtok(t, " ");
	while (t != NULL)
	{
		//ghep chuoi da tach
		//a=strcat(a,strrev(t));
		//ghep khoang trang vao chuoi
		//a=strcat(a," ");
		//tach chuoi ke tiep
		puts(t);
		t = strtok(NULL, " ");
	}
	//puts(a);
	delete[] a;
}
void sapxep(char *s)
{
	char *a = strdup(s);
	//cap phat con tro cap 2
	char **t = new char *[10];
	for (int i = 0; i < 10; i++)
	{
		t[i] = new char[256];
	}
	//nhap chuoi cap 2
	int n = 0;
	a = strtok(a, " ");
	while (a != NULL)
	{
		t[n] = strdup(a);
		n++;
		a = strtok(NULL, " ");
	}
	//sap xep
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (stricmp(t[i], t[j]) < 0)
			{
				char *temp = strdup(t[i]);
				strcpy(t[i], t[j]);
				strcpy(t[j], temp);
			}
		}
	}
	char *k = new char[256];
	k = strdup(NULL);
	for (int i = n - 1; i >= 0; i--)
	{
		k = strcat(k, t[i]);
		k = strcat(k, " ");
	}
	puts(k);
	//thu hoi
	for (int i = 0; i < n; i++)
	{
		delete[] t[i];
	}
	delete[] t;
	delete[] k;
}
int main()
{
	system("cls");
	char *s = new char[255];
	gets(s);
	//tach(s);
	//puts(s);
	//inhoa(s);
	//chucai(s);
	//chuoi(s);
	//daotu(s);
	sapxep(s);
	delete[] s;
	system("pause");
	system("cls");
	return 0;
}
