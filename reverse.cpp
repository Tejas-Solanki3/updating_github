#include <iostream>
using namespace std;

int main()
{
    int x =789, reverse = 0, remainder;

    //cout<<"Enter a number:";
    //cin>>num;
    
     while(x!=0) {
        remainder = x% 10;
        reverse = reverse*10 + remainder;
        x/= 10;
     }
     cout<<"Reversed order: "<<reverse<<endl;

     return 0;
     
}