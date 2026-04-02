#include <iostream>
using namespace std;

int main(){
    int i,j;

    for(i=1;i<=5;i++){
        
        for(j=5;j>=1;j--){
            if(j <= i){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }

        cout<<endl;
    }
}
//====================method 2====================