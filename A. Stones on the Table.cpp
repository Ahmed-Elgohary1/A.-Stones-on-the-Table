#include <iostream>
using namespace std;
int main()
{
    string co;
    int n,i, coun=0;
    cin>>n>>co;
    for (i=0; i<(n-1); i++)///////////////////266 A//stones on the table////
    {

     if(co[i]==co[i+1]){
            coun++;
     }
    }
    cout<<coun;
    return 0;
}
