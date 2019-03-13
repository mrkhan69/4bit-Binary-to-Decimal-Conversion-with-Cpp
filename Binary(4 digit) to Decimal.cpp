#include<iostream>
#include<string>
using namespace std;

int main()
{
    string num; 
    cout<<"Enter 4 digit binary number: "<<endl;
    cin>>num;
    int dec_value = 0;
    int base = 1;

    int len = num.length();
    if(len ==4)
  {
       for (int i=len-1;i>=0;i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    cout<<"Decimal value for number "<<num<<" is: "<<dec_value<<endl;
  }
  else
  {
      cout<<"Please enter 4 digit binary number"<<endl;
        
  }

}
