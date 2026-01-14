#include<iostream>
#include<windows.h>
#include<string>
#include<cmath>





/*struct Test
{
	int data = 1;
	std::string name;
};
*/
struct Product
{
	int id;//не переменная а поле
	std::string name;
	int count;
	double price;
	std::string country;
};






int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*int a = 10;

	Test b, c;

	b.data = 10;
	std::cout << c.data << "\n";
	std::cout << b.data << "\n";*/
	Product nastoika,food;

	nastoika.count = 3;
	nastoika.id = 10;
	nastoika.name = "Слёзы студента";
	nastoika.price = 1999;
	nastoika.country = "Россия";





	return 0;
}