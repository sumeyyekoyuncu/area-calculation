#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string shape;
	int size,size2,h;
	double area;
	cout<<"what is your shape?\t";
	cout<<"(triangle,square,rectangle)\n";
	cin>>shape;
	if(shape=="square"){
		cout<<"what is the size of your squares edge?\n";
		cin>>size;
		area=size*size;
		cout<<"area: "<<area<<endl;
	}
	 else if (shape=="rectangle"){
		cout<<"what is the size of your rectangles edges?\n";
		cin>>size>>size2;
		area=size*size2;
		cout<<"area: "<<area<<endl;
	}
	else {
		cout<<"what is your triangles height?\n";
		cin>>h;
		cout<<"what is your triangles base?\n";
		cin>>size;
		area=(size*h)/2;
		cout<<"area: "<<area<<endl;
		
	}
	
	return 0;
}
