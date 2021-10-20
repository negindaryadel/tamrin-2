#include <iostream>

using namespace std;

int main()
{
  int n , sum=0;
  string op;


  while (true)
  {
     cout<<"enter n : ";
      cin>>n;
       sum+=n;


     cout<<" do you want continue? ";
      cin>>op;

      if(op=="yes")
       {

        continue;
         sum+=n;
       }


         if (op=="exit");
break;}



  cout<<"sum is = "<<sum;
    return 0;
}
