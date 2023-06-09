#include<iostream>
using namespace std;

class cafe{	
	
	public:
		int id,year,rating,qua;
		char name[20],location[20],type[20];
	
	public:
		cafe(){
			cout<<"enter id: 1"<<endl;
			cout<<"enter a cafe name: boho"<<endl;
				
			cout<<"enter a cafe type: open"<<endl;
				
			cout<<"enter a cafe rating: 4"<<endl;
		
			cout<<"enter a cafe location: surat"<<endl;
		
			cout<<"enter a establish year: 2001"<<endl;
			
			cout<<"enter a staff quantity: 10"<<endl;
		}
			
			

};

int main(){
	
	cafe obj;

	
	
	return 0;
}
