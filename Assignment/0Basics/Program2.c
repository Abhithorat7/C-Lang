/* WAP to print the value of the below expression */

#include<stdio.h>
void main(){
	int x=9;
	int ans,ans1,ans2,ans3;

	ans = ++x + x++ + ++x;
	printf("%d\n",ans);
	printf("%d\n",x);

	ans1 = ++x + ++x + ++x + ++x;
	printf("%d\n",ans1);
	printf("%d\n",x);

	ans2 = x++ + x++ + ++x + x++ + ++x;
	printf("%d\n",ans2);
	printf("%d\n",x);

	ans3 = x++ + x++ + x++ + x++;
	printf("%d\n",ans3);
	printf("%d\n",x);

}




