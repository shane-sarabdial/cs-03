/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
int n;
while (cin>>n)
  {
   int i;
   int a=n;
   int count=0;
   while(n<=3)
   {
    if(a=0)
    {
      cout<<"0"<<"\n";
     break;
    }
    else
      cout<<"1"<<"\n";
   break;
   }
   if (n>2)
   {
    while(n%2==0)
    {
     n/=2;
     count++;
    }
    if (count>0)
    {
     cout<<"0"<<"\n";
    }
    else
    {
      for ( i = 3 ; i<a; i++)
      {
      if (a%i==0)
      {
        cout<<"0"<<"\n";
        break;
      }
      else
        cout<<"1"<<"\n";
        break;
      }
    }
   }
  }
return 0;
}



