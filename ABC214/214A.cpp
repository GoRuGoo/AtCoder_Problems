#include<iostream>
using namespace std;
int main(){
    int contast_number=0;
    cin>>contast_number;
    if(1<=contast_number && contast_number<=125){
        cout<<"4"<<endl;
    }
    else if (126<=contast_number && contast_number<=211){
        cout<<"6"<<endl;
    }
    else{
        cout<<"8"<<endl;
    }
}