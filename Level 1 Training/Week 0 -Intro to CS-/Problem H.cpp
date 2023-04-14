#include<iostream>
using namespace std;
int main()
{
	// Input-->> Given Matrix with fixied size 2*2 and 4 elements in it 
	// 
	// we need to find the determinant of the matrix
	// we can do it by using the formula det(A) = a*d - b*c
	// multiplying the Main diagonal elements and subtracting the sub-diagonal elements
	// where a,b,c,d are the elements of the matrix
	// 
	// Output-->> print the result (determinant det(A))


	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << a * d - b * c << endl;
}
