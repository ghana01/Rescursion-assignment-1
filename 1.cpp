/*Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
recursion.*/
#include<iostream>
using namespace std;
int sum(int a,int b){
    if(a>b) return 0;
    if(a%2!=0) return a + sum(a+2,b);
    return sum(a+1,b);
}
int main(){
    int x,y;
    cout<<"Enter the value of a and b"<<endl;
    cin>>x>>y;
    cout<<sum(x,y);

}