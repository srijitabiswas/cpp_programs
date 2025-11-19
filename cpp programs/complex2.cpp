#include<iostream>
using namespace std;
class complex
{
	float real;
	float img;
	public:
		complex(){
		real=0;
		img=0;
		}
		complex (float real,float imaginary)
		{
			this->real=real;
			this->img=imaginary;
		}
		void input()
		{
			cout<<"enter real and imaginary"<<endl;
			cin>>real>>img;
		}
		void display(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		complex operator+(complex c){
			complex tmp;
			tmp.real=real+c.real;
			tmp.img=img+c.img;
			return tmp;
		}
		complex operator-(complex c){
			complex tmp;
			tmp.real=real-c.real;
			tmp.img=img-c.img;
			return tmp;
		}
		complex operator*(complex c){
			complex tmp;
			tmp.real=(real*c.real)-(img*c.img);
			tmp.img=(real*c.img)+(img*c.real);
			return tmp;
		}
		complex operator/(complex c){
			float deno=(c.real*c.real+c.img*c.img);
			complex tmp;
			tmp.real=(real*c.real)-(img*c.img)/deno;
			tmp.img=(img*c.real)+(real*c.img)/deno;
			return tmp;
		}
	};
		int main(){
			complex c1,c2,c3;
			cout<<"enter the 1st complex number"<<endl;
			c1.input();
			cout<<"enter the 2nd complex number"<<endl;
			c2.input();
			cout<<"1.Addition\n2. subtraction\n3. multiplication\n4. division\n5. exit"<<endl;
			int ch;
			cout<<"enter your choice"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:
					c3=c1+c2;
					break;
				    case 2:
					    c3=c1-c2;
					    break;
					    case 3:
					    c3=c1*c2;
					    break;
					    case 4:
				      	c3=c1/c2;
				    	break;
					    case 5:
					   	cout<<"exit option"<<endl;
					   	break;
					   	default:
					   		cout<<"wrong choice"<<endl;
					   		break;
			}
			cout<<"result:"<<endl;
			c3.display();
			return 0;
		}

