#include <iostream>
#include <cstdlib>
using namespace std;
int largest (const int *n, int size);
int main()
{
    int re=0;
    int msize=10;
int arr[msize];
for(int i=0;i<msize;i++){
    *(arr+i)=rand()%10;

}
cout<<"array"<<endl;
for(int i=0;i<msize;i++){
   cout<<*(arr+i)<<" ";

}
cout<<"new" <<endl;
re=largest (arr,10);
cout<<re;
    return 0;
}
int largest (const int *n, int msize){
    int l=0;
    for(int i=0;i<msize;i++){
    if(*(n+i)>n[l]){
        l=*(n+i);

    }
    }
    return n[l];


}
