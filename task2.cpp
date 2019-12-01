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
	string file;
	int n, k;

	cout << "Введите имя файла: ";
	getline(cin, file);
	file += ".txt";
	ofile.open(file);
	cout << "Введите n, k: ";
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			ofile << "*";
		}
		ofile << "\n";
	}

	ofile.close();

	cout << "Результат смотреть в файле file.txt в папке проекта " << endl;

	system("pause");
	return 0;
}
