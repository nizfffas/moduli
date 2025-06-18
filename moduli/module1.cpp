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
	cout << "кол-во игрушек:";	
	cin >> n;
	Data* arr = new Data[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Сведения об игрушках: " << i + 1 << endl;
		cout << "Название: ";
		cin >> arr[i].name;
		cout << "Стоимость(р): ";
		cin >> arr[i].price;
		cout << "Возраст: ";
		cin >> arr[i].age;
		fout << arr[i].name << " " << arr[i].price << " " << arr[i].age << endl;
	}
	fout.close();
	delete[] arr;
}