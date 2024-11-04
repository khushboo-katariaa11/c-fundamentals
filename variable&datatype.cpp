// basic boiler plate code
#include <iostream>
using namespace std;
int main(){
    cout<<"hello world"<<endl;  //output statements
 

//  variables and data types
    // int a=12;
    // char ch='d';
    // bool g=0;
    // float s= 23.5;


    int num; // contains garbage value initally
    cout<<"enter the number  : "; 
    cin>>num;//input statement
    cout<<"the number entered is" <<num<<endl;

// sum of two numbers
int n1,n2;
cout<<"enter the number  : "<<endl;
cin>>n1;
cout<<"enter the number  : "<<endl;
cin>>n2;
cout<<"sum of two number is  "<<n1+n2<<endl;

//avergae of two numbers
int s1,s2,s3;
cout<<"enter the number  : "<<endl;
cin>>s1;
cout<<"enter the number  : "<<endl;
cin>>s2;
cout<<"enter the number  : "<<endl;
cin>>s3;
cout<<"average of three number is  "<<(s1+s2+s3)/3<<endl;



// Question 1 : In a program, input the side of a square. You have to output the area of
// the square.
// Input : n (side) Output
// : n*n (area)
int n;
cout<<"enter the number  : "<<endl;
cin>>n;
cout<<"area of square is  "<<n*n<<endl;

// Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a
// pen and an eraser. You have to output the total cost of the items back to the user as
// their bill.
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
// problem)
float pencil,pen,eraser;
cout<<"enter the number  : "<<endl;
cin>>pencil;
cout<<"enter the number  : "<<endl;
cin>>pen;
cout<<"enter the number  : "<<endl;
cin>>eraser;
cout<<"total bill is with gst "<<(pencil+pen+eraser) <<endl;

// Question 3 : Build a Simple Interest Calculator.
// Input : principal (P), rate (R), time (T)Output :
// (P*R*T) / 100

int p,r,t;
cout<<"enter the number  : "<<endl;
cin>>p;
cout<<"enter the number  : "<<endl;
cin>>r;
cout<<"enter the number  : "<<endl;
cin>>t;
cout<<"Simple Interest   "<<(p+r+t)/100<<endl;
// Question 4 : Write a program to calculate the area of a circle.
// Input : r (radius)
// Output : PI*r*r (area)
int r1;
cout<<"enter the radius  : "<<endl;
cin>>r1;
cout<<"the area of a circle "<<3.14*r*r<<endl;


    return 0;

}