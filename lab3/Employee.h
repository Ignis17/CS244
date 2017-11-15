//Team: <Team Name>
//Author: <Names>
//Creation: <Date>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Archive.h"

namespace lab3
{
	class Employee
	{
		private:
		Name name;
		Address address;
		int employeeId;
		double salary;
		static int nextId;

		public:
		Employee()
		{
			name = name;
			address = address;
			nextId = employeeId;
			salary = 5000;
			nextId +=1;
		}
		Employee(const Name& name,const Address& address,double salary)
		{
			this->name = name;
			this->address = address;
			if(salary>=5000)
			{
				this->salary = salary;
			}
			else
			{
				this->salary = 5000;
			}
			employeeId = nextId;
			nextId +=1;
		}
		Employee(const Employee& other)
		{
			 name = other.name;
			 address = other.address;
			 salary = other.salary;
			 nextId = other.nextId;
			 employeeId = other.employeeId;
		}
		Employee& operator=(const Employee& rhs)
		{
			if(this != &rhs)
			{
				this->name = rhs.name;
				this->address = rhs.address;
				this->salary = rhs.salary;
				this->nextId = rhs.nextId;
				this->employeeId = rhs.employeeId;
			}
			return *this;
		}
		~Employee(){}

		int GetEmployeeId()
		{
			return employeeId;
		}
		Name& GetName()
		{
			return name;
		}
		Address& GetAddress()
		{
			return address;
		}
		static int GetNextId()
		{
			return nextId;
		}
		double GetSalary()
		{
			return salary;
		}
		void SetName(const Name& nam)
		{
			name = nam;
		}
		void SetAddress(const Address& add)
		{
			address = add;
		}
		void SetSalary(double sal)
		{
			salary = sal;
		}
		std::string ToString() const
		{
			std::stringstream out;
			out << name << " " << employeeId << "\n" << address << "\n"
					<< salary << "\n";
			return out.str();
		}
		friend std::ostream& operator<<(std::ostream& out,const Employee& obj)
		{
			out << obj.ToString();
			return out;
		}
	};

	int Employee::nextId = 1;
}

#endif
