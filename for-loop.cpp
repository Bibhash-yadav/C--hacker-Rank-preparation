#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;

   for(int i=a;i<=b;i++){
       

       switch(i)
       {
       case 1:cout<<"one"<<endl;continue;
       case 2:cout<<"two"<<endl;continue;
       case 3:cout<<"three"<<endl;continue;
       case 4:cout<<"four"<<endl;continue;
       case 5:cout<<"five"<<endl;continue;
       case 6:cout<<"six"<<endl;continue;
       case 7:cout<<"seven"<<endl;continue;
       case 8:cout<<"eight"<<endl;continue;
       case 9:cout<<"nine"<<endl;continue;
              
       default:if(i%2==0){
                cout<<"even"<<endl;
                
       }
                else{
                    cout<<"odd"<<endl;
                    
                  }
   }
   }
    return 0;

}