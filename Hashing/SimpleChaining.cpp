#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Hash{
int bucketcount;
vector<vector<int>> table;

public:

Hash(int bucket)
{
    bucketcount=bucket;
    table.resize(bucketcount);
}

void insert(int key)
{
    int index = getHashIndex(key);
    table[index].push_back(key);

}

void remove(int key)
{
    int index = getHashIndex(key);

    auto u = find(table[index].begin(),table[index].end(),key);

    if(u!=table[index].end())
    {
        table[index].erase(u);
    }
}

void display()
{
    for(int i =0;i<bucketcount;i++){
        cout<< i;
        for(int key: table[i]){
            cout<<" --> "<<key;
        }
        cout<<endl;
    }
}
private:
int getHashIndex(int key)
{
    return key % bucketcount;
}
    
};


int main()
{

vector<int> keys ={10,11,17,19,20,22,29};
Hash hashTable(10);
for(int key : keys)
{
    hashTable.insert(key);
}


hashTable.display();
return 0;

}