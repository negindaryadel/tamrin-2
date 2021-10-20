#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int random;
    string start;
   cout<<"enter start to random number"<<endl;
   cin>>start;
   if (start == "start")
   {

       srand((unsigned)time(0));
		random = (rand()%6)+1;
		cout<<random<<endl;
   }
   if(random==6)
   {
       cout<<"you can enter start "<<endl;
       cin>>start;
        if(start=="start")
   {

       srand((unsigned)time(0));
		random= (rand()%6)+1;
		cout<<random<<endl;
   }


   }
    return 0;
}
