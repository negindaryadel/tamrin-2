#include <iostream>

using namespace std;

int main()
{
   int hour , minute , second;
   cout<<"enter hour: minute: second "<<endl;
   cin>>hour>>minute>>second;
   cout<<"time is "<<hour<<":"<<minute<<":"<<second<<endl;
   second=(hour*3600)+(minute*60)+second;

   cout<<"second is: "<<second+minute;

    return 0;
}
