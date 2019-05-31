#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
 
	cout <<"Insertion Implenmentation in C++ By Abid "<<endl;
	sleep(2);
	int n,item,k,j;
	int la[] = {1,2,12,3,4,6,7,8,9};
        n = la[7] - la[0]+1 ;
	j = n;	
	cout <<"Checking OVERFLOW Condtion";
	cout<<"..."<<endl;
	int ub = la[7];
	if (ub== n -1 )
	{
		cout <<"OVERFLOW OCCUR"<<endl;

	}
	else {
		cout <<"OVERFLOW not Occured"<<endl;
	}
	cout <<"Total Items Before Insert new Element : "<<n<<endl;
	cout <<"Array Before Insert New Element: "<<endl;
	for(int i=0;i<=n;i++)
	{
	cout <<la[i]<<endl;		
	}
	cout <<endl;	
        cout <<"Your Element: ";
	cin >>item;
	cout <<"Where To Insert: "; 
	cin >> k; 
	cout <<"Adding New Element to the Array "<<endl;
	while (j >= k)
	{
          la[j+1]=la[j]; 
          j = j-1;
	}
        la[k] = item;
	n = n+1;
        cout <<"\nTOTAL NOW  After Insert New Element:: "<<n<<endl;
	cout <<"\nArray Now After Insert New Element::: "<<endl;
	for(int l=0; l<=n;++l)
	{
		cout <<""<<la[l]<<endl;
	}
        cout <<endl;
	return 0;
}
