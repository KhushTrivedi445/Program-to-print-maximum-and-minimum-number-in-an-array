#include<Stdio.h>
int main () {
int n;
printf("Enter the size of the array :");
scanf("%d",&n);

int a[n];
printf("The array is :");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int max=a[0];
int min =a[1];
for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    } else if(a[i]<min){
        min=a[i];
    }
}

printf("The maximum number is %d\n",max);
printf("The minimum number is %d\n",min);

return 0;
}