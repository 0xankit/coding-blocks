#include <iostream>
#include<cstring>
using namespace std;

// read a sentance and decide if it is a palindromic

bool isPalindrome(char a[]){
    int i =0;
    int j=strlen(a)-1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
            break;
        }
    }
    return true;
}
int main() {
    char a[1000];
    //cin>> a;
    //readline(a,1000);
    cin.getline(a,1000,'\n');
    cout<< a<< endl;
    if(isPalindrome(a)){
        cout<< "Given String is Palindrome"<< endl;
    }
    else{
        cout<< "Given String is NOT Palindrome"<< endl;
    }
    
    return 0;
}
