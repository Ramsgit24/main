#include<stdio.h>
int hcf(int,int);
int lcm(int,int);
int  main(){
	int n1,n2,a,b;
	printf("enter the num1:");
	scanf("%d",&n1);
	printf("enter the num2:");
	scanf("%d",&n2);
	a=hcf(n1,n2);
	b=lcm(n1,n2);
	printf("hcf of %d and %d is %d\n",n1,n2,a);
	printf("lcm of %d and %d is %d\n",n1,n2,b);
}
int hcf(int x,int y){
	int hcf,i;
	for(i=1;i<=x && i<=y;i++){
		if(x%i==0 && y%i==0){
			hcf=i;
		}
	}
	return hcf;
}
int lcm(int m,int n){
	int lcm,j,k;
	k=hcf(m,n);
	for(j=1;j<<m && j<<n;j++){
		if(m%j==0 && n%j==0){
			lcm= (m*n)/(k);
		}
	}
	return lcm;
}