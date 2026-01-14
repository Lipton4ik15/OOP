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
/*struct Product
{
	int id;//не переменная а поле
	std::string name;
	int count;
	double price;
	std::string country;
};*/
struct Human
{
	std::string education[3];
	int height;
	std::string surname;
	std::string name;
	std::string proffesia;
};

void Fill(Human& first);

void Write(Human& first);




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//пример структуры
	/*int a = 10;

	Test b, c;

	b.data = 10;
	std::cout << c.data << "\n";
	std::cout << b.data << "\n";*/
	//Product nastoika,food;
	//пример структуры
	/*nastoika.count = 3;
	nastoika.id = 10;
	nastoika.name = "Слёзы студента";
	nastoika.price = 1999;
	nastoika.country = "Россия";

	std::cout << nastoika.price - 123;*/


	Human first;

	 Fill(first);

	 Write(first);

	return 0;
}

void Fill(Human &first)
{

	
	for (int i = 0; i < 3; i++)
	{
	std::cout << "Enter your educations quaftor from " << 1 << " to " << 3 << "\nInput: " << "\n";
	std::cin >> first.education[i];
	}
	
	std::cout << "Enter your height\nInput: " << "\n";
	std::cin >> first.height;
	std::cout << "Enter your name\nInput: " << "\n";
	std::cin >> first.name;
	std::cout << "Enter your surname\nInput: " << "\n";
	std::cin >> first.surname;
	std::cout << "Enter your proffesia\nInput: " << "\n";
	std::cin >> first.proffesia;

}

void Write(Human &first)
{

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Your " << i + 1 << " education" << first.education[i] << "\n";
		
	}
	std::cout << first.height << "\n";
	std::cout << first.name << "\n";
	std::cout << first.surname << "\n";
	std::cout << first.proffesia << "\n";
}

