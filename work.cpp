#include<iostream>
using namespace std;

main(){
	
	int n,test;
	cin >> n;

	while(n!=1){
		
		test=n%2;
		if(test!=0){
			n=3*n+1;}
		
		else{
			n=n/2;}
		cout <<n<< " " ;
		};	
		
	cout << endl;
	
	return 0;
}
