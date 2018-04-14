#include<iostream>
#include<string.h>
using namespace std;
struct data{
	string p;
	int t;
}a[100],temp;
struct datta{
	int t;
}x[100];
int main(){
	int b,fcfsw=0,fcfsc=0,quant,ind=0;
	cout<<"Enter the quantum value:";cin>>quant;
	cout<<"number of entries:";cin>>b;
	for(int i=0;i<b;i++){
		cin>>a[i].p;
		cin>>a[i].t;
	}
heading:
	for(int j=0;j<b;j++){
		if(a[j].t>quant){
			x[ind++].t=quant;
			a[j].t-=quant;
		}
		else if(a[j].t<quant&&a[j].t>0){
			x[ind++].t=a[j].t;
			a[j].t=0;
		}
		
	}
	for(int k=0;k<b;k++){
		if(a[k].t!=0){
			goto heading;
		}
	}
	for(int i=0;i<ind;i++){
		if(i==0){
			fcfsw=0;
			cout<<fcfsw;
		}
		else fcfsw+=x[i-1].t;
		fcfsc+=x[i].t;
		cout<<"--"<<fcfsc;
	}
	cout<<"\nround robin\n aveage waiting time"<<(float)fcfsw/ind<<"\n average completing time"<<(float)fcfsc/ind;
	return 0;
}
