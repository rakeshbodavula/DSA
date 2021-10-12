#include<iostream>
using namespace std;

int Kadane_Algo(int arr[],int size){
    int maximum_sum=INT_MIN,counter_sum=0;
    for(int i=0;i<size;i++){
        counter_sum+=arr[i];
        maximum_sum=max(maximum_sum,counter_sum);
        if(counter_sum<0) counter_sum=0;
    }
    return maximum_sum;
}

int main(){
    int array[]={-2,-3,4,-1,-2,1,5,-3};
    int max_sum=Kadane_Algo(array,8);
    cout<<"The maximum subarray sum is: "<<max_sum;
}