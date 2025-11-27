#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

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
		monthName = "Январь";
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
	case 4: {
		cout << "Выбран месяц Апрель\n";
		monthName = "Апрель";
		break;
	}
	case 5: {
		cout << "Выбран месяц Май\n";
		monthName = "Май";
		break;
	}
	case 6: {
		cout << "Выбран месяц Июнь\n";
		monthName = "Июнь";
		break;
	}
	case 7: {
		cout << "Выбран месяц Июль\n";
		monthName = "Июль";
		break;
	}
	case 8: {
		cout << "Выбран месяц Август\n";
		monthName = "Август";
		break;
	}
	case 9: {
		cout << "Выбран месяц Сентябрь\n";
		monthName = "Сентябрь";
		break;
	}
	case 10: {
		cout << "Выбран месяц Октябрь\n";
		monthName = "Октябрь";
		break;
	}
	case 11: {
		cout << "Выбран месяц Ноябрь\n";
		monthName = "Ноябрь";
		break;

	}

	case 12: {
		cout << "Выбран месяц Декабрь\n";
		monthName = "Декабрь";
		break;
	}
	default:
		cout << "Неправильно введён номер месяца!\n";
		return 0;



	}
}
