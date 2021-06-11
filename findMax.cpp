// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

void findMax(int a,int b,int &maxi) {
    if (a>b) maxi=a;
    else maxi=b;
}

int main(){
    int a,b;
    int maxi;

    cout<<"Enter two numbers: "; cin>>a>>b;
    findMax(a,b,maxi);
    cout<<"/nThe maximum number : " <<maxi;
    return 0;
}
