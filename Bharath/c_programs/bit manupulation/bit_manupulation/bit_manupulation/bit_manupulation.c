//#include<stdio.h>
//int main(){//byte shift
//	short int x;
//	scanf("%hi",&x);
//	x=(x<<8)&(0xff00);
//	printf("%hi\n",x);//%hi format specifer for short int
//}

//#include<stdio.h>
//int main(){
//	short int x,y,z;
//	scanf("%hi",&x);
//	scanf("%hi",&y);
//	scanf("%hi",&z);
//	/*x=(x<<8)&(0xff00);
//	y=(y>>8)&(0x00ff);
//	z=((z>>8)&(0x00ff))|((z<<8)&(0xff00));*/
//	x=(x<<8)&(0xff00);
//	y=(y>>8)&(0x00ff);
//	z=((z>>8)&(0x00ff))|((z<<8)&(0xff00));
//	printf("%hi\n",x);
//	printf("%hi\n",y);
//	printf("%hi\n",z);
//}

//nibbles manuculation

//#include<stdio.h>
//int main(){
//	short int a,b,c;
//	scanf("%hi",&a);
//	scanf("%hi",&b);
//	scanf("%hi",&c);
//	a= (a&0x00ff)<<8;
//	b= (b&0xff00)>>8;
//	c= ((c&0x00ff)<<8) | ((c&0xff00)>>8);
//	p rintf("%hi %hi %hi\n",a,b,c);
//}


//int 16 bytes exchange

//#include<stdio.h>
//int main(){
//	 int a,b,c;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	scanf("%d",&c);
//	a= (a&0x00ff)<<16;
//	b= (b&0xff00)>>16;
//	c= ((c&0x00ff)<<16) | ((c&0xff00)>>16);
//	printf("%d %d %d\n",a,b,c);
//}


//#include<stdio.h>
//int main(){
//	int a,b,c;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	scanf("%d",&c);
//	a=(a&0x0000ff00)>>8;
//	b=(b&0x000000ff)<<8;
//	printf("%d %d %d\n",a,b,c);
//}