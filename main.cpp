#include <iostream>
#include <cstdint>
#include <math.h>
using namespace std;
int main()
{
float x,y,x1;
    cin>>x;
    do{
        x1=x;
        y =(1/3)*(1/pow(pow((x+1),2),1/3));
        x=y;
        cout<<x;
            }while((x-x1)>0.03);
            cout<<x;
}
