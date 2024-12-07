//#include<stdio.h>  
//#include<math.h>
//int main()    
//{    
//	int n,r,sum=0,temp,digits=0;   
//	printf("enter the number=");    
//	scanf("%d",&n);    
//	temp=n; 
//	while(temp>0)  //calculates your digits purpose  
//	{            
//		temp=temp/10;
//		digits++;
//	}    
//	temp = n;
//	while(n>0)    
//	{    
//		r=n%10;    
//		sum=sum+pow(r, digits);    
//		n=n/10;    
//	}    
//	if(temp==sum)    
//		printf("%d armstrong  number ",temp);    
//	else    
//		printf("%d not armstrong number",temp);    
//	return 0;  
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,remainder,result =0,i,temp;
//	printf("Enter number :");
//	scanf("%d",&n);
//	temp = n;
//	int digits=0;
//	for(i=n;i>0;i=i/10)
//	{
//		digits++;
//	}
//	for(i=n;n!=0;n=n/10)
//	{
//		remainder = n%10;
//		result += pow(remainder,digits);
//	}
//	if(temp==result)    
//		printf("%d armstrong  number ",temp);    
//	else    
//		printf("%d not armstrong number",temp);    
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,remainder,i,temp,digits = 0;
//	float result = 0;
//	printf("Enter number :");
//	scanf("%d",&n);
//	temp = n;
//	for(i=n;i>0;i=i/10)
//	{
//		digits++;
//	}
//	for(i=n;n!=0;n=n/10)
//	{
//		remainder = n%10;
//		result += pow(remainder, digits);
//	}
//	if(temp==result)    
//		printf("%d armstrong  number ",temp);    
//	else    
//		printf("%d not armstrong number",temp);    
//	return 0;
//}