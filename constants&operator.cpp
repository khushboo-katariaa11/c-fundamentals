#include <iostream>
using namespace std;
#define pi 3.14; //macros-symbolic constants
int main(){
    cout<< pi ;
    const int num=14;  //constants
    cout<<num<<endl;

    // typecasting
    //implicit type casting or type promotion
    //double>float>int>char>bool
    cout<<4/4<<endl;  //ans in int
    cout<<4.0/4<<endl;  //ans in float
    cout<<('a'+1)<<endl; //ans in int 

    //explicit type casting

    cout<<(int)'a'<<endl;   //97
    cout<<(float)4<<endl;  //4.0
    cout<<(int)7.55<<endl;  //7
    cout<<(bool)'a'<<endl;  //1

// arthematic operator

cout<<5+6<<endl;
cout<<5-6<<endl;
cout<<5*6<<endl;
cout<<5/6<<endl;
cout<<5%6<<endl;
int a=8;
cout<<a++;  //8
cout<<a--;   //9

//assignment operator
a=9;
a+=1;
a*=1;
a-=1;
a/=1;

// comparsion operator

cout<<((5+3)<4);
cout<<((5+3) <= 4);
cout<<((5+3)>=4);
cout<<((5+3)==4);  

//logical operator

cout<< ((5>3)&&(6>4))<<endl;
cout<< ((5>3)||(6>4))<<endl;
cout<< !(0)<<endl;


int x = 2, y = 5;
int exp1 = (x * y / x);
int exp2 = (x * (y / x));
cout << exp1 << ","; //5
cout << exp2 << "\n"; //4

int x = 10, y = 5;
int exp1 = (y * (x / y + x / y)); 
int exp2 = (y * x / y + y * x / y);
cout << exp1 << " "; //20
cout << exp2 << "\n"; //20


int x = 200, y = 50, z = 100;
if(x > y && y > z){
cout << "Hello \n";
}
if(z > y && z < x){ //true
cout << "C++ \n";
}
if((y+200) < x && (y+150) < z){ 
cout << "Hello C++ \n";
//  output: c++
    return 0;
}