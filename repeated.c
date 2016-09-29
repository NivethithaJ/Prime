#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	int a[1000];
	int hash[1000]={0};
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		hash[a[i]]++;
	}
	for(i=0;i<n;i++)
	{
		if(hash[a[i]]>1)
		{
			
		hash[a[i]]=0;
		printf("%d ",a[i]);
		}
	}
	return 0;
}
