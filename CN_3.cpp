#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int nf,N;
	int no_tr=0;
	srand(time(NULL));
	cout<<"Enter no. of frames: ";
	cin>>nf;
	cout<<"\nEnter the Window size: ";
	cin>>N;
	cout<<endl<<endl;
	int i=1, j;
	while(i<=nf)
	{
    	int x=0;
    	for(j=i;j<i+N && j<=nf;j++,no_tr++)
            cout<<"Sent frame "<<j<<endl;
        cout<<endl;
		for(j=i;j<i+N && j<=nf;j++)
    	{
    	    int flag = rand() % 2;
			if(!flag)
            {
                cout<<"Acknowledgment for Frame "<<j<<endl<<endl;
                x++;
            }
    	    else
            {
                cout<<"Frame "<<j<<" NOT Received\n";
                cout<<"Retransmitting Window\n";
                break;
            }
    	}
    	cout<<endl;
    	i += x;
	}
    cout<<"Total number of transmissions: "<<no_tr<<endl;
	return 0;
}
