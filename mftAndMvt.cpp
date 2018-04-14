#include<iostream>
using namespace std;
int main(){
	/*cout<<"------Multiprogramming Variable Tasks----------\n"
	cout<<"Enter the memory size";
	int a;cin>>a;
	int b;
	char ch='y';
	while(ch=='y'){
		cout<<"\nEnter processor size:";
		cin>>b;
		a-=b;
		cout<<"Remaining memory "<<a;
		cout<<"\nDo you need extra processor y/n";
		cin>>ch;
	}
	if(a>0){
		cout<<"External fragmentation "<<a;
	}
	else{
		cout<<"External fragmentation 0"; 
	}*/
	cout<<"\n------Multiprogramming Fixed Tasks----------\n";
	cout<<"Enter the memory size";
	int m;cin>>m;
	cout<<"Enter the number of processors";
	int p;cin>>p;
	cout<<"enter memory size of processor";
	int t;cin>>t;
	int x;
	int sum=0;
	for(int i=0;i<p;i++){
		cout<<"\nP"<<i+1<<":";
		cin>>x;
		m=m-x;
		if(m<0){
			cout<<"process suspend\n";
			return 0;
		}
		cout<<"Internal Fragmentation"<<t-x;
		sum+=(t-x);
	}
	cout<<"\nTotal External Fragmentation:"<<sum;

}
