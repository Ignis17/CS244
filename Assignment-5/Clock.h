// Name: Joel Turbi
// Version: Assignment 5
// Creation: 11/20/2017
#ifndef CLOCK_H
#define CLOCK_H

#include <string>
#include <sstream>
using namespace std;
class Clock
{
  private:
    int seconds;
    int minutes;
    int hours;

  public:
    // Default constructor
    Clock()
    {
      seconds = 0;
      hours = 0;
      minutes = 0;
    }
    // Copy constructor
    Clock(Clock & tick)
    {
      seconds = tick.seconds;
      minutes = tick.minutes;
      hours = tick.hours;
    }
    // Overloaded constructor
    Clock(int s)
    {
      if(s >= 0 && s <= 86399)
      {
        hours = (s / 3600);
        minutes = (s % 3600) / 60;
        seconds = (minutes % 60);
      }
      else
      {
        hours = 0;
        minutes = 0;
        seconds = 0;
      }
    }
    // Minutes mutator function
    void SetMinutes(int m)
    {
      if(m >= 0 && m <= 59)
        minutes = m;
    }
    // Hours mutator function
    void SetHours(int h)
    {
      if(h >= 0 && h <= 23)
        hours = h;
    }
    // Seconds mutator function
    void SetSeconds(int s)
    {
      if(s >= 0 && s <=59)
        seconds = s;
    }
    // Hours accessor function
    int GetHours() const
    {
      return hours;
    }
    // Minutes accessor function
    int GetMinutes() const
    {
      return minutes;
    }
    // Seconds accessor function
    int GetSeconds() const
    {
      return seconds;
    }
    // Public void method named Tick()
    void Tick()
    {
      if(seconds == 59)
      {
        if(minutes == 59)
        {
          hours = (hours + 1) % 24;
        }
        minutes = (minutes + 1) % 60;
      }
      seconds = (seconds + 1) % 60;
    }
    // Public constant method named ToString()
    string ToString() const
    {
      ostringstream out1;
      ostringstream out2;
      ostringstream out3;
      string s = "";

      out1 << hours;

      if(out1.str().size() == 2)
      {
        s = s+out1.str()+":";
      }
      else
      {
        s = s+"0"+out1.str()+":";
      }

      out2 << minutes;

      if(out2.str().size() == 2)
      {
        s = s+out2.str()+":";
      }
      else
      {
        s = s+"0"+out2.str()+":";
      }

      out3 << seconds;

      if(out3.str().size() == 2)
      {
        s = s+out3.str()+":";
      }
      else
      {
        s = s+"0"+out3.str()+":";
      }
      return s;
    }
  };
#endif
