#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int r=1;r<=n;r++){
        //int val=r;
        for(int c=1;c<=r;c++){
         cout<<r+c-1;
         //cout<<val++;
        }
        cout<<endl;
    }
    return 0;
}