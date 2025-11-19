#include<iostream>
using namespace std;
int main()
{
    int n, num,c, r=0;
    cout << "enter a three digit integer:" << endl;
    cin >> n;
    num=n;
    while(num>0){
        c=num%10;
        r += c*c*c;
        num/=10;
    }
    if(r==n)
    cout<< n <<"is armstrong number";
    else
    cout<< n <<"is not armstrong number:";
}