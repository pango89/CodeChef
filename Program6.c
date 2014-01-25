#include<stdio.h>
#include<string.h>
void swap(int *a, int *b)
{
  int t=*a; *a=*b; *b=t;
}
void sort(int arr[], int beg, int end)
{
  if (end > beg + 1)
  {
    int piv = arr[beg], l = beg + 1, r = end;
    while (l < r)
    {
      if (arr[l] <= piv)
        l++;
      else
        swap(&arr[l], &arr[--r]);
    }
    swap(&arr[--l], &arr[beg]);
    sort(arr, beg, l);
    sort(arr, r, end);
  }
}
int findpos(int arr[],int beg, int end, int num)
{
    int pos=0,i=0;
    if(num<arr[beg])
      pos=0;
    else if(num>=arr[end])
      pos=end+1;
    else
    {
        for(i=beg;i<end;i++)
        {
          if(num>=arr[i] && num<arr[i+1])
                pos=i+1;
        }
    }
    return pos;
}

int main()
{
    int t=0,n=0,i,j,pos=0,quot,rem,h,count=0;
    int H[505],K[505];
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        count=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&H[i]);
        for(i=0;i<n;i++)
            scanf("%d",&K[i]);
        sort(K,0,n);
        for(i=0;i<n;i++)
        {
        quot=0,rem=0,h=2*H[i];
        while(h>=K[0])
        {
        pos=findpos(K,0,n-1,h);
        quot+=h/(K[pos-1]);
        rem=h%(K[pos-1]);
        h=rem;
        }
        if(h!=0)
        quot++;
        count=count+quot;
        }
        printf("%d\n",count);
    }
    
    getch();
    return 0;
}
