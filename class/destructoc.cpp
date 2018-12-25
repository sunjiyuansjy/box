#include<iostream>
#include<malloc.h>
#include<string.h>

using namespace std;
#if 0
//析构函数是用于在对象生命周期结束时，清理资源的
typedef int DataType;
class SeqList
{

	public:
		SeqList(int capacity = 10)
		{

			_pData =(DataType*)malloc(capacity * sizeof(DataType));
			assert(_pData);
			_size = 0;
			_capacity = capacity;
		}
	//析构函数的用法
		~SeqList()
		{

			if(_pData)
			{

				free(_pData);  // 释放堆上的空间
				_pData = NULL;  // 将指针置为空
				_capacity = 0;
				_size = 0;
			}
		}	
private:
		int* _pData;
		size_t _size;
		size_t _capacity;
};
#endif

class String
{

	public:
		String(const char* str = "jack")
		{

			_str =(char*)malloc(strlen(str) + 1);
			strcpy(_str, str);
		}
		~String()
		{

			cout << "~String()" << endl;
			free(_str);
		}
	private:
		char* _str;
};
class Person
{

	private:
		String _name;
		int  _age;
};
int main()
{

	Person p;
	return 0;
}
