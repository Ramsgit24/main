#include<stdio.h>
#include<math.h>
int binary_to_octal(int);
int main(){
	int binary_number,result_in_octal,count=1,duplicate_binary,r;
	printf("please enter a valid binary number:");
	scanf("%d",&binary_number);
	duplicate_binary=binary_number;
	while(duplicate_binary!=0){
		r=duplicate_binary%10;
		if(r>1){
			count++;
			break;
		}
		duplicate_binary=duplicate_binary/10;
	}
	if(count>1){
		printf("enter a valid binary number :\n");
	}else{
		result_in_octal=binary_to_octal(binary_number);
		printf("%d",result_in_octal);
	}
}
int binary_to_octal(int n){
	int octal=0,group,octal_digit,j,i,rem;
	j=0;
	while(n!=0){
		group=n%1000;
		octal_digit=0;
		i=0;
		while(group!=0){
			rem=group%10;
			octal_digit=octal_digit+rem*pow(2,i);
			i++;
			group=group/10;
		}
		octal=octal+octal_digit*pow(10,j);
		j++;
		n=n/1000;
	}
	return octal;
}

