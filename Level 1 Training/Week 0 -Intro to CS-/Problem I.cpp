#include<iostream>
using namespace std;

int main()
{
	int x; // our number is in the range of integer so no need to use long long
	cin >> x;
	cout << (x + 4) / 5; //we approximate our number x to the nearest greatest factor of 5 then we divide it by 5
}
