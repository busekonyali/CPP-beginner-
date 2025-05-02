#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ofstream filee("my.txt");
  if(filee.is_open()){
    filee<<"my name is buse"<<endl;
    filee<<"ı love chocalate";
  }else{
  cerr<<"hataa";
  return 1;
}
  ifstream filee2("my.txt");
  string satir;
  if(filee2.is_open()){
        cout<<"dosya içeriği";
  while(getline(filee2,satir)){
    cout<<satir<<endl;

  }
  filee2.close();

  }else{
  cout<<"hata";
  return 1;
  }





    return 0;
}
