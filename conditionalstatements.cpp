#include <iostream>
using namespace std;
#include <cmath>
int main(){
    // conditional statements:
    // 1] if-else
    // 2] if elif else
    // 3] ternary statements
    // 4] switch case

// 1] if-else
    int age;  //check if age is greater than 18 or not
    cout<<"enter age  " <<endl;
    cin>>age;
    if(age>18){
        cout<<"legal"<<endl;
    }
    else{
        cout<<"illegal"<<endl;
    }


    int marks; //if marks is greater than 33 then pass else fail
      cout<<"enter marks  " <<endl;
    cin>>marks;
    
    if(marks>33){
        cout<<"pass"<<endl;
    }
    else{
        cout<<"fail"<<endl;
    }

    int num1,num2;  //maximum of two number
    cout<<"enter num1  " <<endl;
    cin>>num1;
    cout<<"enter num2  " <<endl;
    cin>>num2;
    if(num1>num2){
        cout<<"num1 is larger" <<endl;
    }
    else{
        cout<<"num2 is larger" <<endl;
    }

      int num; // check the given number is even or odd
    cout<<"enter num  " <<endl;
    cin>>num;

    if(num%2==0){
        cout<<"num1 is even" <<endl;
    }
    else{
        cout<<"num1 is odd" <<endl;
    }

    // 2] if elif else

    int income; //income tax calculator
    int tax=0;
    if(income< 500000){
        tax=0;
        cout<<"tax to be paid "<<tax<<endl;
    }
    else if (income>500000&& income <1000000){
         tax=tax+ income-(20/income)*100;
        cout<<"tax to be paid "<<tax<<endl;
    }
    else{
        tax=tax+ income-(30/income)*100;
        cout<<"tax to be paid "<<tax<<endl;

    }

    int n1,n2,n3 ; //largest of 3 number
    if(n1>n2 && n1>n3){
        cout<<"n1 is greater "<<endl;
    }
    else if(n2>n1 && n2>n3){
        cout<<"n2 is greater "<<endl;
    }
    else{
        cout<<"n3 is greater "<<endl;
    }

    // 3] ternary operator

    bool iseven=(num1%2==0)?1:0;
    bool islegal=(age>18)?1:0;


    // 4] switch case
    int number1,number2;
    cout<<"enter both number"<<endl;
    cin>>number1;
    cin>>number2;
 char op;
 cout<<"enter the operation you want to perform"<<endl;
 cin>>op;
    switch (op)
    {
    case '+':
        cout<<number1+number2;
        break;
    
    case '-':
       cout<<number1-number2;
        break;
    
    case '*':
        cout<<number1*number2;
        break;
    
    case '/':
        cout<<number1/number2;
        break;
    
    default:
    cout<<"incorrect";
        break;
    }

// //     Question 1 : Write a C++ program to get a number from the user and print whether
// // it's positive, negative or zero.
    int s1 ; 
    if(s1>0){
        cout<<"positive"<<endl;
    }
    else if(s1==0){
        cout<<"zero "<<endl;
    }
    else{
        cout<<"negative "<<endl;
    }

// // Question 2 : Write a C++ program that takes a year from the user and print whether
// // that year is a leap year or not.
int year;
cout<<"enter year "<<endl;
cin>>year;
if(year%400==0){
    cout<<"it is a leap year";
}
else if(year%4==0 && year%10!=0){
     cout<<"it is a leap year";
}
else{
    cout<<"not a leap year";
}
// // Question 3 : What will be the value of x & y in the following program:
int a = 63, b = 36;
bool x = (a < b) ? true : false; //0
int y = (a > b) ? a : b; //63
cout << x << "," << y << endl; //0,63
// // Question 4 : What’ll be the output of the program:
int a = 5;
if (++a*5 <= 25) { 
    
cout<<"Hello\n";
} else {
cout<<"Bye\n"; //bye


// Question 5 : For any 3 digit number check whether it’s an Armstrong number or not.
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// Eg : 371 is an armstrong number.
// 3*3*3 + 7*7*7 + 1*1*1 = 371

int number;
cout<<"enter number"<<endl;
cin >>number;
int r=0;
int a=0;
int org=number;

while (number){
    r= number%10;
    number/=10;
    a+= pow(r,3);

}

if(a==org){
    cout<<"yes it is";
}
else{
    cout<<"no its not";
}


return 0;

}