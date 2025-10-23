#include<iostream>
using namespace std;
auto sumofall()
{int sum =0;
    for(int i=1;i<=5;i++)
    {
        sum = sum+i;
    }
    return sum;
}
int main()
{
cout<<sumofall();
return 0;
}