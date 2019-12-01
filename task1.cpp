#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ofstream ofile;
	ifstream ifile;
	string ish, line;

	cout << "Введите строку: ";
	getline(cin, ish);

	ofile.open("file.txt");
	ofile << ish;
	ofile.close();

	ifile.open("file.txt");
	getline(ifile, line);
	ifile.close();

	int i = 0;
	while (line[i] != ' ') i++;
	i++;

	ofile.open("file.txt");

	for (i; i < line.length(); i++)
	{	
		ofile << line[i];
	}

	ofile.close();

	cout << "Результат смотреть в файле file.txt в папке с проектом" << endl;

	system("pause");
	return 0;
}
