#include<iostream>
#include<string.h>

using namespace std;

class Hotel{
	
private:
	int id;
	char name[100];
	char type[100];
	int rating;
	char location[100];
	int ey;
	int staff;
	int room;

public:
	void setdata(){
		
		cout<<"Enter hotel ID: ";
		cin>>id;
		cout<<"Enter hotel name: ";
		cin>>name;
		cout<<"Enter hotel type: ";
		cin>>type;
		cout<<"Enter hotel rating: ";
		cin>>rating;
		cout<<"Enter hotel location: ";
		cin>>location;
		cout<<"Enter hotel establish year: ";
		cin>>ey;
		cout<<"Enter hotel staff quantity: ";
		cin>>staff;
		cout<<"Enter hotel room quantity: ";
		cin>>room;
	}
	void getdata(){
		
		cout<<"hotel ID: "<<id<<endl;
		cout<<"hotel name: "<<name<<endl;
		cout<<"hotel type: "<<type<<endl;
		cout<<"hotel rating: "<<rating<<endl;
		cout<<"hotel loaction: "<<location<<endl;
		cout<<"hotel establish year: "<<ey<<endl;
		cout<<"hotel staff quantity: "<<staff<<endl;
		cout<<"hotel room quantity: "<<room<<endl;
		
	}
};

int main(){
	
	
	int i,n;
	Hotel h[n];
	
	cout<<"Enter hotel numbers"<<endl;
	cin>>n;
	for(i=0; i<n; i++){
		
		h[i].setdata();
		h[i].getdata();
		
	}
	return 0;
}

