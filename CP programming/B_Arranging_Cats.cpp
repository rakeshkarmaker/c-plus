#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t{0};
    cin>>t;
    while(t--){
        int boxes{0}, answer{0},myStack{0};
        cin>>boxes;
        string  initial,final;
        cin>>initial>>final;
        
        for(int i=0;i<boxes;i++){
            if(initial[i]==final[i]){
                continue;
            }
            if(initial[i]>final[i]){
                if(myStack ==0){
                myStack++;
                answer++;
                }else if(myStack<0){
                myStack++;
                }else{
                    myStack++;
                    answer++;

                }

            }
            
            if(initial[i]<final[i]){
                    
                    if(myStack ==0){ 
                    
                    answer++;
                    myStack--;
                    }else if(myStack<0){
                    myStack--;
                    answer++;
                    }else{
                        myStack--;
                    }
                }   
            }
            cout<<answer<<endl;
        }

    return 0;
}
