#include <iostream>
using namespace std;
int main(){

    // types of loops:
    // for loop

    for (int i = 0; i < 5; i++) //print no: 0 to 4
    {
        cout<<i<<" ";
    }
    for (int i = 0; i < 5; i++) //print hello: 5times
    {
        cout<<"hello"<<" ";
    }
    int n;
    cin>>n; // print numbers upto n
    for (int i = 0; i < n; i++) //print no.: ntimes
    {
        cout<<i<<" ";
    }
    int n1;
    int sum=0;
    cin>>n1; // print numbers upto n
    for (int i = 1; i <= n1; i++) //print no.: ntimes
    {
        sum+=i;
    }
    cout<<"sum of  n natural number is"<<sum;

    
    
    
    // while loop 
int i=1; // printing no. 1to 8;
    while (i<9)
    {
        cout<<i;
        i++;
    }
int j=1; //print the pattern
    while (j<4)
    {
       cout<<"****"<<endl;
       j++;
    }
int j=n; //print number n to 1;
    while (j>1)
    {
       cout<<j<<"";
       j--;
    }

int a=0; // printing the sum of digits
int num;
cin>>num;
int r=0;
    while (num){

        r=num%10;
        num=num/10;
        a=a+r;
    }
    cout<<a;

int a1=0; // printing the sum of odd digits
int num1;
cin>>num1;
int r1=0;
    while (num1){

        r=num1%10;
        num1=num1/10;
        if(r%2!=0){
        a1=a1+r1;
        }
    }
    cout<<a1;
int a1=0; // printing the complete number in reverse order
int num1;
cin>>num1;
int r1=0;
    while (num1){

        r=num1%10;
        num1=num1/10;
        
        a1=a1*10+r1;
        
    }
    cout<<a1;
int a1=0; // printing the number in reverse order
int num1;
cin>>num1;
int r1=0;
    while (num1){

        r=num1%10;
        cout<<r;
        num1=num1/10;
    }
    
    int a1=0; // printing the complete number in reverse order
int num1;
cin>>num1;
int r1=0;
    while (num1){

        r1=num1%10;
        num1=num1/10;
        
        a1=a1*10+r1;
        
    }
    cout<<a1;
    
    
 
    // do while loop 
    i=1;
do
{
    cout<<i;
    i++;
} while (i>7);  //output: 1

//break statement
while(true){
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n%10==0){
        break;
    }
    cout<<n;
}
//continue statement
while(true){
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n%10==0){
        continue;
    }
    cout<<n;
}

//prime number
int n;
cin>>n;
if(n<2){
    cout<<"notprime";
}
else{
    for (int div = 2; div < n; div++)
    {
        if (n%div==0)
        {
            cout<<"notprime";
        }
        
    }
    cout<<"notprime";
    
}



// Question 1 : WAP to find the Factorial of a number entered by the user.
// Hint : factorial of a number (n) = n * (n-1) * (n-2) * (n-3) *...........* 1
// and exists for positive numbers only. We write factorial as n!
// So, factorial of 0! = 1, 1! = 1, 2! = 2, 3! = 6, 4! = 24 and so on.
// Note - Please do not confuse factorial with NOT EQUAL TO operator, they are not the
// same.
int fact=1;
for (int i = 1; i < n; i++)
{
    fact*=i;
}
cout<<fact;

// Question 2 : WAP to print the multiplication table of a number, entered by the user.
for (int i = 1; i < 10; i++)
{
   cout<<i*n<<" ";
}

// Question 3 : WAP to input a number and check whether the number is an Armstrong
// number or not.
// done- in conditional statements part
// An Armstrong number is a number that is equal to the sum of cubes of its digits.
// Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
// (Assume N >= 2)

for (int i = 2; i < n; i++)
{
    // if(isprime){  //isprime is a userdefined function that checks wheater the number is prime or not
    //     cout<<i;
    // }
}

// Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.
// (Assume N >= 2)
// Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ….
// This is a series where each number is a sum of previous 2 numbers in the series.Eg
// : 1 = 0 + 1,
// 2 = 1 + 1,
// 3 = 1 + 2,
// 5 = 2 + 3,
// 8 = 3 + 5 & so on.

int prev=0;
int last=1;
int current=0;
if(n==0){
    return prev;
}
else if(n==1){
    return last;
}
else{
    for (int i = 2; i <= n; i++)
    {
        current=last+prev;
        prev=last;
        last=current;
    }
    cout<<current;
    
}
    return 0;

}