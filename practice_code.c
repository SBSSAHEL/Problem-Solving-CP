// //In this problem you will be given an integer number N. Print "Zero" if the number is equals to 0 and "Non Zero" Otherwise.

// #include<stdio.h>

// int main() {

//     int n;

//     scanf("%d",&n);

//     if (n == 0)
//     {
//         printf("Zero");
//     }
//     else
//     {
//         printf("Non Zero");
//     }
    

//     return 0;
// }



//In this problem you will be given an integer number N. You will have to add 5 with N and print it


// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int sum = n + 5;
//     printf("%d",sum);

//     return 0;
// }


// In this problem you will be given two integers a and b, you have to tell if one is the multiple of other. (a is the multiple of b or b is the multiple of a).

// #include<stdio.h>

// int main()
// {
//     int a;
//     int b;

//     scanf("%d",&a);
//     scanf("%d",&b);

//     if (a%b == 0 || b%a == 0 )
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }
    
    
//     return 0;
// }

//In this problem you will be given a floating point number x. You have to print x upto 3 decimal points.

// #include<stdio.h>

// int main()
// {
//     float x;
//     scanf("%f",&x);

//     printf("%.3f",x);

//     return 0;
// }


//I know that you're loving practice days! So this task is for you. You need to print "I Love Practice" without the quotation marks. I know that you can do it!


// #include<stdio.h>

// int main()
// {
//     printf("I Love Practice");

//     return 0;
// }


//Take two integers A and B as input and output their summation.


// #include<stdio.h>

// int main()
// {

//     int A;
//     int B;
//     int sum;

//     scanf("%d %d",&A,&B);
//     sum = A+B;
//     printf("%d",sum);

//     return 0;
// }


//You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.


// #include<stdio.h>

// int main()
// {

//     int A;
//     long long int B;
//     double C;
//     char D;
//     scanf("%d %lld %lf %c",&A,&B,&C,&D);

//     printf("%d\n",A);
//     printf("%lld\n",B);
//     printf("%lf\n",C);
//     printf("%c\n",D);

//     return 0;
// }


//I know and you also know that you love practice day so much. So this task is for you. You will be given a positive integer N, you need to print "I Love Practice" N times.Here positive integer means those integers that are greater than 0.

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("I Love Practice\n");
//     }
    

//     return 0 ;

// }


//You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No Print Yes if the value is divisible by 5 and print No otherwise.


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         if ( i%5 == 0)
//         {
//             printf("%d Yes\n",i);
//         }
//         else
//         {
//             printf("%d No\n",i);
//         }
        

//     }
    

//     return 0 ;

// }

// #include <stdio.h>


// int main()
// {
//     long long int A;
//     long long int B;
//     long long int mul = 0;
//     scanf("%lld %lld",&A,&B);
//     mul = A*B;
//     printf("%lld",mul);

//     return 0;
// }


//You will be given a non-negative integer N, you need to tell if this number is divisible by 3 or not. If it is divisible by 3 output "YES" otherwise output "NO" without the quotation mark.


// #include <stdio.h>


// int main()
// {
//     int N;

//     scanf("%d",&N);

//     if (N%3 ==0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
    
    

//     return 0;
// }



//You will be given a non-negative integer N, you need to print all numbers from 1 to N that are divisible by both 3 and 7.


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for (int i = 21; i <= n; i++)
//     {
//         if ( i%3 == 0 && i%7 == 0)
//         {
//             printf("%d\n",i);
//         }
//         else
//         {
//             continue;
//         }
        

//     }
    

//     return 0 ;

// }



/*Alisa and you have gone out for shopping, and Alisa wants to buy a new pair of shoes for Eid. She has enough money to buy anything. However, Alisa will only buy shoes if you also buy a pair. And you will buy a pair of shoes if you can buy a Punjabi. That means, everything is depending on the Punjabi.

You have decided that you will buy a Punjabi only if you have more than 1000 Taka. After purchasing the Punjabi the amount of your money will be reduced by 1000. Suppose you have 1600 taka with you, after buying the Punjabi you will have 600 taka left with you.

Then you will only buy shoes if you have 500 Taka or more left with you. That means, if you can't buy your Punjabi you can't buy shoes.

Now if I inform you the amount N Taka that your mother will give you, can you tell me what will happen next?*/


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     if (n>1000)
//     {
//         printf("I will buy Punjabi\n");
//         if (n>= 1500)
//         {
//             printf("I will buy new shoes\n");
//             printf("Alisa will buy new shoes\n");
//         }
        
//     }
//     else
//     {
//         printf("Bad luck!");
//     }
    
    

//     return 0 ;

// }
