# include<iostream>
using namespace std;
int main()
{
	int num;
    cout<<"Enter the nos of rows and column "<<endl;
    cin>>num;
	for(int i=0;i<num;i++)
	{
	    for(int j=0;j<num-1;j++)
	    {
		if(i+j>num-1)
		  cout<<"*";
		else
		  cout<<" ";
	     }
	     cout<<endl;
	}
	return 0;
}
/*
OUTPUT
    
   *
  **
 ***

 */