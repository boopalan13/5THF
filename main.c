#include"mylib.c"
int distinctAverages(int* nums, int numsSize) {
    int i,t=0;
    int min=10;
    int j=numsSize-1;
    int avg=0;
    if(numsSize==2) return 1;
    else{
        while(i<=j){
            avg=avg+(nums[i]+nums[j])/2;            
            t++;
            i++;
            j--;
            printf("avg : %d\n",avg);
        }
    }
    return avg/t;
}
int main(){
    int arr[]={10,2,2,0,4,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,size,sizeof(int),cmpa);
    int a=distinctAverages(arr,size);
    printf("avg : %d\n",a);
    
}