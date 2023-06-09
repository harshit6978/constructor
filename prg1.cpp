#include<iostream>
using namespace std;

class comp{	
	
	public:
		int id,qua,year,import,exports;
		char name[20],ceo[20];
	
	public:
		comp(int id,int qua,int import,char name[],int year,int exports,char ceo[]){
			cout<<"enter id:"<<id<<endl;
			cout<<"enter compony name:"<<name<<endl;
			cout<<"enter a staff quantity:"<<qua<<endl;
			cout<<"enter a import diamonds:"<<import<<endl;
			cout<<"enter a revanue:"<<year<<endl;
			cout<<"enter a export diamonds:"<<exports<<endl;
			cout<<"enter a compony ceo name:"<<ceo<<endl;
		}
};

int main(){
	
	comp obj(1,3,8,"name",2015,15,"tim cook");


	obj.getter();
	
	
	return 0;
}
