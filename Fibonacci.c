#include<stdio.h>

int nums[20000][3000],k=1;
//here [20000] denotes the max possible value of n, and [3000] denotes the max no of digits to be displayed.
void fibonacci(int n) 
{
		while(k<n)        
		{
			int takeAway=0;
			for(int j=2999;j>=0;j--)
			{
				int val=nums[k][j]+nums[k-1][j]+takeAway;
				takeAway=val/10;		
				val = val%10;
				nums[k+1][j]=val;
			}
			k++;
		}
		int i=0;
		while(nums[n][i]==0 && i<3000)
			i++;
		for(;i<3000;i++)
		{
			printf("%d",nums[n][i]);
		}
		printf("\n");
}
 

int main() 
{
	nums[1][2999]=1;
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	fibonacci(n);
	}
	return 0;
}