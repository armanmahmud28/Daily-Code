//Adjacency List Representation

#include<iostream>
#include<vector>

using namespace std;
void addEdge(vector<vector<int>> &adj,int i,int j)
{
    adj[i].push_back(j);
    adj[j].push_back(i);

    
}
void displayList(vector<vector<int>> &adj)
{
    int V = adj.size();
    for(int i=0;i<V;i++)
    {
        cout<<i<<": ";
        for (int j : adj[i]) {
            cout << j << " "; 
        }
        cout<<endl;
    } 
}

int main()
{
int V =4;
vector<vector<int>> adj (V);

  addEdge(adj,0,1);
  addEdge(adj,0,2);
  addEdge(adj,1,2);
  addEdge(adj,2,3);
  
  cout<<"Adjacency List Representionation: "<<endl;
  displayList(adj);
}