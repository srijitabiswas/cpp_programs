#include<iostream>
using namespace std;
int main()
{
    int n, rnum=0, c;
    cout << "enter the number:" << endl;
    cin >> n;
    while(n!=0){
        c=n%10;
        rnum=rnum*10+c;
        n=n/10;
    }
    cout << "reversed number=" << rnum;
}