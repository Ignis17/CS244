//Lab 3: Employee
//Team: Ignis
//Author: Joel Turbi, Christopher Williams, Luis Casado
//Creation: 11/30/2017
#ifndef ADDRESS_H
#define ADDRESS_H

#include "Archive.h"

namespace lab3
{
	class Address
	{
		private:
		std::string street;
		std::string city;
		std::string state;
		std::string zipcode;

		public:
		Address()
		{
			street = "";
			city = "";
			state = "NY";
			zipcode = "11111";
		}
		Address(std::string street,std::string city,std::string state ,std::string zipcode)
		{
			this->street = street;

			if(validName(city))
			{
				this->city = city;
			}
			else
			{
				this->city = "";
			}

			if(validInitials(state))
			{
				this->state = state;
			}
			else
			{
				this->state = "NY";
			}

			if(validZipcode(zipcode))
			{
				this->zipcode = zipcode;
			}
			else
			{
				this->zipcode = "11111";
			}
		}
		Address(const Address& other)
		{
			street = other.street;
			city = other.city;
			state = other.state;
			zipcode = other.zipcode;
		}
		Address& operator=(const Address& rhs)
		{
			if(this != &rhs)
			{
				this->street = rhs.street;
				this->city = rhs.city;
				this->state = rhs.state;
				this->zipcode = rhs.zipcode;
			}
			return *this;
		}

		~Address(){}

		std::string& GetStreet()
		{
			return street;
		}
		std::string& GetCity()
		{
			return city;
		}
		std::string& GetState()
		{
			return state;
		}
		std::string& GetZipcode()
		{
			return zipcode;
		}
		void SetStreet(const std::string& st)
		{
			street = st;
		}
		void SetCity(const std::string& ct)
		{
			if(validName(ct))
				city = ct;
		}
		void SetState(const std::string& sta)
		{
			if(validInitials(sta))
				state = sta;
		}
		void SetZipcode(const std::string& zip)
		{
			if(validZipcode(zip))
				zipcode = zip;
		}
		std::string ToString() const
		{
			std::stringstream out;
			out << street << "\n" << city << "," << state << " " << zipcode;
			return out.str();
		}
		friend std::ostream& operator<<(std::ostream& out,const Address& obj)
		{
			out << obj.ToString();
			return out;
		}
	};
}
#endif
