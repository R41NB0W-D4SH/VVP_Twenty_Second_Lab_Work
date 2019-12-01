#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ofstream ofile;
	ifstream ifile;
	string file, res = "";

	cout << "Введите строку для файла: ";
	getline(cin, file);

	ofile.open("test_middle_process.txt");
	ofile << file;
	ofile.close();

	char space;
	ifile.open("test_middle_process.txt");
	while (!ifile.eof())
	{
		ifile.get(space);
		if (space == ' ')
		{
			while (space == ' ')
			{
				ifile.get(space);
			}
			res += ' ';
		}
		res += space;
	}

	ifile.close();
	ofile.open("file.txt");
	ofile << res.substr(0, res.length() - 1);
	ofile.close();

	cout << "Результат смотреть в файле file.txt в папке с проектом " << endl;

	system("pause");
	return 0;
}
