#include <iostream>
using namespace std;

// Зміна - це іменована область пам'яті, яка зберігає інформацію певного типу
// і може змінювати це значення протягом виконання програми
// тип даних - характеристика даних, що визначає:
// 1) діапозон значень 
// 2) набір доступних операцій

class Account {
	string username; // змінні-члени, характеристики, атрибути
	string password;
	string desc;
};

int main()
{
	Account myAccount;

	// int - тип даних який дозволяє зберегати цілі числа
	int num = 120;
	cout << num << endl;
	num = 20;
	cout << num << endl;


	cout << 10 + 12 << endl;

	
}