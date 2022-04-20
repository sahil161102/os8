#include <stdio.h>
int n=0,k=0,page_fault = 0,count=0;

int main()
{

    printf("Enter the no. of page enteries\t");
    scanf("%d",&n);
    printf("Enter the no. of frames\t");
    scanf("%d",&k);
    int pageArr[n];
    int tableArr[k];
    int count[k];
    for(int i =0;i < n; i++){
    printf("Enter the %d page\t",i+1);
    scanf("%d",&pageArr[i]);
    }
    for(int i = 0;i<k;i++){
    tableArr[k]=-1;
    count[k] =0;}

    for(int i = 0; i<n; i++){
        for(int j=0;j<k;j++){
            if(tableArr[j] ==-1)
            
        }
        for(int j=0;j<k;j++){
            if(tableArr[j] !=-1){
                if(tableArr[j] == pageArr[i]){
                    for(int r = 0;r<k;r++)
                        count[r]++;
                count[j] = 0;
                break;
                }
            }
            if(tableArr[j] == -1){
                    for(int r = 0;r<j;r++)
                        count[r]++;
                count[j] = 0;
                break;
            }
        }
    }   
}
