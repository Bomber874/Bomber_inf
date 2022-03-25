#include <iostream>
#include <iomanip>
#include <cmath>

void lab21()
{
	char simbol;
	int i;
	std::cout << "Ввести с клавиатуры символ и число (от 33 до 255) и вывести соответственно код символа и символ числа.\n";
	std::cin >> simbol;
	std::cin >> i;
	std::cout << "Код символа = " << int(simbol) << " " << char(i);
}

void lab22()
{
	std::cout << "5>3 = " << std::boolalpha << (5 > 3) << "\n";
	std::cout << "истина*ложь = " << ( true && false ) << "\n";
	std::cout << "истина+ложь = " << ( true || false) << "\n";
}

void lab23()
{
	int i;
	std::cout << "Ввести с клавиатуры число и вывести его в восьмеричном, десятичном и шестнадцатеричном виде с индикатором системы счисления.\n";
	std::cin >> i;
	std::cout << std::showbase << std::oct << i << " " << std::dec << i << " " << std::hex << i;
}

void lab24()
{
	float a = 3.2f;
	float b = 654.3457654f;
	std::cout << "Задать две переменные со значениями 3.2 и 654.3457654 " << std::endl
		<< "a.	Вывести значение этих переменных на экран " << a << " " << b << std::endl
		<< "b.	Вывести значение этих переменных в экспоненциальном виде. " << std::scientific << a << " " << b << std::fixed << std::endl
		<< "c.	Вывести значение этих переменных в фиксированном виде с 2 десятичными знаками " << std::setprecision(2) << a << " " << b << std::endl
		<< "d.	Вывести значение этих переменных в фиксированном виде с 4 десятичными знаками " << std::setprecision(4) << a << " " << b << std::endl;
}

void lab25()
{
	std::cout << "Ввести с клавиатуры двузначное число (например, 67). Для вывода числа, отвести 7 позиций и заполните их символом «*»";
	int i;
	std::cin >> i;
	std::cout << std::setw(7) << std::setfill('*') << i;

}

void lab26()
{
	for(int a = 0; a <= 1; a++)
		for (int b = 0; b <= 1; b++) {
			std::cout << a << " " << b << " => " << (!a || b) << "\n";
		}

}

void lab27()
{
	int a, b, c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cout << (a > b ? (a > c ? a : c) : (b > c ? b : c));

}

void lab29()
{
	int _t;
	std::cout << std::setprecision(0);
	_t = sizeof(bool);
	std::cout << "bool " << _t << std::fixed << " " << pow(2, (_t * 8)) << "\n";
	_t = sizeof(char);
	std::cout << "char " << _t << std::fixed << " " << pow(2, (_t * 8)) << "\n";
	_t = sizeof(short);
	std::cout << "short " << _t << std::fixed << " " << pow(2, (_t * 8)) / 2 - 1 << "\n"; // Дополнительно деление на 2, чтобы исключить отрицательные значения
	_t = sizeof(int);
	std::cout << "int " << _t << std::fixed << " " << pow(2, (_t * 8)) / 2 - 1 << "\n"; // Дополнительно деление на 2, чтобы исключить отрицательные значения
	_t = sizeof(long); // 4 байта, как и у int
	std::cout << "long " << _t << std::fixed << " " << pow(2, (_t * 8)) / 2 - 1 << "\n"; // Дополнительно деление на 2, чтобы исключить отрицательные значения
	_t = sizeof(unsigned);
	std::cout << "unsigned " << _t << std::fixed << " " << pow(2, (_t * 8)) << "\n";
}

void lab46()
{
	char simbol;
	int i;
	std::cin >> simbol;
	i = int(simbol);
	if (i >= 65 && i <= 90) {
		std::cout << "Англ заглавн";
	}
	if (i >= 97 && i <= 122) {
		std::cout << "Англ строч";
	}
	if (i >= 128 && i <= 159) {
		std::cout << "Русс заглав";
	}
	if (i >= 160 && i <= 175 || i >= 224 && i <= 238) {
		std::cout << "Русс строч";

	}

}

void lab466()
{
	std::string in;
	for (double i = 1; i <= 8; i++) {
		for (double j = 1; j <= 8; j++) {
			std::cout << (fmod(j, 2) != 0 ? (fmod(i, 2) != 0 ? "@": " ") : (fmod(i, 2) != 0 ? " " : "@"));
		}
		std::cout << "\n";
	}

}

int getIntByChar(char in) {
	switch (in){
		case ('a'):
			return 0;
			break;
		case ('b'):
			return 1;
			break;
		case ('c'):
			return 2;
			break;
		case ('d'):
			return 3;
			break;
		case ('e'):
			return 4;
			break;
		case ('f'):
			return 5;
			break;
		case ('g'):
			return 6;
			break;
		case ('h'):
			return 7;
			break;
	default:
		break;
	}
	return 404; //Не найдено
}

void lab4666()
{
	std::string input = "";
	std::cin >> input;
	const char white = 8;

	bool tbl[8][8] = {};
	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 7; j++) {
			tbl[i][j] = (fmod(j, 2) != 0 ? (fmod(i, 2) != 0 ? true : false) : (fmod(i, 2) != 0 ? false : true));
		}
	}
	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 7; j++) {
			std::cout << (tbl[i][j] ? ' ' : '@') << ' ';
		}
		std::cout << "\n";
	}
	std::cout << "Вы ввели: Строка: " << input[0] << "\nСтолбец: " << input[1] << std::endl <<
		"Эта ячейка: " << (tbl[getIntByChar(input[0])][input[1]] ? "Белая" : "Чёрная") << "\n";


}

void lab45() {
	float a, b, c, d = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a == 0) {
		std::cout << "Уравнение не является квадратным";
		return;
	}
	d = (b * b) - (4 * a * c);
	std::cout << "D=" << d <<std::endl;
	if (d < 0) {
		std::cout << "Нет корней\n";
		return;
	}
	if (d == 0) {
		std::cout << "1 корень\n";
		std::cout << (-b / 2 * a) << std::endl;
		return;
	}
	std::cout << "2 корня\n" <<
		"x1 = " << ((-b + sqrt(d)) / (2 * a)) << std::endl <<
		"x2 = " << ((-b - sqrt(d)) / (2 * a));
}

int main()
{
	char exitKey;
	setlocale(LC_ALL, "Rus");
	lab4666();
	std::cin >> exitKey;
	return 0;
}

//5. Создайте программу, для решения квадратного уравнения ax2 + bx + c = 0. Коэффициенты a, b и c вводятся с клавиатуры.Результатом является значение корней уравнения или сообщение "корней нет".
//6. Дана координата поля шахматной доски(например е5).Вывести цвет поля(черный или белый).Поле a1 – чёрное.
