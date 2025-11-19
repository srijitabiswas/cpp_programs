#include<iostream>
using namespace std;
class complex
{
    private:
    int real , img;
    public:
    void input()
    {
        cout<<"enter the real and imaginary number:";
        cin>>real>>img;
    }
    void display()
    {
        cout<<"("<<real<<"+ i ("<<img<<"))"<<endl;
    }
    complex add(complex n)
    {
        complex c;
        c.real=real+n.real;
        c.img=img+n.img;
        return c;
    }
    complex sub(complex n)
    {
        complex c;
        c.real=real-n.real;
        c.img=img-n.img;
        return c;
    }
    complex mul(complex n)
    {
        complex c;
        c.real=(real*n.real)-(img*n.img);
        c.img=(real*n.img)+(n.real*img);
        return c;
    }
};
int main()
	{
		complex c1,c2,c3;
        while(1)
        {
            int choice;
            cout<<"\n1.Addition\n2.subtraction\n3.multiplication\n4.exit"<<endl;
            cout<<"Enter your choice:";
            cin>>choice;
            if(choice >=1 && choice<=3)
            {
                cout<<"\nEnter 1st complex number:"<<endl;
                c1.input();
                cout<<"\nEnter 2nd complex number:"<<endl;
                c2.input();
            }
            switch(choice)
            {
                case 1:c3=c1.add(c2);
		               cout<< "result of addition:";
		               c3.display();
                       break;
                case 2:c3=c1.sub(c2);
		               cout<<"result of subtraction:";
		               c3.display();
                       break;
                case 3:c3=c1.mul(c2);
		               cout<<"result of multiplication:";
		               c3.display();
                       break;
                 case 4:exit(0);
                 default: cout<<"wrong choice....";       
            }
        }
		
    }    

	

