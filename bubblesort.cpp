#include<stdio.h>
 #include<conio.h>
int main()
{
    int a[50],n,i,j,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the array elements: ");
    
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
        
    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
    printf("\nArray after sorting: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
 getch();
    return 0;
}