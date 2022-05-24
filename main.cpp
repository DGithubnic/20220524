#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

//#####						3,3
//#  ##						3,2	
//# # #						3,1
//#  P#						2,1
//#####						1,1

template<typename T>
class Queue
{
public:
	Queue() {}
	virtual ~Queue() {}

	T* Database = new T[10];

	int Cursor1 = -1;
	int Cursor2 = -1;

	void Queuef(T A)
	{
		Database[++Cursor1] = A;
	}

	void Reset()
	{
		for (int i = 0; i <= 8; ++i)
		{
			int Temp = Database[i];
			Database[i] = Database[i + 1];
			Database[i + 1] = Temp;
		}
	}

	T DeQueuef()
	{
		return Database[0];
	}
};


int main()
{

	Queue<int> IntQueue;

	for (int i = 1; i <= 10; ++i)
	{
		IntQueue.Queuef(i);
	}

	for (int i = 1; i <= 10; ++i)
	{
		cout << IntQueue.DeQueuef() << ", ";
		IntQueue.Reset();
	}


	return 0;
}