#include<stdio.h>
void main()
{
    int arr[100], brr[100], i, j, n, m, inter[100], uni[100], x=0, y=0, c1=0, c2;
    printf("Enter the number of elements of Array 1 : ");
    scanf("%d",&n);
    printf("Enter the elements: \n"); 
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
 
    printf("Enter the number of elements of Array 2: ");
    scanf("%d",&m);
    printf("Enter the elements: \n"); 
    for(j=0;j<m;j++)
        scanf("%d",&brr[j]);
    printf("\nArray 1:\n[ ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("]\nArray 2:\n[ "); 
    for(j=0;j<m;j++)
        printf("%d ",brr[j]);
    printf("]\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        { 
            if(arr[i]==brr[j]) 
            {
                c1+=1;
                inter[x]=arr[i];
                x++;
            }
        }
    }
    for(x=0;x<c1;x++)
    {
        for(int s=x+1;s<c1;s++)
        {
            if(inter[x]==inter[s]) 
            {
                for(int t=s;t<c1-1;t++)
                    inter[t]=inter[t+1];
                    c1--;
                    s--;
            } 
        }
    }
    printf("\nIntersection: [ ");
    for(x=0;x<c1;x++)
        printf("%d ",inter[x]); 
    printf("]\n");
    for(i=0;i<n;i++)
    {
        uni[y]=arr[i]; 
        y++;
    }
    y=n;
    c2=n;
    for(j=0;j<m;j++)
    {
        c2++; 
        uni[y]=brr[j];
        y++;
    }
    for(y=0;y<c2;y++)
    {
        for(int u=y+1;u<c2;u++)
        {
            if(uni[y]==uni[u]) 
            {
                for(int v=u;v<c2-1;v++) 
                    uni[v]=uni[v+1]; 
                c2--;
                u--;
            } 
        }
    }
    printf("Union: [ ");
    for(y=0;y<c2;y++)
        printf("%d ",uni[y]);
    printf("]");
}
