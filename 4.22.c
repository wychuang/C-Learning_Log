/*

#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;
    
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}



char *match( char *s, char ch1, char ch2 )
{
    int n=0,i=0,r=0;
    char *p;
    for(n=0;n<strlen(s);n++){
        if(*(s+n)==ch1&&i==0){p=s+n;i=1;r=1;}
        if(*(s+n)==ch2&&i==1){printf("%c",*(s+n));i=0;break;}
        if(i==1)printf("%c",*(s+n));
    }
    printf("\n");
    if(r)
    {return p;}
    return NULL;
}


char *match( char *s, char ch1, char ch2 )
{
	int def=0;
	char* out=NULL;
	char* cha=s;
	
	while(*cha)
	{
		if(*cha==ch1 && def==0)
		{
			out=cha;def=1;
			printf("%c",*cha);	
		}else if(def==1 && *cha!=ch2)
		{
			printf("%c",*cha);
		}else if(def==1 && *cha==ch2)
		{
			printf("%c",*cha);
			def=0;
			break;
		}
		
		cha+=1;
	} 
	if(def==1&&cha){printf("%c",*cha);}
	
	printf("\n");
	return out; 
} 



char *match( char *s, char ch1, char ch2 ){
		char *p=s,*start=s;
		while(*p){
			if(*p==ch1){
				start = p;
				while(*p!=ch2&&*p){
					printf("%c",*p);
					p++;
				}
					if(*p==ch2)
				printf("%c\n",*p);
				else
				printf("\n");
				return start;	
			}
			p++;
		}
	return "\n";//·µ»Ø¿ÕÐÐ
	}

*/



