double Newton_Raphson_SquareRoot(double num)
{
	double fx=0,dx=0;
	double x0=num/2;
	double ans=0;
	
	for(i=0;i<5;i++)
	{
		fx=(x0*x0)-num;
		dx=2*x0;
		ans=x0-(fx/dx);
	}
	return ans;
}