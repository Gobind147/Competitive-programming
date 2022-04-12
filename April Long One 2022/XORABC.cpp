#include <bits/stdc++.h>
using namespace std;

int main() {
          
          int u;
          cin>>u;
          while(u--){
              int o;
              cin>>o;
              int iu =log2(o);
              double lk=log2(o);
              if(o&1 || iu==lk){
                  cout<<-1<<endl;
              }
              else{
                  int p=1;
                  int r,s,t;
                  while(p<32){
                      if((o&(1<<p))!=0){
                          r=o&(1<<p);
                          break;
                      }
                      p++;
                  }
                  s=(o-r)/2;
                  t=o/2;
                  r=r/2;
                  std::cout << s << " " << r << " " << t << std::endl;
              }
          }
          
          return 0;
 
}
