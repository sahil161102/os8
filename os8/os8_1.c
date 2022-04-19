#include <stdio.h>

int main()
{
    int n, tableArr[3],page_fault = 3;
    printf("Enter the no. of page enteries\t");
    scanf("%d",&n);
    int pageArr[n];
    for(int i =0;i < n; i++){
    printf("Enter the %d page\t",i+1);
    scanf("%d",&pageArr[i]);
    }
    for(int i=0;i<3;i++)
    tableArr[i] = pageArr[i];

    
}