#include"mylib.c"
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    int j=0;
    int*new=malloc(namesSize*sizeof(int));
    int max=heights[j];
    for( int i=1;i<heightsSize;i++){
        if(max<heights[i]) {
            max=heights[i];
            new[j]=max;
            j++;
        }
        else 
            new[j++]=max;
    }
    *returnSize=j;
    return new;
}else return 0;
}
int main(){
    char str[]="UUUDDDRL";
    int a=judgeCircle(str);
    printf("a : %d\n",a);
}