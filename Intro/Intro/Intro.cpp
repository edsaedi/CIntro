// Intro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random>
#include <ctime>


int getRandInt(int min, int max)
{
	return (rand() % (max - min)) + min;
}

int  main()
{
	//using std::endl;
	//using std::cout;
	//using std::cin;
	//using std::string;

	//cout << "Enter your name: ";
	//string name;

	////cin >> name;

	//std::getline(cin, name);

	//cout << "Hello " << name << endl;

	// ask the user for their name, age, birthday
	//std::cout << "Enter your name: ";
	//std::string name;
	//std::getline(std::cin, name);

	//std::cout << "Enter your age: ";
	//int age;
	//std::cin >> age;

	//std::cout << "Enter your birthday: ";
	//std::string birthday;
	//std::cin >> birthday;

	//std::cout << name << std::endl;
	//std::cout << age << std::endl;
	//std::cout << birthday << std::endl;


	//srand(time(NULL));


	srand(1);

	for (int i = 0; i < 10; i++)
	{
		std::cout << getRandInt(0, 100) << std::endl;
	}



	return 0;
}