#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--";
	}
};
class Circle :public Shape {
public:
	int x;
	virtual void draw() {
		Shape::draw();//�⺻ Ŭ������ draw()ȣ��
		cout << "Circle" << endl;
	}
};

int main() {
	Circle circle;
	Shape* pShape = &circle;//��ĳ����
	
	pShape->draw();//�������ε� �߻�. �Ļ� ��ü�� ����Ű�� �⺻�����ʹ� �Ļ�Ŭ������ draw()�� ȣ���Ѵ�. �Ļ�Ŭ������ draw()�� �⺻Ŭ������ draw()�� ȣ���ϱ� ������, 1�������� �⺻ draw()�� ȣ���� �� Circle�� ���
	pShape->Shape::draw();//�������ε� �߻�. �⺻ Ŭ������ draw()ȣ��.
}