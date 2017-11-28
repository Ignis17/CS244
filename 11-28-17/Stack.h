#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <sstream>
#include <string>

class Stack
{
private:
  int data[100];
  int top;
public:
  Stack():top(0)
  {
    for (int i =0; i < 100; i++)
    {
      data[i]=0;
    }
  }
  Stack(const Stack& obj)
  {
    top = obj.top;
    for(int i = 0; i < 100; i++)
    {
      data[i] = obj.data[i];
    }
  }
  Stack& operator =(const Stack& obj)
  {
    if(this != &obj)
    {
      top = obj.top;
      for (int i = 0; i < 100; i++)
      {
        data[i] = obj.data[i];
      }
    }
    return *this;
  }

  ~Stack(){}

  bool IsEmpty() const
  {
    return top == 0;
  }
  bool IsFull() const
  {
    return top == 100;
  }
  void Push(int item)
  {
    if(IsFull() == false)
    {
      data[top] = item;
      top++;
    }
  }
  void Pop()
  {
    if(!IsEmpty())
    {
      top--;
    }
  }
  int Top() const
  {
    if(IsEmpty())
    {
      throw "Stack is empty";
    }
    else
      return data[top-1];
  }
  int& operator[](int index)
  {
    if(index >= 0 && index < 100)
    {
      return data[index];
    }
    else
    {
      throw "Out of bound";
    }
  }
  const int& operator[](int index) const
  {
    if(index >= 0 && index < 100)
    {
      return data[index];
    }
    else
    {
      throw "Out of bound";
    }
  }
};
#endif
