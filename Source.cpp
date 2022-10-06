#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	//If15.Даны три числа.Найти сумму двух наибольших из них

	/*float a, b, c;
	cin >> a >> b >> c;
	if (a > c&& b > c) {
		cout << a + b;
	}
	else if (c > a&& b > a) {
		cout << c + b;
	}
	else if (a > b&& c > b) {
		cout << c + a;
	}
	else if (c > a&& b > a) {
		cout << c + b;
	}*/
	//If16.Даны три переменные вещественного типа : A, B, C.Если их значения
		//упорядочены по возрастанию, то удвоить их; в противном случае заменить значение каждой переменной на противоположное.Вывести новые
		//значения переменных A, B, C
	/*float a, b, c;
	cin >> a >> b >> c;
	if (c<b<a) {
		a = a * a;
		b = b * b;
		c = c * c;
		cout <<a<<b<<c<<endl;
	}
	else {
		a = -a;
		b = -b;
		c = -c;
		cout << a << b << c<<endl;
	}*/
	//Case1.Дано целое число в диапазоне 1–7.Вывести строку — название дня
		//недели, соответствующее данному числу(1 — «понедельник», 2 — «втор -
	/*int a;
	cin >> a;
	if (a == 1) {
		cout << "понедельник";
	}
	else if (a == 2) {
		cout << "вторник";
	}

	else if (a == 3) {
		cout << "среда";
	}

	else if (a == 4) {
		cout << "четверг";
	}

	else if (a == 5) {
		cout << "пятница";
	}

	else if (a == 6) {
		cout << "суббота";
	}

	else if (a == 7) {
		cout << "воскресенье";
	}
	else if(a>7){
		cout << 0;
	}*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1: cout << "понедельник"; break;
	case 2: cout << "вторник"; break;
	case 3: cout << "среда"; break;
	case 4: cout << "четверг"; break;
	case 5: cout << "пятница"; break;
	case 6: cout << "суббота"; break;
	case 7: cout << "воскресенье"; break;
	default:cout << "0";}*/
	//Case2.Дано целое число K.Вывести строку - описание оценки, соответствующей числу K(1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).Если K не лежит в диапазоне 1–5,
	//	то вывести строку «ошибка».
	/*int k;
	cin >> k;
	switch (k)
	{
		case 1: cout << "плохо"; break;
		case 2: cout << "неудовлетворительно"; break;
		case 3: cout << "удовлетворительно"; break;
		case 4: cout << "хорошо"; break;
		case 5: cout << "отлично"; break;
		default:cout << "0";

	}*/
	//Case3.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 — февраль и т.д.).Вывести название соответствующего времени года(«зима»,
	//	«весна», «лето», «осень»)
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
	case 2:
	case 12:cout << "зима"; break;
	case 3:
	case 4:
	case 5:cout << "весна"; break;
	case 6:
	case 7:
	case 8:cout << "лето"; break;
	case 9:
	case 10:
		case 11:cout << "осень"; break;
		default:cout<<0;
	}*/
	//Case4◦
	//.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
		//февраль и т.д.).Определить количество дней в этом месяце для невисокосного года
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
	case 2:
	case 12:cout << "зима"; break;
	case 3:
	case 4:
	case 5:cout << "весна"; break;
	case 6:
	case 7:
	case 8:cout << "лето"; break;
	case 9:
	case 10:
	case 11:cout << "осень"; break;
	default:cout<<0;
	}
	if (a==1) {
		cout << 31;
		}
	 else if(a==2) {
		cout << 29;
	}
	 else if (a == 12) {
		cout <<31 ;
	}
	 else if (a == 3) {
		cout << 31;
	}
	 else if (a == 4) {
		cout << 30;
	}
	 else if (a == 5) {
		cout << 31;
	}
	 else if (a == 6) {
		cout << 30;
	}
	 else if (a == 7) {
		cout << 31;
	}
	 else if (a == 8) {
		cout << 31;
	}
	 else if (a ==9 ) {
		cout << 30;
	}
	 else if (a == 10) {
		cout << 31;
	}
	 else if (a == 11) {
		cout << 30;
	}*/
	/*Case5.Арифметические действия над числами пронумерованы следующим
	образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
	номер действия N(целое число в диапазоне 1–4) и вещественные числа A
	и B(В не равно 0).Выполнить над числами указанное действие и вывести
	результат*/
	/*int n;
	float a, b;
	cin >> n>>a>>b;
	switch (n) {
	case 1:cout <<a+b; break;
	case 2:cout <<a-b ; break;
	case 3:cout << a * b; break;
	case 4:cout << a / b; break;
	default:cout<<0;}*/

/*Case6.Единицы длины пронумерованы следующим образом : 1 — дециметр,
2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр.Дан номер
единицы длины(целое число в диапазоне 1–5) и длина отрезка в этих
единицах(вещественное число).Найти длину отрезка в метрах*/
/*int a;
float b;
cin >> a >> b;
switch (a) {
case 1:cout << "дециметр"; cout << b/10; break;
case 2:cout << "километр";  cout << b * 1000; break;
case 3:cout << "метр"; cout << b/1; break;
case 4:cout << "миллиметр";   cout << b/1000; break;
case 5:cout << "сантиметр";  cout << b/100; break;
default:cout << 0;
}*/
//1. Треугольник со сторонами а, b, с является равносторонним.
/*int a, b, c;
cin >> a >> b >> c;
bool r;
r = a==b && b == c;
cout <<  boolalpha<<r;*/
//2. Целое число N является четным двузначным числом.
/*int n;
cin >> n;
bool r;
r = n %2==0 && n > 9 && n < 100;
cout << boolalpha << r;*/
//3. Треугольник со сторонами а, b, с является равнобедренным.
/*int a, b, c;
cin >> a >> b >> c;
bool r;
r = a == b || b == c || c == b;
cout << boolalpha << r;*/
//1. Даны два угла треугольника(в градусах).Определить, существует ли такой треугольник.Если да, то прямоугольный ли он.
/*int a, b;
cin >> a >> b;
if (a+b >= 2 && a+b <= 179) {
	cout << "da"<<endl;
	if (a==90||b==90) {
		cout <<" daaa"<<endl;
	}
}

else {
	cout << "net";
}*/

	

	
	












}