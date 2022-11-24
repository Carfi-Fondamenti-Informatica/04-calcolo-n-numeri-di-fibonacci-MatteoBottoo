#include <iostream>
using namespace std;

int main() {
   int a=0,b=1,i=2,n=0;
   
    cin>>n;
   
    if (n>=2){
       
        cout<<b<<endl;
       
        while(i++<=n){
           
            cout<<a+b<<endl;
           
            if(a<b){
               
                a+=b;
               
            }else{b+=a;}
        }
       
    }else{
       
        cout<<"errore"<<endl;
       
    }   
   return 0;
}
