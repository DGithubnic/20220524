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

	T Database[10];

	int Cursor1 = -1;
	int Cursor2 = 0;

	void Push(T A)
	{
		Database[++Cursor1] = A;
	}

	void Pop()
	{
		Cursor2++;
	}

	T Bottom()
	{
		return Database[Cursor2];
	}
};


int main()
{
	Queue<float> IntQueue;

	for (int i = 1; i <= 10; ++i)
	{
		IntQueue.Push(i * 1.1f);
	}

	for (int i = 1; i <= 10; ++i)
	{
		cout << IntQueue.Bottom() << ", ";
		IntQueue.Pop();
	}


	return 0;
}