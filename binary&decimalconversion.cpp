#include <iostream>
using namespace std;

int convtdecimal(int n){
    int mul=1;
    int r=0;
    int a=0;
    while (n)
    {
       r=n%10;
       n/=10;
       a=a+r*mul;
       mul*=2;
    }
    return a;
    

}
int convtbinary(int n){
    int mul=1;
    int r=0;
    int a=0;
    while (n)
    {
       r=n%2;
       n/=2;
       a=r*mul+a;
       mul*=10;
    }
    return a;
    

}
int main(){
int result= convtbinary(13);
cout<<result;
}