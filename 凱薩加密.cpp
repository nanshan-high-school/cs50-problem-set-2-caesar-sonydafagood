#include <iostream>
using namespace std;

int main() {
  string text;
  int digits;
  cout<<"請輸入你想加密的內容:";
  cin>> text;
  cout<<"請輸入你加密後想遞移的位數";
  cin>> digits;
  int len = text.length();
  for(int i=0; i<len; i++){
      text[i]=text[i]+digits;
      if(text[i]<122&&text[i]-digits>97){
          cout<<text[i];
      }
      else if(text[i]>122){
          text[i]=text[i]-26;
          cout<<text[i];
      }
      else if(text[i]<90&&text[i]>65){
          cout<<text[i];
      }
      else if(text[i]>90){
          text[i]=text[i]-26;
          cout<<text[i];
      }
      else{
          text[i]=text[i]-digits;
          cout<<text[i];
      }
  }
}
