#include<stdio.h>
#include<string.h>
int ur_strcmp(char[],const char []);
int ur_strcmp2(char[],const char[]);
int main(){
	int x,y,z;
	char c[]="Ram";
	char d[]="Ram";
	//x=strcmp(c,d);
	y=ur_strcmp(c,d);
	//z=ur_strcmp2(c,d);
	//printf("%d %d ",x,y);

}
int ur_strcmp(char e[],const char f[]){
	int i=0,j=0;
	while(e[i]!='\0'){
		i++;
	}
	while(f[j]!='\0'){
		j++;
	}
	if(i==j){
		i=0;j=0;
		while(e[j]!='\0'){
			if(e[j]!=f[j]){
				i++;
				break;
			}
			j++;
		}
		return i;
	}else
	{
		return 1;
	}
}
int ur_strcmp2(char d[],const char s[]){
	int i=0;
	while(d[i]!='\0'){
		if(s[i]-d[i]==0){
			i++;

		}else if(d[i]<s[i]){
			return -1;//return 

		}else {
			return 1;
		}
		
	}
	return 0;
}