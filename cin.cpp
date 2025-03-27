#include <iostream>
using namespace std;

int main(){
    float age;
    cout <<"enter the age ";
    cin>>age;
    
    if(age<18){
        cout <<"siniar ";
        cin>>age;
    }
     else{
        cout <<"juniar ";
    };
    return 0;
}
