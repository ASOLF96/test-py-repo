// topic 1 try to write 'abinash is op' with a line next line ' nobody can  stop him'

#include<iostream>
using namespace std;
int main(){
    cout<<"abinash is op\nnobody can stop him";                 //this output will be = abinash is op
    return 0;                                                                       //  nobody can stop him 
}

// you have to add #include <iostream>
// and using free space std 
// and main 
//these all are mandetory funtions to do before we start are coding.
// return 0 should always be at the end of the coding otherwise it will not work
//so make sure to follow these steps at all time before  satrting your coding.


//topic 2 give different outputs from a variable 

//topic2:-1
#include <iostream>
using namespace std;

int main(){
   
   int age=25;
    cout<<age;
    return 0;
}

// in this coding the output will be 25 as i dint include "" in cout<<age

//topic2:-2
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"age";
    return 0;
}
// this codig will  give output as age as i include "" in this code 

//different types of data type 

// int:- 4 bytes 
//int is used for storing integers values eg- int age=25; 
//we have to put int before assigning the values to a name as the value is an integer.


// char:- 1 byte 
// used to store character of 1 letter eg- char grade='A';


//float:- 4 bytes
//used in storing every decimal number eg:- PI=3.14f;
//note: everytime we add float to a code we have to add 'f' at the end of the number 
//so that the computer understands that there are no other number  afterthe  decimal but only a
//single number with the decimal



// bool:- it refers to a variable if it is true or false 
// note= true=1, false=0, eg:bool is safe=true;
// if put in code ==
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    bool issafe=true 

    cout << issafe;
    return 0;
}
// this coding will give an output of 1 because its true 
// but if it was bool is safe = false then the output will be 0


//double:-it is just the 2* of data than float which means float is 4 bytes double is 8 bytes 
//it is default in a decimal eg= double price= 100.99;


//TOPIC 3 TYPE CASTING 

// type casting is converting one data type to another 
// there are two types of type casting 

// TYPE 1= CONVERSION
// it is the type where small data types  gets converted in large data types 
// it is an implicit type, meaning the compiler does this job itself and does not need any human intervention 
//eg char (1byte)->int(4bytes)
//incode
#include<iostream>
using namespace std;
int main()
{
    char grade = 'A';                
    int value = grade;           //this code's output will be 65 as  ascai value of 'A' is 65   
    cout<<value;

    return 0;
}


//TYPE 2 = CASTING 
// it is the type where the large data type is converted to  small data type
//it is an explicit process where the process of casting is done by programmer (humans)
//in coding 

#include <iostream>
using namespace std;
int main()
{
    double price=100.99;
    int newprice=(int) price;       // the output will be 100 because in integer (int) data type the decimal converts to 
    cout<<newprice;                 // whole number like 100.99 to 100 or 100.01 t0 100 so 
                                     //100.99 to 100 so large data converts into small dta hence the term casting.
    return 0;
}


//TOPIC 4 OPERATORS
//A+B where + is an operator 
//  example in coding 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=10 , b=5;                           //output will be "15" 
  cout<<sum;                                   //note= you can write "cout<<sum" or "cout<<(a+b)"
    return 0;
}

//other code examples
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])       //output will be sum = 15
                                               // difference = 5
                                               //  multiply = 50
                                               //  divide = 2
{                                              
    int a=10,b=5 ;                               // note:= the <<endl is added so that the outcomes are in a line and 
                                                 // does not stick together.
cout<<"sum = "<<(a+b)<<endl;
cout<<"difference = "<<(a-b)<<endl;
cout<<"multiply = "<<(a*b)<<endl;
cout<<"divide = "<<(a/b)<<endl;

    return 0;
}

// OPERATORS:-
// ARTHEMETIC OPERATORS= +,-,*,/,%,(ABOVE EXAMPLE)
//RELATIONAL OPERATORS= <,>,<=,>=,==,!=,(USED IN GETTING TRUE OR FALSE OUTPUT)
//LOGICAL OPERATORS=> OR=||
//AND=> &&
//NOT=> !

//EXRECISE (SUM OF 2 NUMBERS IN CODE ) :>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a , b ;                                // output will be =
cout<<"enter number a = ";                      //enter number a = 25
cin>> a;                                       // enter number a = 25
cout<<"enter number b =";                     //   sum= 92 
cin>>b;
int sum = a+b;
cout<<"sum = "<<sum<<endl;
    return 0;
}


// TOPIC:= UNINARY OPERATORS
// it is an operator where only one term is used 
//eg=> a=a+1 ehich can also be written as a++
// TYPE 1=> INCREMENT OPERATORS (++)
// a++=> first kaam , 2nd update 
// in coding terms :>
#include<iostream>                           // toh a++ me pehele kaam hoga mtlab b=a hojaega mtlab b=10
using namespace std;                         // uske baad update hoga aur '++' ki wajah se a me +1 value add hojaega 
int main()                                   // toh update ke baad a=11 hojaega 
{
     int a=10;                                // toh iske output me hame milega 
     int b=a++;                               // b=10
     cout<<"b = "<<b<<endl;                   // a=11
     cout<<"a = "<<a<<endl;                   // we have put "endl" in every output so that the outputs dont stick with  each other 

    return 0;
}

// ++a=> first update , 2nd kaam 
// in coding termes :>
#include<iostream>
using namespace std;                      // pehele update of a=10 to a=11
int main()                                //then kaam hoga of a=b so b=11 hoga 
{                                         // toh output hoga a=11
     int a=10;                            //b=11
     int b=++a;
     cout<<"b = "<<b<<endl;
     cout<<"a = "<<a<<endl;

    return 0;
}


// TOPIC := DECREMENT OPERATORS(--)
// a-- > kaam , update 
// --a > update , kaam 

// HOMEWORK:= TO MAKE A SIMPLE CALCULATOR THAT CAN (+)(-)(*)(/)
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   string operation ;
   double number1, number2;
   cout<<"enter the first number : ";
   cin>>number1;
   cout<<"enter the operation(+,-,*,/) : ";
   cin>>operation;
   cout<<"enter the second number : ";
   cin>>number2;

 if  (operation=="+") {
    cout<<number1+number2 ;
} else if  (operation=="-") {
    cout<<number1-number2 ;
}else if (operation=="*") {
    cout<<number1*number2;
}else if (operation=="/") {
    cout<<number1/number2;
} else{
cout<<"not a recognised operation";
}

    return 0;
}




//  TOPIC := CONDITIONAL STATEMENTS 
//IF-ELSE
//this statement is used if we want to add a condition in a coding 
//eg=> 
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
 int n=-45;
 if(n>=0){                                            //output is n is negative 
cout<<" n is positive" ;
 }else{
    cout<<"n is negative";
 }
  return 0;
}

// coding of finding if eligible to vote or not using conditional statements 

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   int age; 
cout<<"enter your age : ";
cin>>age;
   if (age>= 18){
    cout<<"you can vote ";
   } else{
     cout<<"you cannot vote";
   }
  
    return 0;
}


// coding of finding if a number is even or odd using conditional statements 
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  
    int number;
    cout<<"what is your number : ";
    cin>>number;
    if(number%2==0){
        cout<<"the number is even";
    }else {
        cout<<"the number is odd";
    }
      return 0;
}


// conditional statement 2
//if-else-if-else 
//else if is used if you have multiple statements 

// example write a code to give grades to marks by using else if conditional statements:- 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int marks ;
 cout<<"enter your marks: ";
 cin>>marks;                                               // output=> enter your marks: 35 
 if(marks>=90) {                                           // YOU FAILED
    cout<<"GRADE A";
 } else if (marks>=80 && marks <90 ) {
    cout<<"GRADE B";
 } else {
    cout<<" YOU FAILED";
 }

    return 0;
}


// example => write a code to distinguish between uppercase and lowercase letter.

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char ch;
    cout<<"enter letter :";
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<"lower case";
    } else{
        cout<<"upper case ";
    }
      
    return 0;
}

//LOOPS (VERY IMPORTANT TOPIC FOR C++ LANGUAGE)
// WHAT IS A LOOP ? 
// In C++, a loop is a control flow statement that allows a block of code to be executed
// repeatedly based on a specified condition. Instead of writing the same code multiple times,
//  loops provide a concise and efficient way to handle repetitive tasks, process collections of data,
// or implement algorithms that require iterative execution.
  

// DEFINE WHILE LOOP := A while loop in C++ is an entry-controlled looping construct that repeatedly executes 
//a block of code as long as a specified Boolean condition remains true.
// It is particularly useful when the exact number of iterations is not known beforehand.

// QUESTION=> PRINT NUMBER 1 TO 5 using  "while loop"

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i=1;
    while (i<=5){                          // output is :- 12345
         cout<<i;
        i=i+1;
    }
    cout<<endl;
    return 0;
}
 


#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{                                                  // to make spaces between the outputs add " "
    int count =1 ;
    while (count<=5){                          // output is :- 1 2 3 4 5 6 7 8 9 10
         cout<<count<<" ";
        count=count+1;
    }
    cout<<endl;
    return 0;
}


// print the numbers between 1 to n using "while loops"

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int count=1;
int n=20;
while(count<=n){                            //output:- 1 2 3 4 .......... 20
  cout<<count<<" ";
  count++;
}
cout<<endl;
  return 0;
}

// DEFINE FOR LOOPS := it is similiar to a while loop but in for loop we combine all the things in the parenthesis together 
// for(initialisation;condition;updation){
//            cout<<i; 
//                     }



// question print numbers between 1 to 10 using for loops

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])        // output:= 1 2 3 4 5 6 7 8 9 10
{
    for(int i=1;i<=10;i++){
        cout<<i<<" ";
    }
    

    return 0;
}




// QUESTION PRINT A PROGRRAME FOR THE SUM OF NUMBERS TILL N
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int n=3;
  int sum=0;
  for(int i=1 ; i<=n; i++) {                       // output:- sum=6 
    sum=sum+i;                                      
  }
  cout<<"sum="<<sum;
  
  return 0;
}


// write a programme to print the sum of numbers till n in WHILE LOOP 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int i=1;                                      // OUTPUT=> sum=15
  int n=5;
  int sum=0;
  while(i<=n){
    sum=sum+i;
    i++;
  }
cout<<"sum = "<<sum;
  
  return 0;
}



// WE CAN ALSO USE A TERM CALLED "BREAK"  to stop a loop from their respective conditions in the statement 
// example 

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
int n=60;
int sum=0;
 for(int i=1;i<=n;i++){
    sum=sum+i;
    if(i==5){                   // output=>  sum=15
        break;
    }
 } 
 cout<<"sum="<<sum;
  return 0;
}


// QUESTION-WRITE A PROGRAMME TO FIND THE SUM OF ALL THE ODD NUMBERS TILL N USING FOR LOOP 
 #include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int sum=0 , n=50;
  for(int i=1;i<=n;i++){                      // OUTPUT- ODD sum=625
    if(i%2!=0){
      sum=sum+i;
    }
    
  }
cout<<"ODD sum="<<sum;

  return 0;
}



// QUESTION-WRITE A PROGRAMME TO FIND THE SUM OF ALL THE ODD NUMBERS TILL N USING FOR LOOP 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int i=1,n=50,sum=0;
  while(i<=n){
    if(i%2!=0){                      // output- odd sum=625
      sum=sum+i;
  }
  i++;
}
cout<<" odd sum"<<sum;
  return 0;
}












































































































































































































































































































































































































































































































































































































































































































































































