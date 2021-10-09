#include<math.h>
#include "operator.h"
int b_to_dec(int n){  //1010
    int sum=0,rem=0,i=0;
    while(n!=0){
        rem=n%10;
        n/=10;
        sum+=rem*pow(2,i);
        ++i;
    }
    return sum;
}

int d_to_binary(int n){   //n=10
    int rem=0,sum=0;
    int arr[20];
    int i=1,j;
    while (n!=0) {
        rem = n % 2;    //rem=0,1,0,1
        n /= 2;         //n=5,2,1,0
        sum += rem * i; //sum=0,10,1010
        i *= 10;        //i=10,100,1000,10000
    }
    //printf("%d ",sum);
    return sum;
}

int sequence(int n){
    int n1=0,n2=0,n3=1;

    if(n==0){
        //printf("0");
        return 0;
    }
    else if(n==1){
        //printf("0");
        printf("%d ",n1);
        return 1;
    }
    else if(n==2){
        //printf("0");
        printf("%d ",n1);
        printf("%d ",n2);
        return 2;
    }
    else if(n<0){
        //printf("-1");
        return -1;
    }
    else if(n==3){
        //printf("1");
        printf("%d ",n1);
        printf("%d ",n2);
        printf("%d ",n3);
        return 3;
    }
    else{
        for(int i=3;i<n;i++){
            int sum=0;
            sum=n1+n2+n3;
            printf("%d ",sum);
            n1=n2;
            n2=n3;
            n3=sum;
        }
        return 4;
    }
}

int pattern(int n){
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=i;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void sum_multiple_of_seven(){
    int sum=0;int rem=0;int num;
    for(int i=11;i<100;i++){
        sum=0;
        rem=0;
        num=i;
        while(num!=0){
            rem=num%10;
            num/=10;
            sum=sum+rem;
        }
        if(sum%7==0){
            printf("%d ",i);
        }
        else
            continue;

    }
}

int base_n_power(int b,int p){
    if(b==0){
        return 0;
    }
    else if(p<0)
        return 0;
    else if(p==0)
        return 1;
    else
        return b*base_n_power(b,p-1);
}

int fact(int n){
    if(n<0)
        return 0;
    else if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

float sumofseries(int b,int p){
    int fact(int);

    float sum=0.0;
    int a=2*p-1;
    for(int i=1;i<=a;i=i+2){
        sum= sum+(pow(b,i)/fact(i));
        //printf("%f ",sum);
    }
    return sum;
}

void menudriven(){
    int ch;
    float n;
    printf("\nEnter no\n");
    scanf("%f",&n);
    printf("\nMENU DRIVEN PROGRAM\n");
    printf("\n\nMENU\n1.SQUARE ROOT\n2.NATURAL LOG\n3.LOG 10x\n4.POWER(x,n)\n5.COS(X)\n\n");
    printf("Choose any one from the Menu\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:printf("\n%f",sqrt(n));
        break;
        case 2:printf("\n%f",log(n));
        break;
        case 3:printf("\n%f",log10(n));
        break;
        case 4:printf("\nEnter exponent\n");
        int e;
        scanf("%d",&e);
        printf("\n%f",pow(n,e));
        break;
        case 5:printf("\n%f",cos(n));
        break;
    }
}

