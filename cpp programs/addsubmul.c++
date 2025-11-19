#include <iostream>
using namespace std;
class test
{
	private:
		int x;
		int y;
public:
	void input()
	{
		cout <<"enter x and y:";
		cin>>x>>y;
	}
	void display()
	{
		cout<<x<< " "<< y<<endl;
	}
	void add(test n1 , test n2)
	{
		x=n1.x+n2.x;
		y=n1.y+n2.y;
	}
	test sub(test n)
	{
		test t;
		t.x=x-n.x;
		t.y=y-n.y;
		return t;
	}
	void mul(test n1, test n2)
	{
		x=n1.x*n2.x;
		y=n1.y*n2.y;
	}
};
	int main()
	{
		test t1,t2,t3;
		t1.input();
		t2.input();
		t1.display();
		t2.display();
		t3.add(t1,t2);
		cout<< "result:";
		t3.display();
		t3=t1.sub(t2);
		cout<<"result:";
		t3.display();
		t3.mul(t1,t2);
		cout<<"result:";
		t3.display();
	}

	
