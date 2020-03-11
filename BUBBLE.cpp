#include<iostream>
 
using namespace std;
 
int main()
{
	int a[100],n,i,j,temp;
	cout<<"PLEASE ENETER SIZE OF ARRAY: ";
	cin>>n;
	cout<<"ARRAY ELEMENTS: "; 
	
	for(i=0;i<n;++i)
		cin>>a[i];
		
	for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
	
	cout<<"BUBBLE SORTED LIST:";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];
		
	return 0;
}  
