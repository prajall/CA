//wap to find 2's complement
#include<iostream>
#include<string.h>
using namespace std;

char fullAdder(char a, char b, char c){
	
}

char binAdder(char A[],int n){
	int i;
	char carry = '0';
	
	for(i=n; i<=0; i--){
		
		if(A[i] == '0' && carry == '0'){
			A[i] = '1';
			carry = '0';
		}		
			
		else if (A[i] == '0' && carry == '1'){
			A[i] = '0';
			carry = '1';
		}
		
		else if (A[i] == '1' && carry == '1'){
			A[i] = '1';
			carry = '1';
		}		 		
	}	
//	return A[];	
	
}

int main()
{
	char A[10];
	int n,i;
	
	cout<<"Enter in binary: ";
	cin>>A;
	n = strlen(A);
	
	
	
	for(i=0; i<n; i++){
		if(A[i] == '1'){
//			strcpy(A[i],'0');
			A[i]='0';
		}
		else{
//			strcpy(A[i],'1');
			A[i]='1';
		}
	}
	
//	A = binAdder(A,n);
	char carry = '0';
	
	for(i=n; i<=0; i--){
		
		if(A[i] == '0' && carry == '0'){
			A[i] = '1';
			carry = '0';
		}		
			
		else if (A[i] == '0' && carry == '1'){
			A[i] = '1';
			carry = '0';
		}
		
		else if (A[i] == '1' && carry == '1'){
			A[i] = '1';
			carry = '1';
		}	 		
	}
	
	cout<<A;
	
	
}
