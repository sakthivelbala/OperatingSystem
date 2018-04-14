#include<iostream>
#include<string.h>
using namespace std;
struct data{
	string p;
	int t,prp;
}a[100],temp;
int main(){
	int b,fcfsw=0,fcfsc=0;//sifw[100],sifc[100],priorw[100],priotc[100];
	cout<<"number of entries:";cin>>b;
	for(int i=0;i<b;i++){
		if(i==0){
			fcfsw=0;
		}
		else fcfsw+=a[i-1].t;
		cin>>a[i].p;
		cin>>a[i].t;
		cin>>a[i].prp;
		fcfsc+=a[i].t;
	}
	
	cout<<"fcfs\n aveage waiting time"<<(float)fcfsw/b<<"\n average completing time"<<(float)fcfsc/b;
	fcfsw=0;fcfsc=0;
	for(int i=0;i<b;i++){
		for(int j=0;j<b;j++){
			if(a[i].t<a[j].t){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<b;i++){
		if(i==0){
			fcfsw=0;
		}
		else fcfsw+=a[i-1].t;
		fcfsc+=a[i].t;
	}
	cout<<"\nsjb\n aveage waiting time"<<(float)fcfsw/b<<"\n average completing time"<<(float)fcfsc/b;
	fcfsw=0;fcfsc=0;
	for(int i=0;i<b;i++){
		for(int j=0;j<b;j++){
			if(a[i].prp<a[j].prp){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<b;i++){
		if(i==0){
			fcfsw=0;
		}
		else fcfsw+=a[i-1].t;
		fcfsc+=a[i].t;
	}
	cout<<"\npriority\n aveage waiting time"<<(float)fcfsw/b<<"\n average completing time"<<(float)fcfsc/b;
	return 0;
}
