#include <iostream>
#include <bits/stdc++.h>
#include <list>
using namespace std;
//
void addedge(list<int>,int ,int );
void DFS(list<int>*,int);

//	Make a pair between vertex x and vertex y 
void addedge(list<int> *ls,int x,int y)
{
	ls[x].push_back(y);
	ls[y].push_back(x);
	cout<<"Print of graph"<<endl;
	cout<<x<<"===========>"<<y<<endl;
	return;
} 

//Depth First Search of a Graph
void DFS(list<int>*ls,int num,int x)
{
	bool *visit= new bool[num];
	for(int i=0;i<num;i++)
	{
		visit[i]=false;
	}
	stack<int> st;
	st.push(x);
	while(!st.empty())
	{
		int s=st.top();
		st.pop();
		if(!visit[s])
		{
			cout<<s<< " ";
			visit[s]=true;
			list<int>::iterator it;
			for(it=ls[s].begin();it!=ls[s].end();it++)
			{
				st.push(*it);
			}
		}
	}
}

// Print the Adjacency List
void print(list<int> *ls,int num)
{
	list<int>::iterator it;
	for(int i=0;i<6;i++){
		cout<<i<<"-->";
		for(it=ls[i].begin();it!=ls[i].end();it++)
		{
			cout<<*it<<"-->";
		}
		cout<<endl;
	}
}

int main()
{
	int num=6;
	
	cout<<"Enter the no. of vertices : 6\n";
	
	list<int> *ls=new list<int>[num];
	
	addedge(ls,0,2);
	addedge(ls,2,3);
	addedge(ls,3,4);
	addedge(ls,4,5);
	addedge(ls,2,5);
	addedge(ls,1,4);
	addedge(ls,3,0);
	
	cout<<"Print of adjacency matrix:"<<endl;
	
	print(ls,6);
	
	cout<<"DFS"<<endl;
	
	DFS(ls,6,0);

	return 0;
}
