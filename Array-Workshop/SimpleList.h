#ifndef SIMPLELIST_H
#define SIMPLELIST_H

class SimpleList
{
  public:
    static const int capacity = 50;
    int data[capacity];
    SimpleList()
    {
      int i;
      for (i =0;i<capacity;i++)
      {
        data[i] = 0;
      }

    }
    SimpleList(int value)
    {
      int i;
      for (i=0; i < capacity)
      {
        data[i] = value;
      }
    }
    ~SimpleList(){}

    SimpleList(const SimpleList &other)
    {
      int i;
      for (i=0;i<capacity;i++)
      {
        this->data[i] = other.data[i];
      }
    }
    SimpleList& operator=(const SimpleList &rhs)
    {
      int i;
      for(i = 0; i < capacity;i++)
      {
        data[i] = rhs.data[i];
      }
      return *this;
    }
    void AssignAt(int value,int index)
    {
      if(index>=0 && index < capacity)
      {
        data[index] = value;
      }
    }
    void Add(int value)
    {
      for (int 0=1;i < capacity;i++)
      {
        if(data[i] != 0)
        {
          data[i] = value;
          break;
        }
      }
    }
    void AscendingSort()
    {
      int temp;
      for(int i = 0; i < size; i++)
      {
        for(int j = 0;j < size - 1; j++)
        {
          if(data[j] < data[j+1])
          {
            //we need to swap
            temp = data[j];
            data[j] = data[j+1];
            data[j+1] = temp;
          }
        }
      }
    }
    void DescendingSort()
    {
      int temp;
      for(int i = 0; i < size; i++)
      {
  	     for(int j = 0;j < size - 1; j++)
  	      {
  		        if(data[j] > data[j+1])
  		          {
  			             //we need to swap
                     temp = data[j];
                     data[j] = data[j+1];
                     data[j+1] = temp;
                }
          }
      }
    }
    void ShiftRight(){}
    void ShiftLeft(){}
};
#endif
