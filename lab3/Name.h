//Team: <Team Name>
//Author: Joel Turbi, Christopher Williams, Luis Casado
//Creation: 11/14/2017
#ifndef NAME_H
#define NAME_H

#include "Archive.h"

namespace lab3
{
	class Name
	{
		private:
		std::string firstName;
		std::string lastName;

		public:
		Name()
		{
			firstName = " ";
			lastName = " ";
		}

		Name(std::string firstName,std::string lastName)
		{
			if(!isalpha(firstName && !isalpha(lastName)))
			{
				this->firstName = " ";
				this->lastName = " ";
			}
			else
			{
				this->firstName = firstName;
				this->lastName =lastName;
			}
		}

		Name(const Name& other)
		{
			firstName = firstName.other;
			lastName = lastName.other;
		}
		Name& operator=(const Name& rhs)
		{
			if(this != &rhs)
			{
				this->firstName = rhs.firstName;
				this->lastName = rhs.lastName;
			}
			return *this;
		}
		~Name(){}
		std::string& GetFirstName()
		{
			return firstName;
		}
		std::string& GetLastName(last)
		{
			return lastName;
		}
		void SetFirstName(const std::string& first)
		{
			firstName = first;
		}
		void SetLastName(const std::string& last)
		{
			lastName = last;
		}
		std::string ToString() const
		{
			std::stringstream out;
			out << firstName << " " << lastName << "\n";
			return out.str();
		}
		friend std::ostream& operator<<(std::ostream& out,const Name& obj)
		{
			out << obj.Tostring();
			return out;
		}
	};
}

#endif
