#ifndef ARCHIVE_H
#define ARCHIVE_H

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

namespace lab4
{
	class Node
	{
		private:
		int data;
		Node* link;

		public:
		Node() : Node(0,NULL) {}
		Node(int data,Node* link) : data(data), link(link) {}
		int GetData() const {return data;}
		Node* GetLink() const {return link;}
		void SetData(int value) {data = value;}
		void SetLink(Node* value) {link = value;}
	};

	class Stack
	{
		private:
		Node* top;

		public:
		Stack() : top(NULL) {}

		Stack(const Stack& obj) : Stack()
		{
			if(!(obj.IsEmpty()))
			{
				Node* tmp = new Node();
				Node* otmp = obj.top;

				top = tmp;

				while(otmp != NULL)
				{
					tmp->SetData(otmp->GetData());

					if(otmp->GetLink() != NULL)
						tmp->SetLink(new Node());

					otmp = otmp->GetLink();
					tmp = tmp->GetLink();
				}

				delete tmp;
				tmp = NULL;
			}
		}

		Stack& operator=(const Stack& obj)
		{
			if(this != &obj)
			{
				Node* tmp;

				while(top != NULL)
				{
					tmp = top;
					top = top->GetLink();
					delete tmp;
					tmp = NULL;
				}

				if(!(obj.IsEmpty()))
				{
					Node* otmp = obj.top;
					tmp = new Node();

					top = tmp;

					while(otmp != NULL)
					{
						tmp->SetData(otmp->GetData());

						if(otmp->GetLink() != NULL)
							tmp->SetLink(new Node());

						otmp = otmp->GetLink();
						tmp = tmp->GetLink();
					}

					delete tmp;
					tmp = NULL;
				}
			}

			return *this;
		}

		~Stack()
		{
			Node* tmp;

			while(top != NULL)
			{
				tmp = top;
				top = top->GetLink();
				delete tmp;
				tmp = NULL;
			}
		}

		bool IsEmpty() const
		{
			return this->top == NULL;
		}

		void Push(int item)
		{
			Node* tmp = new Node(item,this->top);
			this->top = tmp;
		}

		void Pop()
		{
			if(!IsEmpty())
			{
				Node* tmp = this->top;
				this->top = this->top->GetLink();
				delete tmp;
				tmp = NULL;
			}
		}

		int Top() const
		{
			if(IsEmpty())
				throw "Stack is empty";
			return this->top->GetData();
		}

		friend bool operator==(const Stack& lhs,const Stack& rhs)
		{
			Node* ltmp = lhs.top, *rtmp = rhs.top;

			while(ltmp != NULL && rtmp != NULL)
			{
				if(ltmp->GetData() != rtmp->GetData())
					return false;

				ltmp = ltmp->GetLink();
				rtmp = rtmp->GetLink();
			}

			return (ltmp == NULL && rtmp == NULL);
		}

		std::string ToString() const
		{
			std::stringstream out;

			Node* tmp = top;

			out << "[";

			while(tmp != NULL)
			{
				out << std::setw(3) << tmp->GetData();

				if(tmp->GetLink() != NULL)
					out << ",";

				tmp = tmp->GetLink();
			}

			out << "]";

			return out.str();
		}

		friend std::ostream& operator<<(std::ostream& out,const Stack& obj)
		{
			out << obj.ToString();
			return out;
		}
	};

	class Tower : protected Stack
	{
		public:
		Tower() {}

		Tower(const Tower& obj) : Stack(static_cast<const Stack&>(obj)) {}

		Tower& operator=(const Tower& obj)
		{
			if(this != &obj)
			{
				Stack::operator=(static_cast<const Stack&>(obj));
			}
			return *this;
		}

		~Tower() {}

		bool IsEmpty() const
		{
			return Stack::IsEmpty();
		}

		bool Add(int disk)
		{
			if(IsEmpty())
			{
				Push(disk);
				return true;
			}
			else
			{
				if(Top() > disk)
				{
					Push(disk);
					return true;
				}
				return false;
			}
		}

		int Remove()
		{
			if(IsEmpty())
				throw "Tower is empty";
			int top = Top();
			Pop();
			return top;
		}

		int Top() const
		{
			try
			{
				return Stack::Top();
			}
			catch(const char*)
			{
				throw "Tower is empty";
			}
		}

		friend bool operator==(const Tower& lhs,const Tower& rhs)
		{
			return (static_cast<const Stack&>(lhs) == static_cast<const Stack&>(rhs));
		}

		std::string ToString() const
		{
			return Stack::ToString();
		}

		friend std::ostream& operator<<(std::ostream& out,const Tower& obj)
		{
			out << obj.ToString();
			return out;
		}
	};

	class TowersOfHanoi
	{
		private:
		Tower towers[3];

		public:
		TowersOfHanoi()
		{
			for(int i = 3;i > 0;i -= 1)
			{
				towers[0].Add(i);
			}
		}
		TowersOfHanoi(const TowersOfHanoi& obj);
		TowersOfHanoi& operator=(const TowersOfHanoi& obj);
		~TowersOfHanoi() {}
		bool Move(int from,int to);
		bool Success() const;
		void Reset();

		friend bool operator==(const TowersOfHanoi& lhs,const TowersOfHanoi& rhs)
		{
			return ((lhs.towers[0] == rhs.towers[0]) &&
					(lhs.towers[1] == rhs.towers[1]) &&
					(lhs.towers[2] == rhs.towers[2]));
		}

		std::string ToString() const
		{
			std::stringstream out;

			for(int i = 0;i < 3;i += 1)
			{
				out << "Tower " << (i + 1) << ": " << towers[i] << "\n";
			}

			return out.str();
		}

		friend std::ostream& operator<<(std::ostream& out,const TowersOfHanoi& obj)
		{
			out << obj.ToString();
			return out;
		}

		static bool TowersOfHanoiTest();
	};
}

#endif
