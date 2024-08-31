//#include<stdio.h>
//int binary(int);
//int octal(int);
//int main(){
//	int a,b,c,d;
//	printf("enter a number to convert in binary:");
//	scanf("%d",&a);
//	b=binary(a);
//	printf("%d\n",b);
//	printf("enter a number to convert in octal:");
//	scanf("%d",&c);
//	d=octal(c);
//	printf("%d\n",d);
//}
//int binary(int n){
//	int t=1,b=0,r;
//	while(n!=0){
//	r=n%2;
//	b=b+r*t;
//	t=t*10;
//	n=n/2;
//	}
//	return b;
//}
//int octal(int m){
//	int t=1,o=0,r;
//	while(m!=0){
//	r=m%8;
//	//b=b+r*t;
//	o=o+r*t;
//	t=t*10;
//	m=m/8;
//	}
//	return o;
//}

#include<stdio.h>
#include<math.h>
int bin_dec(int);
int oct_dec(int);
int main(){
	int a,b,c,d,temp,flag=1,valid=1,temp1;
	printf("enter a binary number to integer/decimal:");
	scanf("%d",&a);
	temp1=a;
	while(temp1!=0){
		if(temp1%10>=2){
			flag=0;
			break;
		}
		temp1=temp1/10;
	}
	if(flag){
	b=bin_dec(a);
	printf("%d\n",b);
	}else{
		printf("enter a valid number..");
	}
	printf("enter a octal number to integer/decimal:");
	scanf("%d",&c);
	temp=c;
	while(temp!=0){
		if(temp%10>=8){
			valid=0;
			break;
		}
		temp=temp/10;
	}
	if(valid){
	d=oct_dec(c);
	printf("%d\n",d);
	}else{
		printf("enter the valid octal number 0 -7");
	}
}
int bin_dec(int n){
	int i=0,dec=0,rem;
	while(n!=0){
		rem=n%10;
		dec=dec+rem*pow(2,i);
		i++;
		n=n/10;
	}
	return dec;
}
int oct_dec(int x){
	int i=0,dec1=0,rem;
	while(x!=0){
		rem=x%10;
		dec1=dec1+rem*pow(8,i);
		i++;
		x=x/10;
	}
	return dec1;
}