#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream ifile;
	char c;
	int k = 0;
	bool marker = true;

	ifile.open("file.txt");
	while (!ifile.eof())
	{
		for (int i = 0; i < 5; i++)
		{
			ifile.get(c);
			if (c != ' ')
			{
				marker = false;
			}
		}
		if (marker == true)
		{
			k++;
		}
		else
		{
			marker = true;
		}
		ifile.get(c);
		if (c == '\n')
		{
			for (int i = 0; i < 5; i++)
			{
				ifile.get(c);
				if (c != ' ')
				{
					marker = false;
				}
			}
			if (marker == true)
			{
				k++;
			}
			else
			{
				marker = true;
			}
		}
	}
	ifile.close();
	cout << "Кол-во абзацев в тексте: " << k << endl;

	system("pause");
	return 0;
}
