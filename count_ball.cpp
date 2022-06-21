#include <iostream>
using namespace std;

int main(){
	float phi = 3.14; //declare the value of phi
	int r,t_ball; //declare variable r and t_ball as integer
	
	cout<<"============================================="<<endl;
 	cout<<"				        Calculate the Area				    "<<endl;			   
	cout<<"					        of the Ball					        "<<endl;				  										   
	cout<<"============================================="<<endl;
	cout<<"Input Value r : "; //request user to input r value
	cin>>r;
	
	t_ball = 4*phi*r*r; //formula
	
	cout<<"Total "<<t_ball;//value total
}
