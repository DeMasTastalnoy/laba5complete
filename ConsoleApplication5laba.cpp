#include <iostream>

namespace character
{
	enum num
	{
		ноль,
		один,
		два,
		три,
		четыре,
		пять,
		шесть,
		семь,
		восемь,
		девять,
		ошибка
	};
	void print_days(char* exp)
	{
		setlocale(LC_ALL, "Russian");
		const char* answers[10] = { "0", "1", "2" ,"3", "4", "5", "6", "7", "8", "9"};
		char* name = new char[7];
		num numeral;
		for (short int i = 0; i < 10; i++)
			if (*exp == *answers[i])
				switch (i) {
				case 0:
					numeral = ноль;
					break;
				case 1:
					numeral = один;
					break;
				case 2:
					numeral = два;
					break;
				case 3:
					numeral = три;
					break;
				case 4:
					numeral = четыре;
					break;
				case 5:
					numeral = пять;
					break;
				case 6:
					numeral = шесть;
					break;
				case 7:
					numeral = семь;
					break;
				case 8:
					numeral = восемь;
					break;
				case 9:
					numeral = девять;
					break;
				default:
					numeral = ошибка;
					break;
				}
				switch (numeral) {
				case 0:
					name[0] = 'Н';
					name[1] = 'о';
					name[2] = 'л';
					name[3] = 'ь';
					name[4] = '\0';
					break;
				case 1:
					name[0] = 'О';
					name[1] = 'д';
					name[2] = 'и';
					name[3] = 'н';
					name[4] = '\0';
					break;
				case 2:
					name[0] = 'Д';
					name[1] = 'в';
					name[2] = 'а';
					name[3] = '\0';
					break;
				case 3:
					name[0] = 'Т';
					name[1] = 'р';
					name[2] = 'и';
					name[3] = '\0';
					break;
				case 4:
					name[0] = 'Ч';
					name[1] = 'е';
					name[2] = 'т';
					name[3] = 'ы';
					name[4] = 'р';
					name[5] = 'е';
					name[6] = '\0';
					break;
				case 5:
					name[0] = 'П';
					name[1] = 'я';
					name[2] = 'т';
					name[3] = 'ь';
					name[4] = '\0';
					break;
				case 6:
					name[0] = 'Ш';
					name[1] = 'е';
					name[2] = 'с';
					name[3] = 'т';
					name[4] = 'ь';
					name[5] = '\0';
					break;
				case 7:
					name[0] = 'С';
					name[1] = 'е';
					name[2] = 'м';
					name[3] = 'ь';
					name[4] = '\0';
					break;
				case 8:
					name[0] = 'В';
					name[1] = 'о';
					name[2] = 'с';
					name[3] = 'е';
					name[4] = 'м';
					name[5] = 'ь';
					name[6] = '\0';
					break;
				case 9:
					name[0] = 'Д';
					name[1] = 'е';
					name[2] = 'в';
					name[3] = 'я';
					name[4] = 'т';
					name[5] = 'ь';
					name[6] = '\0';
					break;
				case 10:
					name[0] = 'О';
					name[1] = 'ш';
					name[2] = 'и';
					name[3] = 'б';
					name[4] = 'к';
					name[5] = 'а';
					name[6] = '\0';
					break;
				default:
					name[0] = 'О';
					name[1] = 'ш';
					name[2] = 'и';
					name[3] = 'б';
					name[4] = 'к';
					name[5] = 'а';
					name[6] = '\0';
					break;
				}
			std::cout << name;
			delete[] name;

	}
}

	using namespace character;
	using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char* exp = new char[2];
	cout << "Введите цифру" << endl;
	cin >> exp;
	print_days(exp);
	delete[] exp;
	return 0;
}