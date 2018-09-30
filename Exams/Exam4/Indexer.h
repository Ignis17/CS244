// Author: Joel Turbi
// Creation: 12/09/2017
// Description: Exam 4

#ifndef INDEXER_H
#define INDEXER_H
#include <sstream>
#include <string>
using namespace std;

class Indexer
{
private:
  int counter;
public:
  Indexer():counter(0){}

  Indexer(int start)
  {
    if(start >= 0)
    {
      this->counter = start;
    }
    else
      counter = 0;
  }

  Indexer(const Indexer& other)
  {
    this->counter = other.counter;
  }

  Indexer& operator=(const Indexer& rhs)
  {
    if(this != &rhs)
    {
      this->counter = rhs.counter;
    }
    return *this;
  }

  ~Indexer(){}

  int GetCounter() const
  {
    return counter;
  }

  void Reset()
  {
    counter = 0;
  }

  void Increment()
  {
    counter ++;
  }

  string ToString() const
  {
    ostringstream out;

    out << "Counter: " << counter;

    return out.str();
  }
  friend std::ostream& operator <<(std::ostream& out,const Indexer& obj)
  {
    out << obj.ToString();
    return out;
  }
protected:
  void SetCounter(int start)
  {
    if(start >= 0)
    {
      counter = start;
    }
    else
      counter = 0;
    }
  };

class BoundedIndex: public Indexer
{
private:
  int max;

public:
  BoundedIndex()
  {
    SetCounter(0);
    max = 10;
  }
  BoundedIndex(int max)
  {
    if(max >= 0)
    {
      this->max = max;
    }
    else
      this->max = 10;
      SetCounter(0);
  }

  BoundedIndex(int max, int start)
  {
    if(max >= 0)
    {
      this-> max = max;
    }
    else
      this->max = 10;

    if(start >= 0)
    {
      SetCounter(start);
    }
    else
      SetCounter(0);
  }
  BoundedIndex( BoundedIndex& other)
  {
    this->max = other.max;
    SetCounter(other.GetCounter());
  }
  BoundedIndex& operator =(BoundedIndex& rhs)
  {
    if(this != &rhs)
    {
      this->max = rhs.max;
      SetCounter(rhs.GetCounter());
    }
    return *this;
  }

  ~BoundedIndex(){}

  int GetMax() const
  {
    return max;
  }

  void SetMax(int max)
  {
    if(max >= 0)
    {
      this->max = max;
    }
    else
      max = 0;
  }
  bool IsDone()
  {
    if(GetCounter() == max)
    {
      return true;
    }
    else
      return false;
  }

  void Increment()
  {
    if(GetCounter() < max)Indexer::Increment();
  }

  string ToString()
  {
    ostringstream out;

    out << "[Counter: " << GetCounter() << " ,Max: " << max << "]";

    return out.str();
  }
  friend ostream& operator<<(ostream& out, BoundedIndex& obj)
  {
    out << obj.ToString();
    return out;
  }
};
#endif
