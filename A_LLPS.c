#include<stdio.h>

#include<string.h>

int main()
{
    char str[10];


    while(scanf("%s",str)!=EOF){
        
        int length = strlen(str);

		int sum=0,count=0;
		for(int i=0;i<length;i++){
			if(str[i]>sum){
				sum=str[i];
				count=1;
			}
			else if(str[i]==sum)
				count++;
		}
		for(int i=0;i<count;i++)
			printf("%c",sum);
		printf("\n");
	}
}