#include<iostream>
using namespace std;
int main(){
    float base_num;
    float ad_num;
    cin>>base_num;
    ad_num = base_num - int(base_num);
    if(0<=ad_num && 0.2>=ad_num){
        cout<<int(base_num)<<"-"<<endl;
    }
    else if(0.7<=ad_num && 0.9>=ad_num){
        cout<<int(base_num)<<"+"<<endl;
    }
    else{
        cout<<int(base_num)<<endl;
    }

    cout<<"ad_num"<<" "<<ad_num<<endl;
    cout<<"base_num"<<" "<<base_num<<endl;
    cout<<"int(base_num)"<<" "<<int(base_num)<<endl;

   return 0;
}
//しっかり動かなかった