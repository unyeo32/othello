#define N 6
 
extern void count_othello() //흰돌과 검은돌의 개수를 알려주는 함수 
{	
	int i,j;
	int num_O=0;
	int num_X=0;
	for (i=0;i<N;i++)
		for (j=0; j<N; j++)
		{
			if (gameboard[i][j]=='O')
				num_O++; //흰돌 개수 저장 
				
			if (gameboard[i][j]=='X')
				num_X++; //검은돌 개수 저장 
		}
	printf("\nSTATUS - White:%i, Black:%i\n", num_O, num_X);
}
