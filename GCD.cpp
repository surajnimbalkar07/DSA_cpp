#include <iostream> 
using namespace std;

 int Gcd(int n1,int n2){
    
    for(int i= min(n2,n1);i>=1;i--){
        if( n1 % i==0 && n2 % i==0){
            return i;  
            
        }
    }
   return 1;
}

int main(){

   
    cout<<Gcd(20,40);
    return 0;
}