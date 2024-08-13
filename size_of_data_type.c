#include<stdio.h>
int main(){
	long int m=10;
	long double n=234;
	int b=18;
	int d=3;
	int x=sizeof(int);//32bit compiler 4 bytes
	int y= sizeof(char);//1 byte
	int z= sizeof(float);// 4bytes
	int a = sizeof(double);// 8bytees
	int w= sizeof(void);//0 bytes
	char c='a';//1 bytes
	printf("the size of m is : %d\n", sizeof(m)); 
	/*size of m i.e, long int --> always 4 bytes irrespective of compiler 
	(if 16 bit compiler it use 16 +16) */
	printf("the size of n is : %d\n", sizeof(n));
	//size of m i.e, long double --> always 8 bytes irrespective of compiler(if 16 bit compiler it use 16 +16+16+16)
	printf("the size of long int is : %d\n", sizeof(long int));// long int -- 4bytes (it used for storage of big values)  16 bit compiler we want to store more than 16 bit number we use long int
	printf("the size of short int is : %d\n", sizeof(short int));//short int -- 4bytes (it used for storage of lower values) 32 bit compiler we want to store 16 bit number or less than that we use short int
	printf("the size of long double is : %d\n", sizeof(long double));// long double -- 12 bytes	
	printf("%d\t%d\t%d\t%d\t%d\t%d\t",x,y,z,a,w,c);
	printf("%d\n" ,sizeof(b));
	printf("the address of b is : %d\n",&b); //& identifier it gives the address of the identifier/variable
	printf("the size of b is : %d\n", b);
	printf("the value of c is : %d\n",c);//ascii number of the a
	printf("the address of c is : %d\n",&c);// address of the character
	printf("the value of b is : %d\n",b);// prints b value
	printf("the address of octadecimal b is : %o\n",&b);//address of Unsigned octadecimal for integer
	printf("the value of octadecimal b is : %o\n",b);//prints b value in octa 
	printf("the address of hexadecimal b is : %x\n",&b);//address of Unsigned Hexadecimal for integer
	printf("the value of octadecimal b is : %x\n",b);//prints b value in hexa 

	return 0;
}
