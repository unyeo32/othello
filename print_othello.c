#define N 6
#define NONE 0

int gameboard[N][N];

extern void print_othello()
{
	int i, j;
	int turn;

	gameboard[2][2]='O';
	gameboard[3][3]='O';
	gameboard[2][3]='X';
	gameboard[3][2]='X';

		
	printf("  0 1 2 3 4 5");		
	for(i=0; i<N; i++){
		printf("\n -------------\n%i", i);
		for (j=0; j<N; j++)
			printf("|%c", gameboard[i][j]);
	}
	printf("\n -------------\n");	
	
	
	if (turn%2 != 0) //turnÀÌ È¦¼öÀÏ ¶§ Èòµ¹ Â÷·Ê 
		printf("put a new white othello:\n"); 	
	else //turnÀÌ Â¦¼öÀÏ ¶§ °ËÀºµ¹ Â÷·Ê 
		printf("put a new black othello:\n");
		
	return;
}	

