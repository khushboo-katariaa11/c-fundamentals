#include <iostream>
using namespace std;
int main()
{
    // // print pattern :-
    // // 1111
    // // 2222
    // // 3333
    // // 4444

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i < 40; i++)
    // {
    //     cout << "-";
    // }
    // cout << endl;
    // // star pattern
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i < 40; i++)
    // {
    //     cout << "-";
    // }
    // cout << endl;

    // // inverted star
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 4; j >= i; j--)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i < 40; i++)
    // {
    //     cout << "-";
    // }
    // cout << endl;
    // // half pyramid
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // // character pyramid
    // for (int i = 1; i < 40; i++)
    // {
    //     cout << "-";
    // }
    // cout << endl;
    // char ch = 'a';
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i < 40; i++)
    // {
    //     cout << "-";
    // }
    // cout << endl;
    // // hollow rectangle
    // for (int i = 1; i <= 5; i++) // 5=n
    // {
    //     cout << "*"<<" ";
    //     if (i == 1 || i == 5)
    //     {
    //         for (int j = 1; j <= 3; j++) // 5-2=n-2
    //         {
    //             cout  << "*"<<" ";
    //         }
    //     }
    //     else
    //     {
    //         for (int j = 1; j <= 5 - 2; j++) // 5-2=n-2
    //         {
    //             cout << "  " ;
    //         }
    //     }
    //     cout << "*"<<" ";
    //     cout<<endl;
    // }
    //     for (int i = 1; i < 40; i++)
    // {
    //     cout << "-";
    // }
    // cout << endl;

    // //rotated pyramid
    // for (int i = 1; i <= 4; i++)
    // {   for (int k = 1; k <= 4-i; k++)
    // {
    //     cout<<" ";
    // }
    
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*" ;
    //     }
    //     cout << endl;
    // }

    //     for (int i = 1; i < 40; i++)
    // {
    //     cout << "-";
    // }
    // cout << endl;

    // //floyd's triangle
    // int jk=1;
    // for (int i = 1; i <= 4; i++)
    // {  
    
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << jk<<" " ;
    //         jk++;
    //     }
    //     cout << endl;
    // }
    //        for (int i = 1; i < 40; i++)
    // {
    //     cout << "-";
    // }
    // cout << endl;
    //diamond pattern
     for (int i = 1; i <= 4; i++)
    {  
     for (int k = 1; k <= 4-i; k++)
    {
        cout<<"  ";
    }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout << "*"<<" " ;
            
        }
        cout << endl;
    }
     for (int i = 4; i >= 1; i--)
    {   for (int k = 1; k <=4-i; k++)
    {
        cout<<"  ";
    }
    
        for (int j = 1; j <=2*i-1 ; j++)
        {
            cout << "*"<<" " ;
            
        }
        cout << endl;
    }
           for (int i = 1; i < 40; i++)
    {
        cout << "-";
    }
    cout << endl;

//     //butterfly  pattern

//     for (int i = 1; i <= 4; i++) //n=4
//     {
//         for (int j = 1; j <= i; j++) //2n
//         {
//             cout<<"*";
//         }
//         for (int k = 1; k <= 8-2*i; k++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++) //2n
//         {
//             cout<<"*";
//         }

//         cout<<endl;
        

        
//     }
    
//     for (int i = 4; i >= 1; i--) //n=4
//     {
//         for (int j = i; j >= 1; j--) //2n
//         {
//             cout<<"*";
//         }
//         for (int k = 1; k <= 8-2*i; k++)
//         {
//             cout<<" ";
//         }
//         for (int j = i; j >= 1; j--) //2n
//         {
//             cout<<"*";
//         }

//         cout<<endl;
        
        
        
//     }


// // 1
// // 01
// // 101
// // 0101
// // 10101
//          for (int i = 1; i < 40; i++)
//     {
//         cout << "-";
//     }
//     cout << endl;
//     bool kh=1;
//       for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << kh << " ";
//             kh=kh==1?0:1;
//         }
//         cout << endl;
//     }

// //     Question 2 : Print the Rhombus Pattern.
// // For n = 5
// //     *****
// //    *****
// //   *****
// //  *****
// // *****
//          for (int i = 1; i < 40; i++)
//     {
//         cout << "-";
//     }
//     cout<<endl;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 1; k <=5; k++)
//         {
//            cout<<"*";
//         }
//         cout<<endl;
        
        
//     }
//         for (int i = 1; i < 40; i++)
//     {
//         cout << "-";
//     }
//     cout << endl;
//     // Question 3 : Print the Palindromic Pattern with Numbers.
// // For n = 5
// for (int i = 1; i <= 5; i++)
// {
//         for (int j = 1; j <= 5-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = i; k >=1; k--)
//         {
//             cout<<k;
//         }
//         for (int l = 2; l <=i ; l++)
//         {
//             cout<<l; 
//         }
        
//         cout<<endl;
        
        
// }

    
    
    

// }
}