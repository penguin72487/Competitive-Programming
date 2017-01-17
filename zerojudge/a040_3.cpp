#include <iostream>

using namespace std;

string word[10]={"零","壹","貳","參","肆","伍","陸","柒","捌","玖"} ;

void pt (int in0 ){
     //仟----------------------------------
     if (in0/1000>0){
        cout <<word[in0/1000] <<"仟" ;
     }
     //佰----------------------------------
     if (in0/100%10>0 ){
        cout <<word[in0/100%10] <<"佰" ;
     }
     if (in0/1000>0 && in0/100%10==0 && in0%100>0){
        cout <<word[0] ;
     } 
     //拾----------------------------------
     if (in0/10%10>0 ){
        cout <<word[in0/10%10] <<"拾" ;
     }
     if (in0/100>0 &&in0/10%10==0 && in0%10 >0 && in0/100%10>0){
        cout <<word[0] ;
     }
     //個----------------------------------
     if (in0%10>0 ){
        cout <<word[in0%10] ;
     }
     //------------------------------------
}

int main()
{
    int in=0 ;
    while (cin>>in){
          //億----------------------------------
          if (in/100000000>0){
             pt(in/100000000) ;
             cout <<"億" ;
          }
          //萬----------------------------------
          if (in/10000%10000>0){
             
             if (in/10000000%10==0 && in/100000000>0){
                cout <<word[0] ;
             }
             
             pt(in/10000%10000) ;            
             cout <<"萬" ;
          }
          //個----------------------------------
          if (in/10000>0 && in/1000%10==0 && in%1000>0){
                cout <<word[0] ;
          }
          
          pt(in%10000) ;
          if (in==0){
             cout <<word[0] ;
          }          
          //------------------------------------
          cout<<endl ;
          
    }
}