#include <iostream>
#include <string>

using namespace std;

//Standard Template Library

//template function
template<typename T1, typename T2, typename T3>   // 자동 작업
T3 Begin(T1 A, T2 B)
{
	cout << A << endl;
	cout << B << endl;

	return (T3)(65);   // 말도 안되는 코드지만 이런 식으로도 가능하다.
}

template<typename T>
// 쓸 템플릿으로 바꿔서 제대로 인식하게 해야한다.
// 위에 몰아서 선언하면 컴파일러에서 제대로 선택하지 못한다.
// 템플릿은 정의할 때 딱 한 번만 쓸 수 있다.

T Sum(T A, T B)
{
	return A + B;
}


int main()
{
	cout << Sum<int>(1, 2) << endl;
	cout << Sum<char>((char)64, (char)1) << endl;   // 형변환 시켜주고 넣어줘야한다.
	cout << Sum<float>(2.0f, 3.4f) << endl;
	cout << Sum<string>(string("Hello "), string("World")) << endl;   // 문자열이라고 확실히 인식시키고 해줘야한다.
	cout << Sum<double>(323.0, 1011.111) << endl;   // 구분을 위해서 명시를 해주는 게 좋다.

	cout << Begin<int, float, char>(10, 20.5f) << endl;

	return 0;
}

// 원래는 Sum<int>(1,2)처럼 써주는게 맞지만 템플릿 덕분에 그렇지 않아도 된다.