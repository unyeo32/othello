
#define N 6
#define NONE 0
int gameboard[N][N];

extern void init_othello()
{
int x,y,i,j;
for (x=0; x<N; x++)
	for (y=0; y<N; y++)
		gameboard[x][y]= NONE;

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
printf("\nSTATUS - White:2, Black:2\n");
return;	
}

