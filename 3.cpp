//Given a positive integer, return true if it is a power of 2.
#include<iostream>
using namespace std;
bool poweroftwo(int n){
    if(n==1) return true;
    if(n%2==0){ 
     return poweroftwo(n/2);
    }
    return false;
    
}

int main (){
    int x;
    cin>>x;
    cout<<poweroftwo(x);

}