// time complexity

#include<iostream>
using namespace std;

int main() {

	// 1e8 --> 100000000 --> 1 sec


	// 1e8*1e8*(max time between all functions)
	for (int i = 0; i < 1e8; i++) {
		for (int j = 0; j < 1e8; j++) {
			pow(1, 2);
			min(1, 4);
		}
	}
	//



	// 1e8
	for (int i = 0; i < 1e8; i++);
	//


	// total time = max( 1e8*1e8*(max time between all functions) , 1e8)


	// big O notation --> worst case

	// nested loop --> O(n*n)

	// sort function time complexity in c++ --> for searching

	// sort() --> O(n*log(n))

	//for (int i = 0; i < 1e8; i++) // --> O(1)

}