#include<iostream>
using namespace std;
class demo{
	int a[10],i,j,n,item,k;
	public:
	void get();
	void insert();
	void del();
	void dis();
};

void demo::get(){
	cout<<"\nEnter n";
	cin>>n;
	cout<<"\nEnter Array Element:";
	for(i=1;i<=n;i++)
	cin>>a[i];
}

void demo::insert(){
	cout<<"\nEnter Position:";
	cout<<"\nEnter Item:";
	cin>>item;
	j=n;
	while(j>=k){
		a[j+1]=a[j];
		j--;
	}
	a[k]=item;
	n++;
}

void demo::del(){
	cout<<"\nEnter Position:";
	cin>>k;
	j=k;
	while(j<=n-1){
		a[j]=a[j+1];
		j++;
	}
	n--;
}

void demo::dis(){
	cout<<"\n Elements are\n";
	for(i=1;i<=n;i++){
		cout<<a[i]<<"\t";
	}
}

int main(){

	demo d;
	int ch;
	d.get();
	cout<<"\n1. Insert 2.Del 3.Dis 4. Exit\n";
	while(ch!=4){
		cout<<"\n Enter choice";
		cin>>ch;
		switch(ch){
			case 1: d.insert(); break;
			case 2: d.del(); break;
			case 3: d.dis(); break;
			case 4: exit(0);
		}
	}
	return 0;
}
