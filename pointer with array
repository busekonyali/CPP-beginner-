#include <iostream>

using namespace std;
void arr(int*,int);
int main()
{
int numbers[5]={7,3,6,2,1};
int arraysize=sizeof(numbers)/sizeof(numbers[0]);
for(int i=0;i<arraysize;i++){
    cout<<"numbers["<<i<<"]="<<numbers[i]<<endl;

}
 arr(numbers,arraysize);
cout<<endl;
for(int i=0;i<arraysize;i++){
cout<<"numbers["<<i<<"]="<<numbers[i]<<endl;
}
    return 0;
}
void arr(int*numbers ,int msize){
    for(int i=0;i<msize;i++){
        numbers[i]*=4;
    }
}
