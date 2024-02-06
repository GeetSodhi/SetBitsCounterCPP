#include<iostream>
using namespace std;
int setbits(int a,int b){
    int c=a&b;
    int count=0;
    while (c!=0)
    {
        if(c&1){
            count++;
        }
        c=c>>1;

        /* code */
    }
    return count;
    
}
int main(){
    int a;
    cout << "enter a :" << endl;
    cin >> a;
    int b;
    cout << "enter b :" << endl;
    cin >> b;
    int OneBits=setbits(a,b);
    cout<<"No. of 1 bits in "<<a<<"&"<<b<<" are "<<OneBits;


return 0;
}