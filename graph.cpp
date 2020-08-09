// Representation of Graph Using  C++ STL  {ADJANCEY LINKED List}
#include<bits/stdc++.h>
using namespace std;

// Utility Function to Add edge in Graph

// (v , u) ->  egde between vertices , w = weight  , bid = bidorectional (if true) / Unidirectional (if false)


void addEdge( map< int, list < pair<int,int> > > &adj, int v ,int u , int w, bool bid = true)
{
   
   adj[v].push_back(make_pair(u,w));
   
   if(bid)
   adj[u].push_back(make_pair(v,w));

}

// Print function which prints all connected edges with their weight for each vertices 

void print( map< int, list < pair<int ,int> > > &adj)
{
  for(auto x: adj)
  
  {
     cout << x.first << "  -->> " << endl;    
     
     for(auto i : x.second)
     {
         cout << i.first <<"  weight:" << i.second << endl;
     }
     cout << endl;

  }

}
/*** 
         12
    1---------4          
    |\        | \  10
 14 |  \ 11   |  \  
    |    \   7|   5      
    |       \ | / 4
    2---------3 
        17
***/
int main()
{
 int  V = 5;  // No. of Vertices 

 map<int,list<pair<int ,int>>>adj; 

 addEdge(adj,1,4,12,true);
 addEdge(adj,1,2,14,true);
 addEdge(adj,2,3,17,true);
 addEdge(adj,3,4,7,true);
 addEdge(adj,4,5,10,true);
 addEdge(adj,3,5,4,true);
 addEdge(adj,1,3,11,true);

 print(adj);

 return 0;

}
