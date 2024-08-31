//#include<stdio.h>
//int main(){
//	int binary[8];
//	int number=209;
//	int i=0,j,count=0;
//	while(number!=0){
//		count++;
//		binary[i]=number%2;
//		i++;
//		number=number/2;
//	}//reverse the array
//	for(j=count-1;j>=0;j--){
//		printf("%d ",binary[j]);
//	}
//}

#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t unsignedVar = 255;  // 8-bit unsigned integer (0 to 255)
    int8_t signedVar = -128;     // 8-bit signed integer (-128 to 127)

    printf("Unsigned Variable: %u\n", unsignedVar);
    printf("Signed Variable: %d\n", signedVar);

    return 0;
}
