/*
    Kadane's Algorithm

Tags: 
        1) DP
        2) Greedy



    Initialisation:
        maximum=INT_MIN  so that if only negative numbers are present they can't be any error
        sum=0
    
    Algo:
        1) Traverse each element in the array
        2) Each time add the element to the sum variable
        3) And check if it is greater than the max sum till time
        4) If greater assign that to maximum variable
        5) If the sum is less that 0 then make it 0.

Time Complexity: **O(n)**
Space Complexity: **O(1)**

*/

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