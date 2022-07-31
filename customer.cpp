#include "customer.h"
#include<string>
#include<iostream>
using namespace std;

void customer::deepCopy(char*& dest, const char* src)
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
customer::customer()
{
	ID = 0; 
	Adress = nullptr;
	Phone = nullptr;
}
customer::customer(double id, char* add, char* ph) 
{
	ID = id;
	deepCopy(Adress, add);
	deepCopy(Phone, ph);
}



void customer::Info()       // In this function we take the data of a customer
{

	
	cout << " Enter your Id : ";
	cin >> ID;

	 cin.ignore(); 
	 Phone = new char[15];
	 cout << " Enter your Phone Number : ";
	 cin.getline(Phone, 14);
	
	 Adress = new char[80];
	 cout << " Enter your Address : ";
	 cin.getline(Adress, 79);

	cout << endl;
	cout << " ----------------------------------          Thanks for Providing Your Data         -----------------------------------" << endl;
	cout << endl;
	cout << endl;
}



void customer::setId(double id)
{
	ID = id;
}
void customer::setPhone(char* ph)
{
	deepCopy(Phone, ph);
}
void customer::setAdress(char* add)
{
	deepCopy(Adress, add);
}
double customer::getId()
{
	return ID;

}
char* customer::getPhone()
{
	int length = strlen(Phone);
	char* temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = Phone[i];
	}
	temp[length] = '\0';
	return temp;
}
char* customer::getAdress()
{
	int length = strlen(Adress);
	char* temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = Adress[i];
	}
	temp[length] = '\0';
	return temp;
}
void customer::display()
{
	cout << "the ID of customer is" << getId() << endl;
	cout << "the phone number of customer is" << getPhone() << endl;
	cout << "the Adress of customer is" << getAdress() << endl;

}
customer::~customer() {
	
	if (Phone != nullptr)
	{
		delete[] Phone;
	}
	if (Adress != nullptr)
	{
		delete[] Adress;
	}
}
