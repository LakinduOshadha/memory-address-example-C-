// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

int main() {
    float miles[10]={240.5,300.0,189.6,310.6,280.7,216.9,199.4,160.3,177.4,192.3};
    float gallons[10]={10.3,15.6,8.7,14,16.3,15.7,14.9,10.7,8.3,8.4};
    float mpg[10];
    float *milesPt,*gallonsPt,*mpgPt; //ptr can point to an address which holds float data

    cout<<"mpg = [  ";
    for(int i=0;i<10;i++) {
        // getting the memory address of a variables
        milesPt = &miles[i];
        gallonsPt = &gallons[i];
        mpgPt = &mpg[i];

        *mpgPt = *milesPt / *gallonsPt;
        mpg[i] = *mpgPt;

        cout<<*mpgPt<<"  ";
    }
    cout<<"]";
    return 0;
}
