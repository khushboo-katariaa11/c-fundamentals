#include <iostream>
#include <cmath>
using namespace std;
void printhello(){
    cout<<"hello\n";
 }
 int sum(int a, int b=8){ //setting default
    return a+b;
 }
 int product(int a, int b=8){ //setting default
    return a+b;
 }
 bool iseven(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
 }
 int factorial(int n){
    int fac=0;
    for (int i = 1; i <= n; i++)
    {
        fac=fac*i;

    }
    return fac;
    
 }
 bool isprime(int n){
    if(n<2){
        return 0;
    }
    else{
        for (int dic = 2; dic <n; dic++)
        {
           if (n%dic==0)
           {
            return 0;
           }
           
        }
        return 1;
    }
 }
 int bincoff(int n, int r){
    int a= factorial(n);
    int b=factorial(r);
    int c=factorial(n-r);
    return a/(b*c);
 }
 //function overloading
 int sumfind(int a,int b=1){
    return a+b;
 }
 int sumfind(int a,int b,int c){
    return a+b+c;
 }
 int sumfind(float a,float b=1){
    return a+b;
 }

//  Question 1 : Write a function to check if a number is a palindrome in C++.
// (121 is a palindrome, 321 is not)
// A number is called a palindrome if the number is equal to the reverse of a number.
// Eg : 121 is a palindrome because the reverse of 121 is 121 itself. On the other hand, 321
// is not a palindrome because the reverse of 321 is 123, which is not equal to 321.
bool palindrome(int n){

int r=0;
int a=0;
int org=n;

while (n){
    r= n%10;
    n/=10;
    a=a*10+r;

}

if(a==org){
    return 1;
}
else{
    return 0;
}

}

// Question 2 : Write a function to calculate the sum of digits of a number.
int sumdigit(int n){

int r=0;
int a=0;
int org=n;

while (n){
    r= n%10;
    n/=10;
    a=a+r;

}

return a;

}

// Question 3 : Write a function which takes 2 numbers as parameters (a & b) and
// outputs : a^2 + b^2 + 2*ab.

int wholesquare(int a, int b){
    return pow(a,2)+pow(b,2)+2*a*b;
}
// Question 4 : Write a function that prints the largest of 3 numbers.
int threelargest(int a, int b, int c){
    if(a>b&& a>c){
        return a;
    }
    else if(b>c&&b>a){
        return b;
    }
    else{
        return c;
    }
}
// Question 5 : Write a function that accepts a character (ch) as parameters & returns
// the character that occurs after ch in the English alphabet.
// Eg : input = ‘c’, return value = ‘d’
// Note : for ch = ‘z’, return ‘a’.
char step1 (char ch){
    if(ch=='z'){
        return 'a';
    }
    return ch+1;

}
int main(){


 printhello();
 int result=palindrome(1214);
 cout<<result;
}