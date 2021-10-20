#include <iostream>

using namespace std;

int main()
{
   int hour , minute , second ,time;
   /*1 hour = 60 minute;
   1 minute = 60 second;
   1 hour = 3600 second ;*/

   cout << " enter time : ";
   cin>>time;
   hour = time / 3600;
   time = time % 3600;
   minute = time / 60;
   second = time % 60;
   cout<<hour<<":"<<minute<<":"<<second;


    return 0;
}
