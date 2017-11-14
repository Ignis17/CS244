#ifndef ARCHIVE_H
#define ARCHIVE_H

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

namespace lab3
{
	class Name;
	class Address;
	class Employee;
	
	bool validName(std::string str)
	{
		for(int i = 0;i < str.length();i+=1)
		{
			if(!isalpha(str[i]))
				return false;
		}
		return true;
	}
	
	bool validInitials(std::string str)
	{
		if(str.length() != 2)
			return false;
		return (isalpha(str[0]) && isalpha(str[1]));
	}
	
	bool validZipcode(std::string str)
	{
		if(str.length() != 5)
			return false;
		
		for(int i = 0;i < 5;i += 1)
		{
			if(!isdigit(str[i]))
				return false;
		}
		return true;
	}
}

#endif
