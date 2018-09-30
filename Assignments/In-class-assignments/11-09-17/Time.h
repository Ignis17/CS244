#ifndef TIME_H
#define TIME_H

#include <sstream>
#include <iomanip>

namespace ws3
{
	class Time
	{
	private:
		int second;
		int minute;
		int hour;
		//Set time to midnight by using
		//initialization list
	public:

		Time() : second(0), minute(0), hour(0) {}
		/*Evaluate to
		Time()
		{
			second = 0;
			minute = 0;
			hour = 0;
		}
		*/
		//Create a string that displays
		//time as a 24-hour clock
		//with each value represented
		//with two digits
		void SetHour(int value)
		{
			if(value>=0&&value<=23)
			{
				hour = value;
			}
		}
		void SetMinute(int value)
		{
			if(value>=0&&value<=59)
			{
				minute = value;
			}
		}
		void SetSecond(int value)
		{
			if(value>=0&&value<=59)
			{
				second = value;
			}
		}
		int GetHour() const
		{
			return hour;
		}
		int GetMinute() const
		{
			return minute;
		}
		int GetSecond() const
		{
			return second;
		}
		std::string ToString() const
		{
			std::stringstream out;
			out << std::setfill('0');
			out << std::setw(2) << hour << ":";
			out << std::setw(2) << minute << ":";
			out << std::setw(2) << second;

			return out.str();
		}
		friend std::ostream& operator <<(std::ostream& out, const Time& obj)
		{
			out << obj.ToString();
			return out;
		}
	};
}
#endif
