#include <iostream>
using namespace std;
// cin.get() reads a single character
// puts a loop till it reads enline character.

void readline(char a[], int maxlen){
    int i=0;
    char ch = cin.get();
    while(ch!='\n'){
        a[i]=ch;
        if(i==maxlen-1){
            break;
        }
        i++;
        ch=cin.get();
        
    }
    a[i]='\0';
    return;
}
int main() {
    char a[1000];
    //cin>> a;
    readline(a,1000);
    cout<< a<< endl;
    return 0;
}
