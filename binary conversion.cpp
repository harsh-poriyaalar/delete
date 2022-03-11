#include<stdio.h>
int main()
{
	int n, target, q, r, count = 0;
	int binary[count];
	printf("Enter decimal: ");
	scanf("%d", &n);
	target = n;
	while(target != 0)
	{
	r = target%2;
	binary[count]=r;
    //*p = r;
    count++;
    //p++;
 	q = (target-r)/2;
	target = q;
    }
    printf("%d in binary: ",n);
	for(int i = count-1; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}
}
