#include "vehicle.h"
#include<string>
#include<iostream>
using namespace std;

void vehicle::deepCopy(char*& dest, const char* src)
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
vehicle::vehicle() 
{
	Ctype = nullptr;
	Cnumber = 0;
	Ccategory = 0;
	Cdescription = nullptr;
	Cid = 0;
}
vehicle::vehicle(char* Ct, int Cn, int Cc , char* Cd, int Ci)
{
	deepCopy(Ctype, Ct);
	Cnumber= Cn;
	Ccategory=Cc;
	deepCopy(Cdescription, Cd);
	Cid = Ci;
}

void vehicle::setCtype(char* ct)
{
	deepCopy(Ctype, ct);

}
void vehicle::setCnumber(int cn)
{
    Cnumber= cn;
}
void vehicle::setCcategory(int Cc)
{
	Ccategory = Cc;
}
void vehicle::setCdescription(char* cd)
{
	deepCopy(Cdescription, cd);
}
void vehicle::setCid(int id)
{
	Cid = id;
}
char* vehicle::getCtype()
{
	char* temp;
	deepCopy(temp, Ctype);
	return temp;

}
int vehicle::getCnumber()
{
	return  Cnumber;
}
int vehicle::getCcategory()
{
	return Ccategory;
}
char* vehicle::getCdescription()
{
	char* temp;
	deepCopy(temp, Cdescription);
	return temp;
}
int vehicle::getCid()
{
	return Cid;

}
void vehicle::display()
{
	cout << "the car type is  " << getCtype() << endl;
	cout << "the car number is " << getCnumber() << endl;
	cout << "the car  category is " << getCcategory() << endl;
	cout << "the car description is" << getCdescription();
	cout << "the car id is " << getCid() << endl;


}


char* vehicle::selectCar(int t)    // In this function customer select the vehicle which he want and also initialization of attributes of selected vehicle
{
	if (t == 1)
	{
		char*C = new char[20];
		bool ch = false;
		while (ch != true)
		{
			cout << endl;
			cout << endl;
			cout << " Select car : " << endl;
			cout << endl;
			cout << " Press 1 for Suzuki Cultus " << endl;
			cout << " Press 2 for Honda N-wgn " << endl;
			cout << " Enter your choice : ";
			cin >> Ccategory;

			if (Ccategory == 1)
			{
				C = " Suzuki Cultus ";

				Ctype = new char[10];
				Ctype = " Micro ";
				Cnumber = 5089;

				return C;
			}
			else if (Ccategory == 2)
			{
				C = " Honda N-wgn ";

				Ctype = new char[10];
				Ctype = " Micro ";
				Cnumber = 6852;

				return C;
			}
			else
			{
				cout << " You enter wrong choice, Please Re-Enter " << endl;
			}


		}
	}

	if (t == 2)
	{
		char* C = new char[20];
		bool ch = false;
		while (ch != true)
		{
			cout << endl;
			cout << endl;
			cout << " Select car : " << endl;
			cout << endl;
			cout << " Press 1 for Honda City " << endl;
			cout << " Press 2 for Toyota GLI " << endl;
			cout << " Enter your choice : ";
			cin >> Ccategory;

			if (Ccategory == 1)
			{
				C = " Honda City ";

				Ctype = new char[10];
				Ctype = " Sedan ";
				Cnumber = 9855;


				return C;
			}
			else if (Ccategory == 2)
			{
				C = " Toyota GLI ";

				Ctype = new char[10];
				Ctype = " Sedan ";
				Cnumber = 4356;

				return C;
			}
			else
			{
				cout << " You enter wrong choice, Please Re-Enter " << endl;
			}
		}
		
	}

	if (t == 3)
	{
		char* C = new char[20];
		bool ch = false;
		while (ch != true)
		{
			cout << endl;
			cout << endl;
			cout << " Select car : " << endl;
			cout << endl;
			cout << " Press 1 for Honda Civic " << endl;
			cout << " Press 2 for Mercedes Benz " << endl;
			cout << " Enter your choice : ";
			cin >> Ccategory;

			if (Ccategory == 1)
			{
				C = " Honda Civic ";

				Ctype = new char[12];
				Ctype = " LiftBack ";
				Cnumber = 777;

				return C;
			}
			else if (Ccategory == 2)
			{
				C = " Mercedes Benz ";

				Ctype = new char[12];
				Ctype = " LiftBack ";
				Cnumber = 555;

				return C;
			}
			else
			{
				cout << " You enter wrong choice, Please Re-Enter " << endl;
			}


		}
	}
}


vehicle::~vehicle()
{
}
