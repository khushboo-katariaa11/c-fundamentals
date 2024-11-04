#include <iostream>
using namespace std;
void mulby2(int &a,int &b,int &c){
    a*=2;
    b*=2;
    c*=2;
}
int main(){

    // int a=5;
    // int* ptr=&a;
    // cout<< *ptr; //dereference

    // int *ptr2= NULL; //null pointer

    // : What will be the output of the following code :
    // int x;
    // int *ptr;
    // x=7;
    // ptr=&x;
    // cout<<*ptr; //7
  // : What will be the output of the following code :
    // int x=1,y=2,z=3;
    // mulby2(x,y,z);
    // cout<<x<<y<<z; //2 4 6

      // : What will be the output of the following code :
      int a=32;
      int *ptr=&a;
      char ch='A';
      char &cho=ch;

      cho+=a;
      *ptr=*ptr+ch;
      cout<<a<<" "<<ch; //num //char

}