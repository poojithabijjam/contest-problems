#include<iostream>
using namespace std;
void fun(int);
int main(){int t,n[10];
        cin>>t;
        for(int i=1;i<=t;i++)
        { cin>>n[i];
                 //fun(n);
        }
        for(int j=1;j<=t;j++)
        {
                fun(n[j]);
        }
        //fun(16);
        return 0;
}
void fun(int n){
            for(int k=1;k<=n;k++)
                        {
                                        if(((k%3)==0) && ((k%5)==0))
                                                        {
                                                                            cout<<"FizzBuzz"<<endl;
                                                                                    }
                                                else if((k%3)==0)
                                                                {
                                                                                    cout<<"Fizz"<<endl;
                                                                                            }
                                                        else if((k%5)==0)
                                                                        {cout<<"Buzz"<<endl;
                                                                                    }
                                                            else
                                                                        {
                                                                                        cout<<k<<endl;
                                                                                            }
                                                                }
}

~
~
~