#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
#include "Account.h"
using std::string;

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates,
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
private:
	string name;
	string address;
	string telephone;
	int age;
	string cust_type;
	string account_type;
	int id;
	double checkInterest;
	double saveInterest;
	double CheckFee;
	double OverdraftFee;

public:
	Customer(string name, string address, string telephone, int age, string cust_type, string account_type, int id)
	{
		this->name = name;
		this->address = address;
		this->telephone = telephone;
		this->age = age;
		this->cust_type = cust_type;
		this->account_type = account_type;
		this->id = id;
		if (cust_type == "Adult")
		{
			checkInterest = 0.001;
			saveInterest = 0.001;
			CheckFee = 0.001;
			OverdraftFee = 0.001;
		}
		else if (cust_type == "Senior")
		{
			checkInterest = 0.002;
			saveInterest = 0.002;
			CheckFee = 0.002;
			OverdraftFee = 0.002;
		}
		else
		{
			checkInterest = 0.0005;
			saveInterest = 0.0005;
			CheckFee = 0.0005;
			OverdraftFee = 0.0005;
		}
	}

	string getName()
	{
		return name;
	}

	string getAddress()
	{
		return address;
	}

	string getTelephone()
	{
		return telephone;
	}

	int getAge()
	{
		return age;
	}

	string getCustType()
	{
		return cust_type;
	}

	string getAcctType()
	{
		return account_type;
	}

	int getCustID()
	{
		return id;
	}

	double getcheckIntRate()
	{
		return checkInterest;
	}

	double getsaveIntRate()
	{
		return saveInterest;
	}

	double getCheckFee()
	{
		return CheckFee;
	}

	double getOverdraftFee()
	{
		return OverdraftFee;
	}



	string to_string()
	{
		std::stringstream ss; // for composing the string that describes this account

		// FIXME: Add information about the customer who owns this account.
		ss << "  Name: " << name << std::endl;
		ss << "  Address: " << address << std::endl;
		ss << "  Telephone: " << telephone << std::endl;
		ss << "  Account Type: " << account_type << std::endl;
		//ss << "  Balance: " << balance << std::endl;
		//ss << "  Account ID: " << account_number << std::endl;
		return ss.str();
	}

	void add_interest(double interest) {
		std::cout << std::endl;
	}
};


#endif
