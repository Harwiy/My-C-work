#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int i,j;
char *values[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
char *types[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

//首先得有一个结构体存储牌的信息 
typedef struct {
	int value;
	char type[10];
}PK;

//初始化卡牌
void initializePokes(PK poke[]) 
{
	int index=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<13;j++)
		{
			poke[index].value=j+2;
			strcpy(poke[index].type,types[i]);
			index++;
		}
	}
}
 
//洗牌函数
void shufflePokes(PK poke[],int size)
{
	srand(time(NULL));
	for(i=size-1;i>0;i--)
	{
		j=rand()%(i+1);
		PK temp=poke[i];
		poke[i]=poke[j];
		poke[j]=temp;
	}
	
 } 


//发牌函数
void dealPokes(PK poke[],PK persons[][13],int numPlayers)
{
	int index=0;
	for(j=0;j<13;j++)
	{
		for(i=0;i<numPlayers;i++)
		{
			persons[i][j]=poke[index];
			index++;
		}
	}
 } 
//打印单张牌
void printPoke(PK poke)
{
	printf("%s of %s\n", values[poke.value - 2], poke.type);
 } 

//打印每个人的所有牌 
void printPokes(PK person[],int size)
{
	for(i=0;i<size;i++)
	printPoke(person[i]);
}
 
//比较牌的大小
int comparePokes(PK poke1,PK poke2)
{
	 if (poke1.value > poke2.value) return 1;
    else if (poke1.value < poke2.value) return -1;
    else return 0;
 } 
 
//执行
int main()
{
	PK poke[52];
    initializePokes(poke);
    shufflePokes(poke, 52);
    PK persons[4][13]; 
    dealPokes(poke, persons, 4);
     int k;
    for ( k = 0; k < 4; k++)
	 {
        printf("Player %d's hand:\n", k + 1);
        printPokes(persons[k], 13);
        printf("\n");
    }

   
    PK poke1 = persons[0][0];
    PK poke2 = persons[1][0];
    int result = comparePokes(poke1, poke2);
    if (result == 1) {
        printf("Player 1's card is greater than Player 2's card.\n");
    } else if (result == -1) {
        printf("Player 1's card is less than Player 2's card.\n");
    } else {          
        printf("Player 1's card is equal to Player 2's card.\n");
    }

    return 0;
 } 
