 
 
 #include <bits/stdc++.h>
 using namespace std;
 typedef long long int ll;
 #define FID std::setw(2) << std::setfill('0')
 
 int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     int t{0};
     cin>>t;
     string time24;
 
     while(t--){
        cin>>time24;
        int hours = 10*(time24[0]-'0') + (time24[1]-'0');
        int minutes = 10*(time24[3]-'0') + (time24[4]-'0');


        if(hours==0)  cout<< "12"<<":"<< FID <<minutes<<" AM\n";
        if(hours>0&&hours<12)   cout <<FID<<hours<<":"<<FID<<minutes<<" AM\n";
        if(hours==12)   cout <<FID<<hours<<":"<<FID<<minutes<<" PM\n";
        if(hours>12)    cout <<FID<<(hours-12)<<":"<<FID<<minutes<<" PM\n";
       
        //cout<<hours<<" "<<minutes<<endl;
     }
 
 return 0;
 }