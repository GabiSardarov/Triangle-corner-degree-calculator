#include <iostream>
using namespace std;
int main(){
        int A;
        int B;
        int C;
        cout<<"Write Any Three Triangle Corner Sizes"<<endl;
        cin>>A;
        if(A==90){
                cin>>B;
                if(B<90){
                        C=A-B;
                        cout<<C<<endl;
                        cout<<"Triangle is right";
                }
                else{
                        cout<<"This type of triangle doesn't exist";
                }
                
        }
        
        
        if(A>90){
                cin>>B;
                if(B<A){
                        C=A-B;
                        cout<<C<<endl;
                        cout<<"Triangle is abtuse";
                }
                else{
                        cout<<"This type of triangle doesn't exist";
                }
        }
        //tu A naklebia 90;
        else{
                cin>>B;
                if(B>A){
                        C=A+B;
                        cout<<C<<endl;
                        if(C==90){
                                cout<<"Triangle is right";
                        }else{
                                cout<<"Triangle is right";
                        }
                }else{
                        C=180 - (A+B);
                        cout<<C<<endl;
                        if(C==90){
                                "Triangle is right";
                        }
                        if(C<90 || C==A){
                                cout<<"Samkutxedi acute";
                        }else{
                                cout<<"Triangle is abtuse";
                        }                
                }
                if(B==90){
                        C==B+A;
                        cout<<C<<endl;
                        cout<<"Triangle is abtuse";
                }
        }        
}
