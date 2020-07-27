#include<iostream>
using namespace std;
// to do
// Manmohan
// 1
// 11
// 111
// 1001
// 11111
// 100001 
int manmohanP1(int numberN){
	int number = 0;
	// int element[number];
	int element[numberN];
	while(number <= numberN){
		if(number%2==0){
			// element[0] =1;
			// element[numberN-1]=1;
			for (int i = 0; i < number; ++i)
			{
				/* code */
				element[i]=0;
				element[0]=1;
				element[number-1] =1;
				cout<< element[i];
			}
			cout << "\n";


		}
		else{
			for (int i = 0; i < number; ++i)
			{
				/* code */
				element[i]=1;
				cout<< element[i];
			}
			cout << "\n";
		}

		number++;
	}
	return 0;
}
// main function
int main(){
	int n;
	cin >> n;
	manmohanP1(n);
	return 0;
}