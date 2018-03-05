#include <iostream>
using namespace std;

void add(int *a, int *b){
	
 	    int p;
 	     p=*a;
 	    *a=*b;
 	    *b=p;
}

int main(){
	    int x,y;
	    cout<<"x="; cin>>x;
	    cout<<"y="; cin>>y;
	    add( &x, &y);
	    cout<<"\nUtga soligdson baidal:"<<'\n';
	    cout<<"x="<<x<<'\n';
	    cout<<"y="<<y;
	    cin.get();
}


