#include<iostream>
#include<climits>
#include<iomanip>
using namespace std;

void print(int s[][7],int i,int j)
{
	if(i==j)
		cout<<"A"<<i<<" ";
	else
	{
		cout<<"( ";
		print(s,i,s[i][j]);
		print(s,s[i][j]+1,j);
		cout<<" ) ";
	}
}

int main()
{
	//Sample input
	int n=6;
	int p[]={30,35,15,5,10,20,25};

	int m[7][7];
	int s[7][7];

	int min;
	int j;

	cout<<"##Subproblems of Size - "<<1<<endl;
	cout<<"Number of Subproblems of Size 1 is "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		m[i][i]=0;
		cout<<"Number of Multiplications for chain "<<i<<" - "<<i<<" is: "<<m[i][i]<<endl;
	}

	for(int l=2;l<=n;l++)
	{
		cout<<"\n##Subproblems of Size - "<<l<<endl;
		cout<<"Number of Subproblems of Size "<<l<<" is "<<n-l+1<<endl;
		for(int i=1;i<=n-l+1;i++)
		{
			
			j=i+l-1;
			m[i][j]=INT_MAX;
			for(int k=i;k<=j-1;k++)
			{
				min=m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
				if(min<m[i][j])
				{
					m[i][j]=min;
					s[i][j]=k;
				}

			}
			cout<<"Number of Multiplications for chain "<<i<<" - "<<j<<" is: "<<m[i][j]<<endl;
		}
	}


// Matrix M storing partition points for optimal parenthesization
	cout<<"\nMatrix M"<<endl;
	for(int j=n;j>=1;j--)
	{
		for(int i=1;i<=n;i++)
		{	
			if(i<=j)
			cout<<setw(10)<<m[i][j];	
		}
		cout<<endl;
	}

	cout<<endl;


//Matrix s storing partition points for optimal parenthesization
	cout<<"Matrix s"<<endl;
	for(int j=n;j>=2;j--)
	{

		for(int i=1;i<=n-1;i++)
		{	
			if(i<j)
			cout<<setw(10)<<s[i][j];	
		}
		cout<<endl;
	}

//Printing actual solution
	cout<<"Solution:"<<endl;
	print(s,1,6);
	cout<<endl;


	return 0;
}
