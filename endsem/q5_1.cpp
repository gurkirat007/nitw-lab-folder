#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

int main(){
   ifstream in1("input.txt");
   string c;
   getline(in1,c);
   in1.close();

  string h;

  for(int i=0;i<c.length();){
      char g=' ';
      while(c[i]!=' '){
              g+=c[i];
              i++;
      }
      h+=g;
      if(c[i]==' '){
          i++;
      }
  }

  string p,k;
  for(int i=0;i<h.length();i++){
      k=h[i];
      for(int j=0;j<k.length();j++){
          if(k[j]=='a' && k[j+1]=='l'){
             p+=k;
          }
      }
  } 

    ofstream out("output.txt");
    out<<p;
    out.close();
    return 0;
}