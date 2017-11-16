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
        firstName = "";
        lastName = "";
		  }
      Name(std::string firstName,std::string lastName)
      {
        for(int i = 0;i < firstName.length();i+=1)
        {
          if(!isalpha(firstName[i]))
          {
            this->firstName = "";
          }
          else
          this->firstName = firstName;
        }
        for(int i = 0;i < lastName.length();i+=1)
        {
          if(!isalpha(lastName[i]))
          {
            this->lastName = "";
          }
          else
          this->lastName = lastName;
        }
      }
		  // Copy constructor
      Name(const Name& other)
      {
        firstName = other.firstName;
        lastName = other.lastName;
      }
      // Assignment operator
      Name& operator=(const Name& rhs)
      {
        if(this != &rhs)
        {
          this->firstName = rhs.firstName;
          this->lastName = rhs.lastName;
        }
        return *this;
      }
      // Destructor
      ~Name(){}
      std::string& GetFirstName()
      {
        return firstName;
      }
      std::string& GetLastName()
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
        out << obj.ToString();
			  return out;
      }
    };
  }
#endif
