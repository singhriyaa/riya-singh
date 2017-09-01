#include <iostream>

using namespace std;

int main()
  {
  float a,b;

    cout << "enter 1st no. :\n";
    cin>>a;
    cout<<"enter 2nd no. :\n";
    cin>>b;
    cout<<"the no. entered are \t"<<a<<"\tand\t"<<b<<"\n";
    float sum,sub,mul,div;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    cout<<"\nthe sum of given no. is = "<<sum;
    cout<<"\nthe subtraction of given no. is = "<<sub;
    cout<<"\nthe product of given no. is = "<<mul;
    cout<<"\nthe division of given no. is = "<<div;

    return 0;
}

