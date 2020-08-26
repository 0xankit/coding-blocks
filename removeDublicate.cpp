#include <iostream>
#include<cstring>
using namespace std;

// remove consecutive character
void removeDublicate(char a[]){
    int i=0, j=1;
    while(j!=strlen(a)){
        if(a[i]==a[j]){
            j++;
        }
        else{
            i++;
            a[i]=a[j];
            j++;
        }
        
    }
    a[i+1]='\0';
    return;
}

int main() {
    char a[1000];
    //cin>> a;
    //readline(a,1000);
    cin.getline(a,1000,'\n');
    removeDublicate(a);
    cout<< a<< endl;

    
    return 0;
}
