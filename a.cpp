#include<iostream>
using namespace std;


int main(){

    int n,i=1,sp,j;
    cin>>n;
    while(i<=n){
        sp=1;
        while(sp<=n-i){
            cout<<" ";
            sp++;
            
        }
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }


return 0;

}