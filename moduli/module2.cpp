#include "module2.h"

struct Data
{
	string name;
	int price;
	int age;
};
void find()
{
	int enter_age;
	int enter_price;	
	int x = 0;
	ifstream fin("Assort.txt");
	ofstream fout("intermediate.txt");
	while (true)
	{
		string v;
		getline(fin, v);
		if (!fin.eof())
			x++;
		else
			break;
	}
	fin.clear(); //������� � ������ �����
	fin.seekg(0);
	Data* arr1 = new Data[x];
	for (int i = 0; i < x; i++)
	{
		fin >> arr1[i].name >> arr1[i].price >> arr1[i].age;
	}

	cout << "������� ����:";
	cin >> enter_price;
	fout << "�� ��������� ����-" << enter_price << ": ";
	cout << "���������:" << endl;
	int max_price = max(max_price, enter_price);
	for (int i = 0; i < x; i++)
	{
		if (arr1[i].price == enter_price)
		{
			if(arr1[i].price = max_price)
			cout << arr1[i].name << endl;
			fout << arr1[i].name << "; ";
		}
	}

	cout << "������� �������: ";
	cin >> enter_age;
	fout << endl << "�� ���������� ��������-" << enter_age << ": ";
	cout << "���������:" << endl;
	for (int i = 0; i < x; i++)
	{
		if (arr1[i].age == enter_age) 
		{
			if (arr1[i].age >= 4)
			{
				cout << arr1[i].name << endl;
				fout << arr1[i].name << "; ";
			}
		}
	}
	fout.close();
	fin.close();
	delete[] arr1;
}