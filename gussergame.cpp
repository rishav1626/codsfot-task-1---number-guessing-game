// guessing game made my rishav raj. 
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    string name;
    char input;
    int inputuser;
    cout<<"Enter your name";
    getline(cin,name);
    cout<<endl;
    do
    {
        srand(0);
        int variable=rand()%5+1;
        cout<<"Enter any number in between ranges 1 to 5";
        cin>>inputuser;
        cout <<endl;
        if(inputuser==variable)
        {
            cout<<"Congratuation ! You gussed the correct number "<<endl;
        }
        else{
            cout<<"Sorry,You gussed wrong number Try again"<<endl;
        }
        cout<<"Would you like to try again Y/N";
        cin>>input;
        cout<<endl;

    }
    while(input!='N');
    cout<<"Game end "<<endl;
}