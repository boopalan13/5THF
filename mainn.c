#include<stdio.h>
#include<inttypes.h>
void rightRotate(uint32_t number,int rotations){
    printf("%u",(number>>rotations) | (number<<32-rotations));
    printf("\n");
}
void leftRotation(uint32_t number, int rotations){
    printf("%u",(number<<rotations)|(number>>32-rotations));
    printf("\n");
}
int main(){
    int condition = 1;
    int number,rotationType,rotation;
    while(condition){
        printf("Enter the number\t\t\t : ");
        scanf("%d",&number);
        if(number==0){
            printf("Code exited.!");
            return 0;
        }
        else{
            printf("'1' to Right Rotate, '2' to Left Rotate\t : ");
            scanf("%u",&rotationType);
            printf("Enter the number of rotations\t\t : ");
            scanf("%u",&rotation);
            if(rotationType==1){
                rightRotate(number,rotation);
            }
            else if(rotationType==2){
                leftRotation(number,rotation);
            }
            else
                printf("invalid input.!\n");
        }       
    }

}