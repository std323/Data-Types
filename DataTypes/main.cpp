#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define delimiter "\n---------------------------------\n"

//#define LOGIAL_TYPES   //���������� ����
//#define NUMERIC_TYPES  //�������� ����
//#define VARIABLES      //����������


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
	cout << "������� ��������� ����� ����: ";
	cin >> price_of_coffee;
	cout << "������� ���������� �����: ";
	cin >> number_of_cups;
	cout << price_of_coffee << endl;
	cout << number_of_cups << endl;
	double total_price = price_of_coffee * number_of_cups;
	cout << "����� ��������� �������: " << total_price << endl;
#endif

	int speed = 0; // ��������
	const int MAX_SPEED = 250;

	5; // �������� ��������� ���� (int)
	5.; // �������� ��������� ���� (double)
	.5; // �������� ��������� ���� (double)
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