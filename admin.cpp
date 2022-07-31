#include "admin.h"
#include<string>
#include<iostream>
using namespace std;

void admin::deepCopy(char*& dest, const char* src)
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
admin::admin()   
{
	Status = nullptr;
	Contactnum = nullptr;

}
admin::admin(char* st, char* con)  
{
	deepCopy(Status, st);
	deepCopy(Contactnum, con);

}
void admin::setStatus(char* st)
{
	deepCopy(Status, st);
}
void admin::setContactnum(char* con)
{
	deepCopy(Contactnum, con);
}
char* admin::getStatus()
{
	char* temp;
	deepCopy(temp, Status);
	return temp;

}
char* admin::getContact()
{
	char* temp;
	deepCopy(temp, Contactnum);
	return temp;
}


void admin::Info()         // In this function we take specific information of Admin
{
	char* post = new char[20];
	cout << " Enter your Official Post : ";
	cin.getline(post, 19);
	setStatus(post);

	char* Cnum = new char[13];
	cout << " Enter your Official Contact Number : ";
	cin.getline(Cnum, 12);
	setContactnum(Cnum);


	cout << endl;
	cout << " -----------------------------------          Thanks for Providing Your Data         -----------------------------------" << endl;
	cout << endl;
	cout << endl;


}





void admin::display()
{
	cout << "the name of admin is " << getName() << endl;
	cout << "the age of admin is  " << getAge() << endl;
	cout << "the gender of admin is" << getGender() << endl;
	cout << "the status of admin is" << getStatus() << endl;
	cout << "the contact of admin is" << getContact() << endl;

}





admin::~admin()
{
	if (Status != nullptr)
	{
		delete[] Status;
	}
	if (Contactnum != nullptr)
	{
		delete[] Contactnum;
	}
}
