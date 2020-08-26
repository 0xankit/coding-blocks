#include <iostream>
#include <cstring>
using namespace std;
// Read N and then read N strings and print the largest and its length

int main() {
    //cout<< "Enter No of strings: ";
    int N,largest_len=0;
    cin>> N;
    char largestStr[1000], a[1000];
    cin.get();
    for(int i=0; i< N; i++){
        cin.getline(a,1000);
        if(strlen(a)>largest_len){
            largest_len=strlen(a);
            strcpy(largestStr,a);
        }
    }
    cout<<largestStr << " with length " << largest_len<<endl;
    return 0;
}
