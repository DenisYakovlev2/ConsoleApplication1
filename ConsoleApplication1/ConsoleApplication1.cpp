#include <iostream>
using namespace std;

// «м≥на - це ≥менована область пам'€т≥, €ка збер≥гаЇ ≥нформац≥ю певного типу
// ≥ може зм≥нювати це значенн€ прот€гом виконанн€ програми
// тип даних - характеристика даних, що визначаЇ:
// 1) д≥апозон значень 
// 2) наб≥р доступних операц≥й

class Account {
	string username; // зм≥нн≥-члени, характеристики, атрибути
	string password;
	string desc;
};

int main()
{
	Account myAccount;

	// int - тип даних €кий дозвол€Ї зберегати ц≥л≥ числа
	int num = 120;
	cout << num << endl;
	num = 20;
	cout << num << endl;


	cout << 10 + 12 << endl;

	
}