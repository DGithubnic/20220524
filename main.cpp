#include <iostream>
#include <string>

using namespace std;

//Standard Template Library

//template function
template<typename T1, typename T2, typename T3>   // �ڵ� �۾�
T3 Begin(T1 A, T2 B)
{
	cout << A << endl;
	cout << B << endl;

	return (T3)(65);   // ���� �ȵǴ� �ڵ����� �̷� �����ε� �����ϴ�.
}

template<typename T>
// �� ���ø����� �ٲ㼭 ����� �ν��ϰ� �ؾ��Ѵ�.
// ���� ���Ƽ� �����ϸ� �����Ϸ����� ����� �������� ���Ѵ�.
// ���ø��� ������ �� �� �� ���� �� �� �ִ�.

T Sum(T A, T B)
{
	return A + B;
}


int main()
{
	cout << Sum<int>(1, 2) << endl;
	cout << Sum<char>((char)64, (char)1) << endl;   // ����ȯ �����ְ� �־�����Ѵ�.
	cout << Sum<float>(2.0f, 3.4f) << endl;
	cout << Sum<string>(string("Hello "), string("World")) << endl;   // ���ڿ��̶�� Ȯ���� �νĽ�Ű�� ������Ѵ�.
	cout << Sum<double>(323.0, 1011.111) << endl;   // ������ ���ؼ� ��ø� ���ִ� �� ����.

	cout << Begin<int, float, char>(10, 20.5f) << endl;

	return 0;
}

// ������ Sum<int>(1,2)ó�� ���ִ°� ������ ���ø� ���п� �׷��� �ʾƵ� �ȴ�.