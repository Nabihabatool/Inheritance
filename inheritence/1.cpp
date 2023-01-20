#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class parent{
	
		protected:
	          int a=10;
	      
	    };
class child:protected parent{
	public:
	         	void getdata(){
	         		cout<<a;
				 }
};     


int main() {
          child c1;
          c1.getdata();
	return 0;
}
