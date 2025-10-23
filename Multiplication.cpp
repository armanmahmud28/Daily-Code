#include<iostream>

using namespace std;

void multiplecation(int n)

{
    for(int i=1;i<11;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }


}
int main()
{
int n=5;
multiplecation(n);
return 0;
}