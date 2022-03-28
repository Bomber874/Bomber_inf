#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void lab21()
{
    char simbol;
    int i;
    cout << "Ввести с клавиатуры символ и число (от 33 до 255) и вывести соответственно код символа и символ числа.\n";
    cin >> simbol;
    cin >> i;
    cout << "Код символа = " << int(simbol) << " " << char(i);
}

void lab22()
{
    cout << "5>3 = " << std::boolalpha << (5 > 3) << "\n";
    cout << "истина*ложь = " << ( true && false ) << "\n";
    cout << "истина+ложь = " << ( true || false) << "\n";
}

void lab23()
{
    int i;
    cout << "Ввести с клавиатуры число и вывести его в восьмеричном, десятичном и шестнадцатеричном виде с индикатором системы счисления.\n";
    cin >> i;
    cout << std::showbase << std::oct << i << " " << std::dec << i << " " << std::hex << i;
}

void lab24()
{
    float a = 3.2f;
    float b = 654.3457654f;
    cout << "Задать две переменные со значениями 3.2 и 654.3457654 " << endl
        << "a.	Вывести значение этих переменных на экран " << a << " " << b << endl
        << "b.	Вывести значение этих переменных в экспоненциальном виде. " << std::scientific << a << " " << b << std::fixed << endl
        << "c.	Вывести значение этих переменных в фиксированном виде с 2 десятичными знаками " << std::setprecision(2) << a << " " << b << endl
        << "d.	Вывести значение этих переменных в фиксированном виде с 4 десятичными знаками " << std::setprecision(4) << a << " " << b << endl;
}

void lab25()
{
    cout << "Ввести с клавиатуры двузначное число (например, 67). Для вывода числа, отвести 7 позиций и заполните их символом «*»";
    int i;
    cin >> i;
    cout << std::setw(7) << std::setfill('*') << i;

}

void lab26()
{
    for(int a = 0; a <= 1; a++)
        for (int b = 0; b <= 1; b++) {
            cout << a << " " << b << " => " << (!a || b) << "\n";
        }

}

void lab27()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << (a > b ? (a > c ? a : c) : (b > c ? b : c));

}

void lab29()
{
    int _t;
    cout << std::setprecision(0);
    _t = sizeof(bool);
    cout << "bool " << _t << std::fixed << " " << pow(2, (_t * 8)) << "\n";
    _t = sizeof(char);
    cout << "char " << _t << std::fixed << " " << pow(2, (_t * 8)) << "\n";
    _t = sizeof(short);
    cout << "short " << _t << std::fixed << " " << pow(2, (_t * 8)) / 2 - 1 << "\n"; // Дополнительно деление на 2, чтобы исключить отрицательные значения
    _t = sizeof(int);
    cout << "int " << _t << std::fixed << " " << pow(2, (_t * 8)) / 2 - 1 << "\n"; // Дополнительно деление на 2, чтобы исключить отрицательные значения
    _t = sizeof(long); // 4 байта, как и у int
    cout << "long " << _t << std::fixed << " " << pow(2, (_t * 8)) / 2 - 1 << "\n"; // Дополнительно деление на 2, чтобы исключить отрицательные значения
    _t = sizeof(unsigned);
    cout << "unsigned " << _t << std::fixed << " " << pow(2, (_t * 8)) << "\n";
}

void lab46()
{
    char simbol;
    int i;
    cin >> simbol;
    i = int(simbol);
    if (i >= 65 && i <= 90) {
        cout << "Англ заглавн";
    }
    if (i >= 97 && i <= 122) {
        cout << "Англ строч";
    }
    if (i >= 128 && i <= 159) {
        cout << "Русс заглав";
    }
    if (i >= 160 && i <= 175 || i >= 224 && i <= 238) {
        cout << "Русс строч";

    }

}

void lab466()
{
    std::string in;
    for (double i = 1; i <= 8; i++) {
        for (double j = 1; j <= 8; j++) {
            cout << (fmod(j, 2) != 0 ? (fmod(i, 2) != 0 ? "@": " ") : (fmod(i, 2) != 0 ? " " : "@"));
        }
        cout << "\n";
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
    cin >> input;
    const char white = 8;

    bool tbl[8][8] = {};
    for (int i = 0; i <= 7; i++) {
        for (int j = 0; j <= 7; j++) {
            tbl[i][j] = (fmod(j, 2) != 0 ? (fmod(i, 2) != 0 ? false : true) : (fmod(i, 2) != 0 ? true : false));
        }
    }
    for (int i = 0; i <= 7; i++) {
        for (int j = 0; j <= 7; j++) {
            cout << (tbl[i][j] ? '@' : ' ') << ' ';
            //cout << tbl[i][j] << ' ';
        }
        cout << "\n";
    }
    cout << "Вы ввели: Строка: " << input[0] << "\nСтолбец: " << input[1] << endl <<
        "Эта ячейка: " << (tbl[getIntByChar(input[0])][-48 + input[1]-1] ? "Белая" : "Чёрная") << "\n";
    cout << getIntByChar(input[0]) << " " << (-48+input[1]-1);


}

void lab4555()
{
    std::string input1, input2 = "";
    cin >> input1;
    cin >> input2;
    bool tbl[8][8] = {};
    for (int i = 0; i <= 7; i++) {
        for (int j = 0; j <= 7; j++) {
            tbl[i][j] = (fmod(j, 2) != 0 ? (fmod(i, 2) != 0 ? false : true) : (fmod(i, 2) != 0 ? true : false));
        }
    }
    for (int i = 0; i <= 7; i++) {
        for (int j = 0; j <= 7; j++) {
            if ((-97 + input1[0] == j && -48 + input1[1]-1 == i) || (-97 + input2[0] == j && -48 + input2[1]-1 == i)) {
                cout << '@' << ' ';
            }
            else
                cout << (tbl[i][j] ? '#' : ' ') << ' ';
            //cout << tbl[i][j] << ' ';
        }
        cout << "\n";
    }
    int x1, x2, y1, y2 = 0;
    x1 = -97 + input1[0];
    y1 = -48 + input1[1] - 1;

    x2 = -97 + input2[0];
    y2 = -48 + input2[1] - 1;

    cout << (x1 - x2) << ":" << (y1 - y2) << endl;
    if ((abs(x1 - x2) == 1 && abs(y1 - y2) == 2) || (abs(x1 - x2) == 2 && abs(y1 - y2) == 1))
        cout << "Можно\n";
    else
        cout << "Нельзя\n";

    //cout << "Вы ввели: Строка: " << input[0] << "\nСтолбец: " << input[1] << endl <<
    //	"Эта ячейка: " << (tbl[getIntByChar(input[0])][-48 + input[1] - 1] ? "Белая" : "Чёрная") << "\n";
    //cout << getIntByChar(input[0]) << " " << (-48 + input[1] - 1);


}

void lab45() {
    float a, b, c, d = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 0) {
        cout << "Уравнение не является квадратным";
        return;
    }
    d = (b * b) - (4 * a * c);
    cout << "D=" << d <<endl;
    if (d < 0) {
        cout << "Нет корней\n";
        return;
    }
    if (d == 0) {
        cout << "1 корень\n";
        cout << (-b / 2 * a) << endl;
        return;
    }
    cout << "2 корня\n" <<
        "x1 = " << ((-b + sqrt(d)) / (2 * a)) << endl <<
        "x2 = " << ((-b - sqrt(d)) / (2 * a));
}

void lab54() {
    int maxn = 0;
    int cur = 0;

    while (true) {
        cin >> cur;
        if (cur == 0)
            break;
        if (cur > maxn)
            maxn = cur;
    }
    cout << "Максимальноечисло: " << maxn;
}

long int factorial(int N) {
    long int out = 1;
    for (long int i = 1; i <= N; i++) {
        out *= i;
    }
    return out;
}

void lab55(){
    int N = 0;
    cin >> N;
    cout << factorial(N);
}

void lab56() {
    int _max = 0;
    double M = 0;
    double N = 0;

    cin >> M >> N;

    if ( N > M ) {
        _max = N;
        N = M;
        M = _max;
    }

    //cout << fmod(M, N) << " " << (M / N);

    int mod = N;
    while (true) {
        if (fmod(M, mod) == 0) {
            cout << "НОД = " << mod;
            break;
        }
        mod = fmod(M, mod);
        cout << mod << endl;
    }
}

void lab58() {
    int input = 0;
    cin >> input;
    for (int i = input / 2; i > 0; i--) {
        if (fmod(input, i) == 0) {
            cout << i << endl;
        }
    }
}

void lab510() {
    int lastFib[2] = { 0,1 };
    int N = 0;
    int fib = 0;
    cin >> N;
    if (N < 2) {
        cout << "Число должно быть >= 2";
        return;
    }
    for (int i = 0; i < N; i++) {
        fib = lastFib[0] + lastFib[1];
        cout << fib << "\n";
        lastFib[0] = lastFib[1];
        lastFib[1] = fib;
    }
}

void lab512() {  // Уже при x = 4 погрешность составляет 0.003.
    int x = 50;
    //cin >> x;
    long double out = 0;
    for(int n = 0; n < 7; n++){
        int pos = pow(-1,n);
        long int up = pow(x,2*n);  // При x=50, на 6 итерации значение переваливает за предел и становится отрицательным
        long int dwn = factorial(2*n);
        long double ans = (long double)((double)(pos*up)/(double)dwn);  // Все дополнительные переменные созданы для отладки (Чтобы через дебагер увидеть где переменая выходит за область значений)
        out += ans;
//        out += (pow(-1,n)*pow(x,2*n))/factorial(2*n);
    }
    cout << out;
}

void lab5122() {  // Уже при x = 4 погрешность составляет 0.003.
    int x = 50;
    //cin >> x;
    long double out = 0;
    for(int n = 0; n < 7; n++){
        //int pos = pow(-1,n);
        unsigned long int up = pow(x,2*n);  // При x=50, на 6 итерации значение переваливает за предел и становится отрицательным
        long int dwn = factorial(2*n);
        long double ans = (long double)((long double)up/(long double)dwn);  // Все дополнительные переменные созданы для отладки (Чтобы через дебагер увидеть где переменая выходит за область значений)
        if (pow(-1,n) == 1)
            out += ans;
            else
            out -= ans;

//        out += (pow(-1,n)*pow(x,2*n))/factorial(2*n);
    }
    cout << out;
}

//void lab51222() {  // При x = 35 погрешность значительна. Дальше просто не справляется
//    int x = 35;
//    //cin >> x;
//    double n = 1.0;
//    double sum = 0.0;
//    int i = 1;
//    do
//    {
//        sum += n;
//        n *= -1.0 * x * x / ((2 * i - 1) * (2 * i));
//        i++;
//    }
//    while (fabs(n) > 0.000000001);
//    cout << sum;
//}


int main()
{
    char exitKey;
    setlocale(LC_ALL, "Rus");
    lab5122();
    cin >> exitKey;
    return 0;
}

//5. Создайте программу, для решения квадратного уравнения ax2 + bx + c = 0. Коэффициенты a, b и c вводятся с клавиатуры.Результатом является значение корней уравнения или сообщение "корней нет".
//6. Дана координата поля шахматной доски(например е5).Вывести цвет поля(черный или белый).Поле a1 – чёрное.
//5---2. Даны координаты двух различных полей шахматной доски. Проверьте, может ли ладья за один ход перейти с одного поля на другое
// Циклы
//4 6 8 10 12
