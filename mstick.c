#include<stdio.h>
int inline scan()
{
	int N = 0;
	char C;
	C=getchar_unlocked();
	while (C < '0' || C>'9') C=getchar_unlocked();
	while (C >= '0' && C <= '9')
	{
	N = (N<<3) + (N<<1) + C - '0';
	C=getchar_unlocked();
	}
	return N;
}
struct minmax
{
	double min;
	double max;
};
double findmax(int *arr,int l,int r,int size)
{
	double max=arr[0];
	int i=0;
	for(i=0;i<l;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	for(i=r+1;i<size;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	return max;
}
struct minmax maxtime(int *arr,int l,int r)
{
	struct minmax m1;
	int i=0;
	double max=arr[l],min=arr[l];
	for(i=l+1;i<=r;i++)
	{
		//printf("%.1f\t",arr[i]);
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	//printf("\nMax=%.1f,Min=%.1f",max,min);
	//return min+(max-min)/2;
	m1.max=max;
	m1.min=min;
	//printf("\nMax=%.1f,Min=%.1f",m1.max,m1.min);
	return m1;
}
	
int main()
{
	int n=0,i=0;
	//scanf("%d",&n);
	n=scan();
	int b[100005]={0};
	for(i=0;i<n;i++)
	{
		//scanf("%d",&b[i]);
		b[i]=scan();
	}
	int q=0,l=0,r=0;
	//scanf("%d",&q);
	q=scan();
	while(q--)
	{
		struct minmax temp;
		//scanf("%d %d",&l,&r);
		l=scan();
		r=scan();
		temp=maxtime(b,l,r);
		//printf("\nMax=%.1f,Min=%.1f",temp.max,temp.min);
		double var=temp.min+(temp.max-temp.min)/2;
		//printf("var=%.1f\n",var);
		if(r-l+1==n)
		{
			printf("%.1f\n",var);
			//printf("\nR-L+1=%d\n",r-l+1);
		}
		else
		{
			double m=findmax(b,l,r,n)+temp.min;
			//printf("m=%.1f\n",m);
			printf("%.1f\n",(var>m)?var:m);
		}
	}
	return 0;
}
	