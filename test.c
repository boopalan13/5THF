#include"stdio.h"
#include"math.h"
#include "additional.h"
#include"string.h"
#include"ctype.h"
typedef enum{false,true}bool;
int main(){
    start();

        /* 
        char name[]="Boopalan";
        for (int i = 0; i < strlen(name); i++)
        {
            printf("name[%d] : %c\n",i,name[i]);        
        }
        */


        // length of the number
        /*int numbers=12346,count=0;
        while(numbers>0){
            numbers/=10;
            count++;
        }
        printf("length of the numbers : %d\n",count);*/


        //sum of numbers
        /*int num=11111,sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        printf("num of sum : %d\n",sum);*/


        //reverse a number
        /*int num=654321,rev=0;
        while(num>0){
            int rem=num%10;
            rev=rev*10+rem;
            num/=10;
        }
        printf("rev\t : %d\n",rev);*/


        //swap
        /*int a=5,b=6;
        printf("a\t : %d\n",a);
        printf("b\t : %d\n",b);
        printsln();
        a=a^b;
        b=a^b;
        a=a^b;
        printf("a\t : %d\n",a);
        printf("b\t : %d\n",b);
        printsln();
        a=a+b;
        b=a-b;
        a=a-b;
        printf("a\t : %d\n",a);
        printf("b\t : %d\n",b);*/


        //<=================================>in-place string reverse using swap <================================>//
        /*
        char name[]="abc";
        int n = strlen(name);
        printf("sizeof  n: %d\n",n);
        int ptr1=0,ptr2=n-1;
        printf("name\t : %s\n",name);
        while(ptr2>ptr1){
            name[ptr1]=name[ptr1]^name[ptr2];
            name[ptr2]=name[ptr1]^name[ptr2];
            name[ptr1]=name[ptr1]^name[ptr2];
            ptr1++;
            ptr2--;
        }
        //puts(name);
        printf("reversed : ");
        puts(name);
        */
       //<-------------------------------- End of program -------------------------------->//
        /*
                                                    -
                                                    |
                                                    |
                                                    |
                                                    |
                                                    -
        */
        //<=================================>sum of non-prime numbers <================================>//
        /*int num[]={1,2,3,4,5,6,7},sum=0,n;
        n=sizeof(num)/sizeof(num[0]);
        
            for (int l = 0; l < n; l++)
            {               
                    if(num[l]==1){
                        printf("num[%d]\t : %d\n",l,num[l]);
                        sum+=num[l];
                        } 
                    else
                        {
                            for (int m = 0; m < num[l]/2; m++)
                    {
                        if(num[l]==2) 
                            continue;
                        else if ((num[l]%(m+2)==0))
                        {                               
                            printf("num[%d]\t : %d\n",l,num[l]);
                            sum+=num[l];
                            break;
                        }                       
                    }
                        }                                 
            }       
        printf("sum is\t : %d\n",sum);*/
        //<-------------------------------- End of program -------------------------------->//
        /*
                                                    -
                                                    |
                                                    |
                                                    |
                                                    |
                                                    -
        */
       //<=================================> sum of prime numbers<================================>//

        // int num[]={3,4,5},sum=0,n;
        // n=sizeof(num)/sizeof(num[0]);
        // for (int i = 0; i < n; i++)
        // {   
        //     if (num[i]==1){
        //         continue;
        //         }
        //     else if (num[i]==2 || num[i]==3)
        //     {
        //         printf("num[%d]\t : %d\n",i,num[i]);
        //         sum+=num[i];
        //     }
        //     else{
        //         for (int j = 0 ; j < (num[i]/2)  ; j++)
        //             {
        //                 if(!(num[i]%(j+2)==0)){
        //                     printf("num[%d]\t : %d\n",i,num[i]);
        //                     sum+=num[i];
        //                     break;
        //                 }
        //             }
                    
        //     }           
            
        // }printf("sum\t : %d\n",sum);
        //<-------------------------------- End of program -------------------------------->//

        
        //to find len of long numbers in single variable
        /*int num=123456;
        int n=(log10(num))+1;
        printf("size of num : %d\n",n);*/

        
        //armstrong or not                //ex: 153 = 1^3+5^3+3^3 = 153
        /*int num=54748,sum=0,n,dubnum;
        dubnum=num;
        n=(log10(num))+1;
        while(num>0){
            int rem=num%10;
            sum=sum+pow(rem,n);
            num/=10;
        }
        if(sum==dubnum)
            printf("armstrong\t : %d\n",sum);
        else
            printf("not armstrong\t : %d\n",sum);*/


        //strong number                   145 = 1+4!+5!=145
        /*int num=405,sum=0,n;
        n=(log(num))+1;
        while(num!=0){
            int fact=1;
            int rem=num%10;
            for (int i = rem; i > 0 ; i--)
            {   printf("%d ",i);
                fact=fact*i;
            }
            printf("fact\t : %d\n",fact);
            sum=sum+fact;
            printf("sum\t\t : %d\n",sum);
            printf("\n");
            num/=10;       
        }*/



       //asking input from user until he leav
        /*typedef struct{
            int carID;
            char carModel[15];
            int rentPerDay;
            } car;
            
            start();

            int true=1;
            car*cars[10];
            cars[0]=&(car){1001,"1001xyz",5000};
            cars[1]=&(car){1002,"1002xyz",6000};
            cars[2]=&(car){1003,"1003xyz",7000};
            cars[3]=&(car){1004,"1004xyz",8000};
            cars[4]=&(car){1005,"1005xyz",9000};
            cars[5]=&(car){1006,"1006xyz",10000};
            cars[6]=&(car){1007,"1007xyz",11000};
            cars[7]=&(car){1008,"1008xyz",12000};
            cars[8]=&(car){1009,"1009xyz",13000};
            cars[9]=&(car){1010,"1010xyz",14000};

            while(true){
                int ID,days;
                char c;
                printf("\n");
                printsln();
                printf("CarID starts from 1001 to 1010\n");
                printsln();
                printf("Enter the carID or to quite '0' : " );
                scanf("%d",&ID);
                //printf("Given carID is\t : %d\n",ID);
                if(ID==0)
                    true=0;
                else if(  ID>=1001 && ID<=1010){
                for (int i = 0; i < 10; i++)
                    {   
                        if((cars[i]->carID)==ID){
                        printf("carID\t\t : %d\n",cars[i]->carID);
                        printf("carModel\t : %s\n",cars[i]->carModel);
                        printf("rentPerDay\t : %d\n",cars[i]->rentPerDay);
                        printsln();
                        printf("you'd like to buy this for rent? y or n : ");
                        scanf(" %c",&c);
                        if(c=='y'){
                            printf("Days you require : ");
                            scanf("%d",&days);
                            printf("Totalrental cost : %d\n",cars[i]->rentPerDay*days);
                            break;
                        }
                        else
                            continue;           
                        }
                    }
                }
                else
                    printf("invalid option.!\n");
                while(getchar()!='\n');
            }   
                println();
                printf("This application is exited!\n");
                println();
        */



       //26-07-24
       //pattern printing 1                         //*
        /*int r;                                    //** 
        printf("Give number of rows\t : ");         //*** 
        scanf("%d",&r);

        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <=i; j++)
            {
                printf("*");
            }   
            printf("\n");           
        }*/


       //patern printing 2                      //*** 
        /*int r;                                //** 
        printf("Give number of rows\t : ");     //*
        scanf("%d",&r);

        for (int i = 1; i <= r; i++)
        {
            for (int j = r-i+1; j >0; j--)
            {   
                printf("*");
            }   
            printf("\n");    
        }*/



       //patern printing 3
        /*                                                              
        int r;
        printf("Give number of rows\t : ");   //*
        scanf("%d",&r);                      //** 
                                            //***
        for (int i = 1; i <= r; i++)
        {
           for (int j = 1; j <=r-i ; j++)
           {
            printf(" ");
           }
            for (int k = 1; k <=i; k++)            
            {
                printf("*");
            }
            printf("\n");
            
        }*/

        //pattern printing 4                      //*
        /*int r;                                   //***
        printf("Give number of rows\t : ");     //*****
        scanf("%d",&r);

        for (int i = 1; i <= r; i++)
        {
            for (int j = i; j <r; j++)
            {   
                printf("|");
            }
            for (int k = 1; k <=(i*2)-1 ; k++)            
            {   
                printf("*");
            }
            printf("\n");      
        }*/                                       

        //=================================>Diagonal star X <================================// 
        /*
        int r,i,j,k;
        printf("How many Rows need to print ? : ");
        scanf("%d",&r);
        for(i=0;i<r;i++){
            for(j=0;j<r;j++){
                if(i==j||i+j==r-1)
                    printf("*  ");
                else
                    printf("  ");
            
            }printf("\n");
        }
        */
        //<-------------------------------- End of program -------------------------------->//  

        /*
                                                    -
                                                    |
                                                    |
                                                    |
                                                    |
                                                    -
        */

        //<=================================> Plus star + <================================>//   
        /*
        int r,i,j,k;
        printf("How many Rows need to print ? : ");
        scanf("%d",&r);
        for(i=0;i<r;i++){
            for(j=0;j<r;j++){
                if(i==r/2||j==(r/2)+1)
                    printf("*  ");
                else
                    printf("  ");
            
            }printf("\n");
        }
        */   
        //<-------------------------------- End of program -------------------------------->//

        /*
                                                    -
                                                    |
                                                    |
                                                    |
                                                    |
                                                    -
        */

        //<=================================>Box star [] <================================>//
        /*
        int r,i,j,k;
        printf("How many Rows need to print ? : ");
        scanf("%d",&r);
        for(i=0;i<r;i++){
            for(j=0;j<r;j++){
                if((i==0)||(j==0)||(i==r-1)||(j==r-1))
                    printf("x  ");
                else
                    printf("   ");
            
            }printf("\n");
        }
        */
       //<-------------------------------- End of program -------------------------------->//
        /*
                                                    -
                                                    |
                                                    |
                                                    |
                                                    |
                                                    -
        */
        //<=================================>function pointer no argument -> 29/07/2024 <================================>//
        /*
        void fun(){printf("Call from function");}
        void (*funp)()=fun;
        funp();*/


        //function pointer with return (int)
        /*int add(int a,int b){return a+b;};
        int (*sum)(int,int)=add;
        printf("sum\t : %d\n",sum(5,7));
        */
       

        //<-------------------------------- End of program -------------------------------->//
        /*
                                                    -
                                                    |
                                                    |
                                                    |
                                                    |
                                                    -
        */
       //<=================================> inbuilt sort function <================================>//
 
        /*
        int compare(const void *a,const void * b){
        return (*(int*)a-*(int*)b);
        }
        
        int arr[]={2,2,1,4,7,8,2,4,9,3};
        int n=sizeof(arr)/sizeof(arr[0]);
        qsort(arr,n,sizeof(int),compare);

        for (int i = 0; i < n; i++)
        {
            printf("arr[%d]\t : %d\n",i,arr[i]);
        }
        */
        //<-------------------------------- End of program -------------------------------->//
        
        /*
                                                    -
                                                    |
                                                    |
                                                    |
                                                    |
                                                    -
        */

        //<=================================>bity=field <================================>//

        //bitfield  a->3 hence 4 2 1 => 7 value can only store , -2^n-1 to 2^(n-1)-1 -> -4 to 3 for positive , 4-7 for negative value
        /*struct{
            int a:3; 
        }bot;

        
        bot.a=4;
        //bot.b=2;

        printf("%d\n",bot.a);
        printf("%d",&bot);*/

        //<-------------------------------- End of program -------------------------------->//

        /*
                                                    -
                                                    |
                                                    |
                                                    |
                                                    |
                                                    -
        */
        
       //<=================================>upper-lower AND lower to upper <================================>//

       /*
       char text[26];
       fgets(text,sizeof(text),stdin);
       for(int i=0;i<26;i++){
        if(text[i]>=65 && text[i]<=65+26)
            {text[i]=text[i]|32;}
        else if(text[i]>=97 && text[i]<=97+26)
            {text[i]=(text[i])&(~32);}
        else
            return 0;
        printf("text[%d] : %c ",i,text[i]);
       }
       */

        //<-------------------------------- End of program -------------------------------->//

        /*
                                                    -
                                                    |
                                                    |
                                                    |
                                                    |
                                                    -
        */

        //<=================================>U-L using operators <================================>//

        /*
        char text[256];
        printf("Enter the text  : ");
        fgets(text,sizeof(text),stdin);
        for(int i=0;text[i]!='\0';i++){
            if(text[i]>='A' && text[i]<='Z')
                {text[i]=text[i]|32;}
            else if(text[i]>='a' && text[i]<='z')
                {text[i]=text[i]&(~32);}
            printf("%c",text[i]);
        }
        /*

       //<-------------------------------- End of program -------------------------------->//
       /*
                                                -
                                                |
                                                |
                                                |
                                                |
                                                -
       */
        //<=================================>first 100 primes <================================>//
        
        /*
        bool primeNum(int number){
            if(number==1)
                return false;
            for(int i=2;i*i<=number;i++){
                if(number%i==0)
                    return false;
            }
            return true;
        }
        int number=2,count=0;
        while(count<100){
            if(primeNum(number)){
                printf("count[%d] : %d\n",count,number);
                count++;
            } 
            number++;
        }
        */
        
       //<-------------------------------- End of program -------------------------------->//
       /*
                                                -
                                                |
                                                |
                                                |
                                                |
                                                -
       */
        //<=================================>odd r evn bitwise<================================>//
        /*
        int number;
        printf("Enter the number : ");
        scanf("%d",&number);
        if(number & 1){
            printf("Odd");
        }
        else{printf("Even");}
        */
       //<-------------------------------- End of program -------------------------------->//
       /*
                                                -
                                                |
                                                |
                                                |
                                                |
                                                -
       */
      //<=================================>pos or neg (bitwise) <================================>//
        /*
        int number;
        printf("Enter the number : ");
        scanf("%d",&number);
        if((number) & (1<<31)){
            printf("negative");
        }
        else{printf("positive");}
        */
       //<-------------------------------- End of program -------------------------------->//
       /*
                                                -
                                                |
                                                |
                                                |
                                                |
                                                -
       */
        //<=================================>power without pow() <================================>//
        /*
        int  power(int bas,int exp){
            int result;
            if(exp==0)
                return true;
            else{result =bas*power(bas,exp-1);}
        return result;
        }
        int a,b;
        printf("Enter the base and exponent\t : ");
        scanf("%d%d",&a,&b);
        printf("power of %d ^ %d\t\t\t : %d\n",a,b,power(a,b));
        */
        //<-------------------------------- End of program -------------------------------->//
        /*
                                                    -
                                                    |
                                                    |
                                                    |
                                                    |
                                                    -
        */
       //<=================================>decimal to binary <================================>//
       //<=================================>using dummy array to store all bits(32) <================================>//
        /*
        void decimaLtoBinaryBitwise(int number){
            int arr[31];
            for(int i =0;i<31;i++){
                arr[i]=number&1;
                number=number>>1;
            }
            for(int i=31;i>=0;i--){
                printf("%d",arr[i]);
            }
            printf("\n");
        }

        int a,result=0,base=1;
        printf("Enter the number : ");
        scanf("%d",&a);
        printf("Using Bitwise\n");
        decimaLtoBinaryBitwise(a);
        */
       
       //<=================================>decimal to binary using for loop alone all(32bits) <================================>//

       /*
       void toBinary(int number){
       for(int i=31;i>=0;i--){
       printf("%d",(number>>i)&1);
       }
       }
       */
        
       //<-------------------------------- End of program -------------------------------->//
       /*
                                                -
                                                |
                                                |
                                                |
                                                |
                                                -
       */
      //<=================================>given number is 2's power or not <================================>//
      /*
            if((number & (number-1)) == 0)
                2's power
      */
     //<-------------------------------- End of program -------------------------------->//
     /*
                                                -
                                                |
                                                |
                                                |
                                                |
                                                -
     */
    //<=================================>divisibleby bitwise for 8 number>>3 <================================>//
    /*
    int number;
    int condition=1;
    while(condition){
        printf("Enter the number : ");
        scanf("%d",&number);
        int dub=number;
        if(number==0){
            printf("-> code exited.!\n");
            return 0;
        }
        else{
            number=number>>3;
            if(number<<3 == dub )
                printf("-> Divisible\n");
            else
                printf("-> not Divisible\n");
        } 
            
    }
    */
   //<-------------------------------- End of program -------------------------------->//
   //<=================================>sort <================================>//
   /*
            #include<stdio.h>
            #include"mylib.h"
            int main(){
                int arr[]= {0,0,0,0,6,-9,-8,0};
                int size= sizeof(arr)/sizeof(arr[0]);
                int j=size-1,i=0;
                int *ptr=arr;

                while(i<size){
                    if(ptr[i]>ptr[j]){
                    swp(&ptr[i],&ptr[j]);
                    }
                    --j;
                    if(j<=i){
                        j=size-1;
                        i++;
                    }
                }

                printArray(ptr,0,size);
            }
   */
  //<-------------------------------- End of program -------------------------------->//
  /*
                                            -
                                            |
                                            |
                                            |
                                            |
                                            -
  */
    //<=================================> ab bc<================================>//
    //<=================================>    bc <================================>//
    /*
    char str[]="Hello this is";
    printf("%s\n",str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            for(int k=0;k<i;k++){
                printf(" ");
            }
            for(int j=i;j<strlen(str);j++){
                printf("%c",str[j]);
            }
            printf("\n");
        }
    }
    */
   //<-------------------------------- End of program -------------------------------->//
   /*
                                            -
                                            |
                                            |
                                            |
                                            |
                                            -
   */
  //<=================================> a <================================>//
  //<=================================> ab <================================>//
  /*
    char str[]="hello world computer";
    //printf("%s\n",str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            for(int k=0;k<=i;k++){
                printf("%c",str[k]);
            }
            // for(int j=i;j<strlen(str);j++){
            //     printf("%c",str[j]);
            // }
            printf("\n");
        }
    }
  */
 //<-------------------------------- End of program -------------------------------->//
    /*
                                                -
                                                |
                                                |
                                                |
                                                |
                                                -
    */
    //<=================================>to find a element in unsorted array <================================>//
    /*
    {
        int arr[]={2,3,1,4,6};
        int max = arr[0],min =arr[0],sum =0,res;
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
            sum+= arr[i];
            if(arr[i]<min){
                min = arr[i];
            }
            else if(arr[i]>max){
                max = arr[i];
            }
        }
        min-=1;
        res = (((max*(max+1))/2)-(min*(min+1))/2);

        printf("missing element %d\n" ,res-sum);
        printf("res element %d\n" ,min);
        printf("sum element %d\n" ,max);
    }
    */
    //<-------------------------------- End of program -------------------------------->//
    /*
                                                -
                                                |
                                                |
                                                |
                                                |
                                                -
    */
    //<=================================>find element <================================>//
    /*
    {
        int arr[]={1,2,4,8,9,11};
        //toSee(arr,0,sizeof(arr)/sizeof(arr[0]),4);
        int mid,p1=0,p2=(sizeof(arr)/sizeof(arr[0]))-1;
        int target=2;
        while(p1<=p2){
            mid=(p1+p2)/2;
            if(arr[mid]==target){
                printf("%d",mid);
                return mid;
                break;
            }
            else if(arr[mid]<target){
                p1=mid+1;
            }
            else{
                p2=mid-1;
            }
        }
        return -1;
    }
    */
    //<-------------------------------- End of program -------------------------------->//
    /*
                                                -
                                                |
                                                |
                                                |
                                                |
                                                -
    */
   //<=================================>isPali <================================>// 
   /*
 bool isPalindrome(char* s) {
    char*ch=malloc(strlen(s)*sizeof(char));
    int i=0,k = 0;
    for(i=0;i<strlen(s);i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            ch[k]=tolower(s[i]); k++;
        }
    }
    ch[k]='\0';
    int j=k-1;
    i=0;
    while(i<j){
        if(ch[i]!=ch[j])
            return false;
        i++;
        j--;
    }
    return true;

}
   */
  /*
                                            -
                                            |
                                            |
                                            |
                                            |
                                            -
  */
    //<=================================>qsort <================================>//
    /*
    int qsor(int arr[],int low,int high){
    if(low>=high)
        return false;
    int start=low;
    int end=high;
    int mid =(start+end)/2;
    int pivot=arr[mid];
    while(start<=end){
        while(arr[start]<pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<=end){
            swp(&arr[start],&arr[end],0);
            start++;
            end--;
        }
    }
    qsor(arr,low,end);
    qsor(arr,start,high);
    }
    */
    /*
                                                -
                                                |
                                                |
                                                |
                                                |
                                                -
    */
   //<=================================>occurance of dublicate <================================>//
    /*
    void sor(int arr[],int low,int high){
    if(low<high){
        int st=low;
        int en=high;
        int pivot=arr[(st+en)/2];
        while(st<=en){
            while(arr[st]<pivot){
                st++;
            }
            while(arr[en]>pivot){
                en--;
            }
            if(st<=en){
                int t=arr[st];
                arr[st]=arr[en];
                arr[en]=t;
                st++;
                en--;
            }
        }
        sor(arr,low,en);
        sor(arr,st,high);
    }

}

int * retArr(int arr[],int size, int * retSize)
{
    int c=0;
    int *ptr=malloc(size * sizeof(int));
    ptr[0] = -1;
    int temp = -10000;
        
        for(int i=0;i< size - 1;i++)
        {
         if(arr[i]==arr[i+1] && arr[i] != temp)
         {
            ptr[c] = arr[i];
            temp = arr[i];
            c++;
         }
      }
      if(temp == -10000)
         *retSize = 1;
      *retSize = c;
    return ptr;
}

int main(){
    int arr[]={4,3,1,2,5,0,5,1,0,-1,-3,-1,};
    int size=sizeof(arr)/sizeof(arr[0]);
    sor(arr,0,size-1);
    printArray(arr,0,size);

    int sii;
    int * ptr = retArr(arr,size,&sii);
    for (size_t i = 0; i < sii; i++)
    {
        printf("%d ",ptr[i]);
    }
    
}
    */
   //<-------------------------------- End of program -------------------------------->//
   /*
                                            -
                                            |
                                            |
                                            |
                                            |
                                            -
   */
   //<=================================>abcAD =1 <================================>//
    /*
    int countOfSpecialChars(char*str){
        int c=0;
        int upper[26]={0};
        int lower[26]={0};
        for(int i=0;str[i]!='\0';i++){
            if(isupper(str[i])){
                upper[str[i]-'A']=1;
            }
            else lower[str[i]-'a']=1;
        }
        for(int i=0;i<26;i++){
            if(lower[i]&&upper[i]) c++;
        }
        return c;
    }
    */
   //<-------------------------------- End of program -------------------------------->//
    end();
    return 0;
}