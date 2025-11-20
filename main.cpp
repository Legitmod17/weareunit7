#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");

	cout << "[+] Календарь" << endl;
	cout << "[1] Январь" << endl;
	cout << "[2] Февраль" << endl;
	cout << "[3] Март" << endl;
	cout << "[4] Апрель" << endl;
	cout << "[5] Май" << endl;
	cout << "[6] Июнь" << endl;
	cout << "[7] Июль" << endl;
	cout << "[8] Август" << endl;
	cout << "[9] Сентябрь" << endl;
	cout << "[10] Октябрь" << endl;
	cout << "[11] Ноябрь" << endl;
	cout << "[12] Декабрь" << endl;

	int month, day;
	cout << "Выберите месяц: ";
	cin >> month;
	cout << endl;

	string monthName;

	switch (month) { 
	case 1: {
		cout << "Выбран месяц Январь\n";
		monthName = "Января";
		break;
	}
	case 2: {
		cout << "Выбран месяц Февраль\n";
		monthName = "Февраль";
		break;
	}
	case 3: {
		cout << "Выбран месяц Март\n";
		monthName = "Март";
		break;
	}

}
