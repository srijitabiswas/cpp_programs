#include<iostream>
using namespace std;
class Distance{
	int feet, inches;
	public:
	Distance(){
		int feet=0;
		int inches=0;
	}
	Distance(int f, int i)
	{
		feet=f;
		inches=i;
	}
	void input()
	{
		cout<<"enter the feet and inches"<<endl;
		cin>>feet>>inches;
	}
	void display()
	{
		cout<<"feet="<<feet<<"inches="<<inches<<endl;
	}
	 Distance addDistance(Distance d){
	 	Distance tmp;
	 	tmp.feet=feet+d.feet;
	 	tmp.inches=inches+d.inches;
	 	if(tmp.inches>=12)
	 	{
	 		tmp.feet+=tmp.inches/12;
	 		tmp.inches %= 12;
		 }
	 	return tmp;
	 }
	 Distance addDistance(int extrafeet){
	 return Distance(feet+extrafeet,inches);
}
};
int main(){
	Distance d1,d2,d3,d4;
	cout<<"enter the first distance"<<endl;
	d1.input();
	cout<<"enter the second distance"<<endl;
	d2.input();
	d3=d1.addDistance(d2);
	cout<<"adding two distance"<<endl;
	d3.display();
	d4=d1.addDistance(2);
	cout<<"adding two feet to the first distance"<<endl;
	d4.display();
	return 0;
}
