#include<iostream>

using namespace std;

int numOf,result=0,a;

void Add ()
{
    int numOf,result=0,a;

    cout<<"Enter the number of numbers + \n";
    cin>>numOf;

     for(int i=0 ; i<numOf ; i++)
    {
        cout<<"Enter num. \n";
        cin>>a;

        result+=a;
    }

    cout<<result<<endl;

}
void Minus ()
{
    int numOf,result=0,a;

    cout<<"Enter the number of numbers - \n";
    cin>>numOf;

     for(int i=0 ; i<numOf ; i++)
    {
        cout<<"Enter num. \n";
        cin>>a;

        result-=a;
    }

    cout<<result<<endl;

}

void Multi ()
{
    int numOf,result=0,a;

    cout<<"Enter the number of numbers * \n";
    cin>>numOf;

     for(int i=0 ; i<numOf ; i++)
    {
        cout<<"Enter num. \n";
        cin>>a;

        result*=a;
    }

    cout<<result<<endl;

}
void Divide ()
{
    int numOf,result=0,a;

    cout<<"Enter the number of numbers / \n";
    cin>>numOf;

     for(int i=0 ; i<numOf ; i++)
    {
        cout<<"Enter num. \n";
        cin>>a;

        result/=a;
    }

    cout<<result<<endl;

}

int main ()
{
    int choose;

    cout<<"             *****           ******************\n";
    cout<<"             *****           *                *\n";
    cout<<"             *****           * The Calculator *\n";
    cout<<"             *****           *                *\n";
    cout<<"           *********         ******************\n";
    cout<<"            *******\n";
    cout<<"             *****\n";
    cout<<"              ***\n";
    cout<<"               *\n";

    cout<<"\n*Choose the way you want:\n                     1-Add.\n                     2-Minus.\n                     3-Multi.\n                     4-Divide.\n";
    cin>>choose;

    switch(choose)
    {

        case 1: Add();    break;
        case 2: Minus();  break;
        case 3: Multi();  break;
        case 4: Divide(); break;
        default: cout<<"Wrong number. \n"; break;
    }

    return 0;
}
















