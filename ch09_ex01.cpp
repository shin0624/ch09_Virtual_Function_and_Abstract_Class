#include<iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};
class Derived : public Base {
public:
	void f() { cout << "Derived::f() called"<< endl; }//부모클래스의 f() 재정의
};

int main() {
	Derived d, * pDer;
	pDer = &d;//객체 d를 가리키는 파생 포인터
	pDer->f();//Derived의 멤버 f()를 호출

	Base* pBase;//부모클래스의 포인터 
	pBase = pDer;//업캐스팅. 부모클래스의 포인터로 파생클래스의 객체를 가리킴.
	pBase->f();//Base의 멤버 f()를 호출
	
}