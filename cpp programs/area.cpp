#include<iostream>
using namespace std;
class Area{
    private:
    int l,b;
    public:
    void GetLength()
    {
        cout<< "enter the length and breadth of a rectangle:"<< endl;
        cin>> l >> b;

    }
    int cal()
    {
        return (l*b);
    }
    void display(int tmp){
        cout<< "area:" << tmp;
    }
};
int main()
{
    Area a1,a2;
    int tmp;
    a1.GetLength();
    tmp=a1.cal();
    a1.display(tmp);
    tmp=a2.cal();
}