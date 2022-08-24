#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(int A){
	int r,n = A,sum = 0;
	int power = 0;
	while(n!=0){		
		r = n%10;
		sum = sum + (r*pow(2,power));
		n=n/10;
	}
	return sum;
}


int main()
{
	int A = 1101;
	
	A = binaryToDecimal(A);
//	A++;
//	A = decimalToBinary(A);
	cout<<A;
}
