#include <iostream>
#include <cmath>

using namespace std;


double f(double x) {
    return pow(x+10,0.25);
}



int main() {
    double x,xnew,es=0.05,temp,error;
    int iteration=0;
    cout << "Enter initial guess: ";
    cin >>x;
    
    cout << endl;
   if(f(x)==0){
   	cout<<x<<"is the required root."<<endl;
   }
   else{
   	do{
   		temp=x;
   		xnew=f(x);
		x=xnew;
		error=abs((xnew-temp)/xnew);
   		iteration ++;
	   }
	   while(error>es);
   }
   
    
    cout << "the required solution is " << xnew << endl;
    cout << "the functional value at"<<xnew<<"is " << f(xnew)<< endl;
    cout << "Number of iterations: " << iteration<< endl;
    
    return 0;
}
    
    
    
