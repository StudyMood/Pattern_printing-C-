#include <iostream>
using namespace std;

int main() {
    int i,j;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            if(j <= i){
                cout<<" "<<i;
            }
            else{
                cout<<" 0";
            }
        }
        cout<<endl;
    }
}
