#include<iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};
class Derived : public Base {
public:
	void f() { cout << "Derived::f() called"<< endl; }//�θ�Ŭ������ f() ������
};

int main() {
	Derived d, * pDer;
	pDer = &d;//��ü d�� ����Ű�� �Ļ� ������
	pDer->f();//Derived�� ��� f()�� ȣ��

	Base* pBase;//�θ�Ŭ������ ������ 
	pBase = pDer;//��ĳ����. �θ�Ŭ������ �����ͷ� �Ļ�Ŭ������ ��ü�� ����Ŵ.
	pBase->f();//Base�� ��� f()�� ȣ��
	
}