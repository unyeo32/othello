
extern void init_othello()
{int x,y,i;
 
 for (x=0; x<N; x++)
	for (y=0; y<N; y++)
		gameboard[x][y]= ' ';

gameboard[2][2]='O';
gameboard[3][3]='O';
gameboard[2][3]='X';
gameboard[3][2]='X';

		
printf("  0 1 2 3 4 5 \n");		
for(i=0; i<N; i++){
	printf(" -------------\n");
	printf("%i|%c|%c|%c|%c|%c|%c\n", i, gameboard[i][0], gameboard[i][1],gameboard[i][2],gameboard[i][3],gameboard[i][4],gameboard[i][5]);
}
printf(" -------------\n");
printf("\nSTATUS - White:2, Black:2\n");	
}

