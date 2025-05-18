#include <iostream>

using namespace std;
int maxx(int* arr,int n);
int minn(int* arr,int n);
int ort(int*arr,int n);
int control(int* arr,int* arr2,int a,int n);
int main()
{
  int n;
  cout<<"enter size"<<endl;
  cin>>n;

  int* arr=new int[n];
  int* arr2=new int[n];

  for(int i=0;i<n;i++){
      cout<<"enter "<<i+1<<" inci eleman"<<endl;
     cin>>arr[i];
  }
cout<<"max: "<<maxx(arr,n)<<endl;
cout<<"min: "<<minn(arr,n)<<endl;

int avarage=ort(arr,n);
cout<<"ort: "<<avarage<<endl;

int m=control(arr, arr2, avarage, n);
cout<<"ortalamadan büyük elemanlar: "<<endl;
 for(int i=0;i<m;i++){
    cout<< arr2[i]<<" ";
 }

delete [] arr;
delete [] arr2;
    return 0;
}
int maxx(int* arr,int n){
    int m;
    m=arr[0];
  for(int i=0;i<n;i++){
        if(m<arr[i]){
            m=arr[i];
        }
  }

return m;
}


int minn(int* arr,int n){
       int y;
    y=arr[0];
  for(int i=0;i<n;i++){
        if(y>arr[i]){
            y=arr[i];
        }
  }

return y;
}


int ort(int*arr,int n){
      int sum=0;
 for(int i=0;i<n;i++){

        sum+=arr[i];

  }
return sum/n;

}
int control(int* arr,int* arr2,int ort,int n){
    int index2=0;

for(int i=0;i<n;i++){
        if(arr[i]>ort){
        arr2[index2]=arr[i];
        index2++;
        }

  }
return index2;
}
