#include<stdio.h>

int funct(int n) {
    int i;
    int arr1[n], arr2[n], arr3[n];
    arr1[0]=arr2[0]=arr3[0]=0;
    arr1[1]=arr2[1]=arr3[1]=3;
    for(i=2; i<=n; i++) {
        arr1[i]=arr2[i-1]+arr3[i-2];
        arr2[i]=2*arr1[i];
        arr3[i]=3*arr1[i];
    }
    return arr1[n];
}


// int x;
void func(int n, int sum) {
    int k=0, j=0;
    if(n==0) return;
    k=n%10; j=n/10;
    sum=sum+k;
    func(j, sum);
    printf("%d",k);
}

// int area(int y) {
//     if(y%10==0) {
//         return (y+=(10+x++));
//         return x+10;
//     }
// }

void method1(int arr[], int start, int end) {
    int temp;
    while(start<=end) {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void method2(int arr[], int d, int n) {
    if(d==0)
        return;

    d=d%n;
    method1(arr, 0, d-1);
    method1(arr, d, n-1);
    method1(arr, 0, n-1);
}

int fn(int n) {
    static int s=0;
    int d;
    if(n!=0) {
        d=n%10;
        n=(n-d)/10;
        s=s+d    ;
        fn(n);
    }
    else
        return s;
}


// static int m=0;
// int find(int j) {
//     if(j>1) {
//         j=find(j/10)+(j%10);
//         m+=j;
//     }
//     else
//         j=0;
//     return j;
// }

int fun(int num) {
    int i, flag=0;
    for(i=2; i<num/2; i++) {
        if(num%i==0) {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return 0;
    else
        return 1;
}

int main() {
    // int a[]={5,7,8,1,7,9,5};
    // int i=0, n=7, sum=0, base=0, diff=0;
    // for(i=0; i<n; i++) {
    //     sum+=a[i];
    // }
    // base=sum/7;
    // for(i=0; i<n; i++) {
    //     if(a[i]<base)
    //         diff+=(base-a[i]);
    //     else
    //         diff+=(a[i]-base);
    // }
    // printf("%d", diff);

    // int a=2021, sum=0;
    // func(a, sum);
    // printf("%d", sum);

    // int n=500, flag=7, result=0, t=1;
    // while(n!=0) {
    //     result=result+((n%7)*t);
    //     n=n-(n%flag);
    //     t=t*10;
    //     n=n/flag;
    // }
    // printf("%d", result);

    // int x=10;
    // x++;
    // area(x)+x;
    // x+=10;
    // printf("%d", area(x));

    // int arr[6]={25,30,10,50,95,25};
    // int i=40;
    // int j=1;
    // do {
    //     arr[j]+=2*arr[j]+i++;
    //     j++;
    // }while(j<5);
    // printf("%d", arr[j-1]);

    // int n=5, i, j, temp, rem, num;
    // int arr1[]={1,22,252,5151,253};
    // for(i=0; i<n; i++){
    //     for(j=i+1; j<n; j++) {
    //         if(arr1[i]>arr1[j]) {
    //             temp=arr1[i];
    //             arr1[i]=arr1[j];
    //             arr1[j]=temp;
    //         }
    //     }
    // }
    // for(i=n-1; i>=0; i--) {
    //     num=0;
    //     temp=arr1[i];
    //     while(arr1[i]!=0) {
    //         rem=arr1[i]%10;
    //         num=num*10+rem;
    //         arr1[i]=arr1[i]/10;
    //     }
    //     if(num==temp) {
    //         printf("%d", num);
    //         break;
    //     }
    // }

    // int arr[]={1,2,3,4,5,6,7};
    // int n=7;
    // int i, d=2;
    // method2(arr, d, n);
    // for(i=0; i<7; i++) {
    //     printf("%d", arr[i]);
    // }

    // int i,j;
    // int arr[]={5,69,25,42,31,28,44};
    // int len=8, count=0;
    // for(i=0; i<len; i++) {
    //     if(arr[i]%3==0) {
    //         for(j=i; j<len; j++) {
    //             arr[j]=arr[j+1];
    //         }
    //         i--;
    //         len--;
    //     }
    // }
    // for(i=0; i<len; i++)
    //     count+=arr[i];

    // printf("%d", count);

    // int a, x, y, z=0;
    // for(x=0; x<100; x++) {
    //     for(y=x+1; y<5; y++) {
    //         z++;
    //     }
    //     a=y;
    //     while(z>x) {
    //         a=a*z;
    //         z--;
    //     }
    // }
    // printf("%d", a);

    // int i, j, z, hold, size;
    // int arr[]={19,14,7,13};
    // size=sizeof(arr)/sizeof(int);
    // i=size/4;
    // for(j=size/4; j<=size; j++) {
    //     for(z=j-i; z>0; z=z-i) {
    //         if(arr[z+i]>arr[z])
    //             break;
    //         else {
    //             hold=arr[z];
    //             arr[z]=arr[z+i];
    //             arr[z+i]=hold;
    //         }
    //     }
    // }
    // printf("%d", arr[2]);

    // int arr[]={2,3,4,5,6};
    // int i=0, a=0;
    // for(i=0; i<5; i++) {
    //     if(i%4 || i%5)
    //         a=a-arr[i];
    //     a=a+arr[i];
    // }
    // printf("%d", arr[a]);

    // int a, b;

    // a=fn(345);
    // b=fn(856);
    // printf("%d", a+b);

    // int i=7896;
    // int k;
    // k=find(k);
    // printf("%d", m);

    // int i,j;
    // int arr[]={6,17,47,21,45,15,23};
    // int len=7;
    // for(i=0; i<len; i++) {
    //     if(fun(arr[i])) {
    //         for(j=i; j<len; j++) {
    //             arr[j]=arr[j+1];
    //         }
    //         i--;
    //         len--;
    //     }
    // }

    // printf("%d", arr[3]);

    printf("%d", funct(9));

    int a[3];
    printf("\n%d", a[4]);
    return 0;
}