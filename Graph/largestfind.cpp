#include<iostream>
#include<vector>
using namespace std;

int findsecondlargest(vector<int> &v)
{
    int n=v.size();
    int largest=-1,secondlargest=-1,thirdlargest=-1;

    for(int i=0;i<n;i++)
    {
        if(v[i] >largest)
        {
            largest=v[i];
        }
        
    }
for(int i=0;i<n;i++)
    {
        if(v[i]> secondlargest && v[i]!=largest)
        {
            secondlargest=v[i];
        }
        
    }
for(int i=0;i<n;i++)
    {
        if(v[i]> thirdlargest && v[i]!=largest && v[i]!=secondlargest  )
        {
            thirdlargest=v[i];
        }
    }

    
return thirdlargest;

}

int main()
{
    vector<int> v = {10,12,13,15,16,20};


//cout<<"Hello World";

cout<<findsecondlargest(v);
    return 0;
}