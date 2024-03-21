#include<iostream>
using namespace std;
int main(){

int w ;
cout<<"";
cin>>w;
if((1<=w)&&(w<=100)){
if((w %2==0)&&(w>2)){
cout<<"yes";
}
else{
cout<<"No";
}
}
else{
    cout<<"invalid weight";
}
}