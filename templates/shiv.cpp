// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<math.h>
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"NOT Prime";
            break;
        }
        else{
            cout<<"Prime";
        }
    }
    

    return 0;
}