#include "module1.h"

struct Data
{
	string name;
	int price;
	int age;
};
void enter()
{
	ofstream fout("Assort.txt");
	int n;
	cout << "���-�� �������:";	
	cin >> n;
	Data* arr = new Data[n];
	for (int i = 0; i < n; i++)
	{
		cout << "�������� �� ��������: " << i + 1 << endl;
		cout << "��������: ";
		cin >> arr[i].name;
		cout << "���������(�): ";
		cin >> arr[i].price;
		cout << "�������: ";
		cin >> arr[i].age;
		fout << arr[i].name << " " << arr[i].price << " " << arr[i].age << endl;
	}
	fout.close();
	delete[] arr;
}