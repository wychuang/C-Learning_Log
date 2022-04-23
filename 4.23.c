/* 
#include <stdio.h>

#define left 1
#define down 2
#define right 3
#define up 4


int main(void)
{
	int n;
	scanf("%d",&n);

	int num[n+2][n+2],i=0,j=0,x=1,y=1,cha=left;
	while(++i<n+2)
	{j=0;while(++j<=n+2){num[i-1][j-1]=0;}}
	for(i=0;i!=n+2;i++){num[i][0]=1;num[i][n+1]=1;num[n+1][i]=1;}
	//建立预处理矩阵 
	x=1;y=1;i=0;//i忘了初始化hh 
	while(i++<n*n)
	{
		num[x][y]=i;
		switch(cha)
		{
			case left:
				{
					
					if(!num[x][y+1]){y++;}
					else{cha=down;x++;}
					break;
				}
			case down:
				{
					
					if(!num[x+1][y]){x++;}
					else{cha=right;y--;}
					break;	
				}
			case right:
				{
					
					if(!num[x][y-1]){y--;}
					else{cha=up;x--;}
					break;	
				}
			case up:
				{
					
					if(!num[x-1][y]){x--;}
					else{cha=left;y++;}
					break;	
				}
		}
	}
	//填充矩阵
	i=0;j=0;
	while(i++<n)
	{j=0;
	while(j++<n){printf("%3d",num[i][j]);}
	printf("\n");
	}
	//输出 
	return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>

typedef struct Words
{
	char *chars;
	struct Words* next;
	struct Words* prev;
}Voca;


Voca*head;
Voca*tail;
//双向链表头尾指针 
	

Voca* crnew(char *s);
void putl();


int main(void)
{
	Voca first={"",NULL,NULL};
	head=&first;
	tail=head;
	
	char* input="";
	char* save="";
	scanf("%s",input);
	double i=0,max=strlen(input);
	int j=0;
	
	while(i<max)
	{
		if(*(input+(int)i)!=' '){save[j]=*(input=+(int)i);j++;}
		else
		{
			if(strlen(save))
			{ 
				tail=crnew(save);
			}
			save="";
			j=0;	
		}
		
		i++;
	}
			if(strlen(save))
			{ 
				tail=crnew(save);
			}
	
	putl();
	return 0;
}


Voca* crnew(char *s)
{
	Voca* this;
	Voca* that;
	Voca* enmm;
	Voca* hh;
	
	this=(Voca*)malloc(sizeof(Voca));
	
	this->chars=s;
	this->prev=tail;
	this->next=NULL;
	tail->next=this;
	
}

void putl()
{
	Voca* p=tail;
	printf("%s",p->chars);
	free(p);
	if(p->prev->chars="")return NULL;
}



*/


#include <stdio.h>
#include <string.h>

typedef struct Student
{
	
}









































