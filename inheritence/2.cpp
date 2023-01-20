#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class iphone13{
	protected:
		
	int weight;
	double camera;
	double display;
	
	public:
		iphone13(){
			weight = 174;
			camera = 12 ;
            display = 6.1;
           cout<<"Deafault Constructor"<<endl;
		}
	iphone13(int Weight=174,int Camera=12,int Display=6.1){
		
		     cout<<Weight<<endl;
             cout<<Camera<<endl;
              cout<<Display<<endl;
	}
	~iphone13(){
		cout<<"Destructor Called"<<endl;
	}
};
class iphone13pro:public iphone13{
	public:
		iphone13pro(){
			weight = 204;
			camera = 12;
            display = 6.1;
		}
	iphone13pro(int Weight=204,int Camera=12,int Display=6.1){
		cout<<Weight<<endl;
		cout<<Camera<<endl;
        cout<<Display<<endl;
	}
	~iphone13pro(){
		cout<<"Default Constructor"<<endl;
	}
};
class iphone13promax:public iphone13pro{
	public:
		iphone13promax(){
			weight= 240;
			camera = 12; 
			display= 6.7;
		}
	iphone13promax(int Weight=240,int Camera=12,int Display=6.7){
		cout<<Weight<<endl;
		cout<<Wamera<<endl;
        cout<<Display<<endl;
	}
	~iphone13promax(){
		cout<<"Default Constructor"<<endl;
	}
};
int main() {
	iphone13promax a;
	iphone13pro b;
	
	return 0;
}
