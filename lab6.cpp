#include <iostream>

using namespace std;

int main()
  {
  float r;

    cout << "enter radius of rectangle :\n";
    cin>>r;
    float d,c,a;
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    cout<<"\ndiameter of circle is = "<<d;
    cout<<"\ncircumference of circle is = "<<c;
    cout<<"\nthe area of circle is = "<<a;

    return 0;
}

