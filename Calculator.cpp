#include<iostream>

using namespace std;

void Option();
int numOf,result=0,a;


void Retry ()
{
	char retryOption;
	cout<<"Want to calculate again? (y/n)";
	cin>>retryOption;
	if(retryOption == 'y' || retryOption == 'Y')
		Option();
	else
		return;
}
void Add ()
{
    int numOf,result=0,a;

    cout<<"Enter the number of numbers + \n";
    cin>>numOf;

     for(int i=0 ; i<numOf ; i++)
    {
        cout<<"Enter num."<<i+1<<" \n";
        cin>>a;

        result+=a;
    }

    cout<<"Result = "<<result<<endl;
    Retry();

}
void Minus ()
{
    int numOf,result=0,a;

    cout<<"Enter the number of numbers - \n";
    cin>>numOf;

     for(int i=0 ; i<numOf ; i++)
    {
        cout<<"Enter num."<<i+1<<" \n";
        cin>>a;

        result-=a;
    }

    cout<<"Result = "<<result<<endl;
    Retry();

}

void Multi ()
{
    int numOf,result=0,a;

    cout<<"Enter the number of numbers * \n";
    cin>>numOf;

     for(int i=0 ; i<numOf ; i++)
    {
        cout<<"Enter num."<<i+1<<" \n";
        cin>>a;

        result*=a;
    }

    cout<<"Result = "<<result<<endl;
    Retry();

}
void Divide ()
{
    int numOf,result=0,a;

    cout<<"Enter the number of numbers / \n";
    cin>>numOf;

     for(int i=0 ; i<numOf ; i++)
    {
        cout<<"Enter num."<<i+1<<" \n";
        cin>>a;

        result/=a;
    }

    cout<<"Result = "<<result<<endl;
    Retry();

}
void Option ()
{
    int choose;

    cout<<"\n*Choose the way you want:\n                     1-Add.\n                     2-Minus.\n                     3-Multi.\n                     4-Divide.\n";
    cin>>choose;

    switch(choose)
    {

        case 1: Add();    break;
        case 2: Minus();  break;
        case 3: Multi();  break;
        case 4: Divide(); break;
        default: cout<<"Wrong number. \n"; Retry(); break;
    }
}
int main ()
{
    cout<<"             *****           ******************\n";
    cout<<"             *****           *                *\n";
    cout<<"             *****           * The Calculator *\n";
    cout<<"             *****           *                *\n";
    cout<<"           *********         ******************\n";
    cout<<"            *******\n";
    cout<<"             *****\n";
    cout<<"              ***\n";
    cout<<"               *\n";

    Option();
    return 0;
}
















