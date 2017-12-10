//Lab 3: Employee
//Team: Ignis
//Author: Joel Turbi, Christopher Williams, Luis Casado
//Creation: 11/30/2017
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Archive.h"
#include "Name.h"
#include "Address.h"

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
			name = Name();
			address = Address();
			employeeId = nextId;
			salary = 5000;
			nextId ++;
		}
		Employee(const Name& name,const Address& address,double salary)
		{
			this->name = name;
			this->address = address;
			if(salary >= 5000)
			{
				this->salary = salary;
			}
			else
			{
				this->salary = 5000;
			}
			this->employeeId = nextId;
		 	nextId ++;
		}
		Employee(const Employee& other)
		{
			 this->name = other.name;
			 this->address = other.address;
			 this->salary = other.salary;
			 this->employeeId = other.employeeId;
		}
		Employee& operator=(const Employee& rhs)
		{
			if(this != &rhs)
			{
				this->name = rhs.name;
				this->address = rhs.address;
				this->salary = rhs.salary;
				this->employeeId = rhs.nextId;
			}
			return *this;
		}
		~Employee(){}

		Name& GetName()
		{
			return name;
		}
		Address& GetAddress()
		{
			return address;
		}
		int GetEmployeeId()
		{
			return employeeId;
		}
		double GetSalary()
		{
			return salary;
		}
		static int GetNextId()
		{
			return nextId;
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
			if(sal >= 5000)
				salary = sal;
		}
		std::string ToString() const
		{
			std::stringstream out;

			out << std::setprecision(2) << std::fixed;
			out << name << " " << employeeId << '\n';
			out << address << '\n';
			out << salary;
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
