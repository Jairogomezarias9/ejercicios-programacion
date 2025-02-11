 #include <iostream>
 #include <string>
 using namespace std;

 int main() {
 
 
 int h, m, s;
 string horas,minuts,segons;
    


 cin>>h >> m >> s;
 s=s+1;

 if(s>=60){
    s=0;
    m=m+1;
 }

  if(m>=60){
  
    m=0;
    h=h+1;
 }
     
 if (s<10){
   segons="0";
   }


 if (m<10){
      minuts="0";
  }
 
 if (h<10) { 
     horas="0";
 }

 if(h==24) {
    h=0;
    
}
 cout<<horas<<h<<":"<<minuts<<m<<":"<<segons<<s<<endl;
 
}
 
 


 
 
