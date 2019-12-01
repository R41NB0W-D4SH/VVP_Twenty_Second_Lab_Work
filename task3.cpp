#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream ifile1, ifile2;
	ofstream ofile1, ofile2;
	string a, b, file1, file2;

	cout << "Введите строку для файла N1: ";
	getline(cin, file1);
	cout << "Введите строку для файла N2 ";
	getline(cin, file2);

	ofile1.open("file1.txt");
	ofile1 << file1;
	ofile1.close();

	ofile2.open("file2.txt");
	ofile2 << file2;
	ofile2.close();

	ifile2.open("file2.txt");
	while (!ifile2.eof())
	{
		getline(ifile2, a);
	}
	ifile2.close();

	ifile1.open("file1.txt");
	while (!ifile1.eof())
	{
		getline(ifile1, b);
	}
	ifile1.close();

	ofile1.open("file1.txt");
	ofile1 << a;
	ofile1 << b;
	ofile1.close();

	cout << "Результат смотреть в файле file1.txt в папке с проектом " << endl;

	system("pause");
	return 0;
}
