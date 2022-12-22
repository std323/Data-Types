#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define delimiter "\n---------------------------------\n"

//#define LOGIAL_TYPES   //логические типы
//#define NUMERIC_TYPES  //числовые типы
//#define VARIABLES      //переменные


void main()
{
	setlocale(LC_ALL, "Rus");
#if defined LOGIAL_TYPES 
	cout << "DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
#endif


#if defined NUMERIC_TYPES
	cout << sizeof(long long) << endl;;
	cout << ULLONG_MAX << endl;
	cout << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "..." << FLT_MAX << endl;
	cout << delimiter << endl;

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "..." << DBL_MAX << endl;
#endif

#if defined VARIABLES
	double price_of_coffee;
	int number_of_cups;
	cout << "¬ведите стоимость чашки кофе: ";
	cin >> price_of_coffee;
	cout << "¬ведите количество чашек: ";
	cin >> number_of_cups;
	cout << price_of_coffee << endl;
	cout << number_of_cups << endl;
	double total_price = price_of_coffee * number_of_cups;
	cout << "ќбща€ стоимость покупки: " << total_price << endl;
#endif

	int speed = 0; // скорость
	const int MAX_SPEED = 250;

	5; // числова€ константа типа (int)
	5.; // числова€ константа типа (double)
	.5; // числова€ константа типа (double)
	cout << sizeof(5) << endl;
	cout << typeid(5ULL).name() << endl;
	double price = 0;
	cout << price << endl;
	cout << '+' << endl;
	cout << typeid('+').name() << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << sizeof("Hello") << endl;
	cout << '\x2B' << endl;
	cout << (int)'!' << endl;
	cout << '\x21' << endl;
}