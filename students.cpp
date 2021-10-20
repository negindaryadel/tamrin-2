#include <iostream>

using namespace std;

int main()
{
    int n,score,max=0,min=30;
    float avg=0,sum=0;

    cout<<"enter number of students ";
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cout<<"enter score : " ;
        cin>>score;
        sum+=score;
        avg=sum/n;
        if(max<score)
            max=score;
        else if (min>score)
            min=score;

    }
cout<<"avg is : "<<avg<<endl;
cout<<"min is : "<<min<<endl;
cout<<"max is : "<<max<<endl;
    return 0;
}
