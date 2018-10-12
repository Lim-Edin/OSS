#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  int num;
  while(1){
    cout<<"******구구단 출력 프로그램******"<<endl;
    cout<<"몇 단?: (종료시 0을 누르시오)";
    cin>>num;
    if (num!=0)
    {
      for (int i=1;i<=9;i++)
      {
      cout<<num<<"*"<<i<<"="<<num*i<<endl;
      }
    }
    else exit(1);
  }
  return 0;
}

//이미 다 짜져있음. 9단 추가할 필요 없는 코드-2014104110 신기성