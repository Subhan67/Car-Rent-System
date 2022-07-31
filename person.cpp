#include "person.h"
#include<string>
#include<iostream>
using namespace std;

void person::deepCopy(char*& dest, const char* src)
{
	int i = strlen(src);
	dest = new char[i + 1];
	int j;
	for (j = 0; j < i; j++)
	{ 
		dest[j] = src[j];  
	}   
	dest[i] = '\0'; 
	   
	 
}  
person::person()
{  
	Name = nullptr;
	Gender = nullptr;
	Age = 0;
}
person::person(char* n, char* g, int ag)
{
	deepCopy(Name, n);
	deepCopy(Gender, g);
	Age = ag;
}
void person::setName(char* n)
{
	deepCopy(Name, n);
}
void person::setGender(char* g)
{
	deepCopy(Gender, g);
}
void person::setAge(int ag)
{
	Age = ag;
}
char* person::getName()
{
	char* temp;
	deepCopy(temp, Name);
	return temp;
}
char* person::getGender()
{
	char* temp;
	deepCopy(temp, Gender);
	return temp;
}
int person::getAge()
{
	return Age;
}




void person::Info()     // In this function We take input the data for person ( For Both Customer and Admin)
{
	cout << "                                            Personal Information                                         " << endl;

	cin.ignore();
	char* check;
	check = new char[50];

	cout << " Enter your name : ";
	cin.getline(check, 49);
	setName(check);

	int ch;
	cout << " Enter your age : ";      
	cin >> ch;
	setAge(ch);

	cin.ignore();
	char* check1;
	check1 = new char[10];
	cout << " Enter your gender : ";
	cin.getline(check1, 9);
	setGender(check1);


}



person::~person()
{
	if (Name != nullptr)
	{
		delete[] Name;
	}
	if (Gender != nullptr)
	{
		delete[] Gender;
	}
}

