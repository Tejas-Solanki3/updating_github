#include <iostream>

using namespace std;

void swap(int x, int y)
{
    int t=x;
    x = y;
    y = t;
    cout<<"After swapping in function x: "<<x <<",y: "<<y<<endl;

}

int main()
{
    int x =1,y=2;

    cout<<"Before swapping: ";
    cout<<"x: "<<x<<",y: "<<y<<endl;

    swap(x,y);

    cout<<"After swapping: ";
    cout<<"x: "<<x<<",y: "<<y<<endl;

    return 0;

}