#include <stdio.h>
#include <stdlib.h>
#define N 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gameboard[N][N];
int main(int argc, char *argv[]) {
	init_othello(); //���� �ʱ�ȭ
	
	
	while (isGameEnd()==0){ //game ���� ���� Ȯ��
		print_othello(); //��ġ ���� ��� ��
		if (��ġ�� ������ ĭ�� �ִ��� Ȯ��)
			continue; //�� �÷��̾� ��� ��ġ �Ұ����ϸ� �ݺ��� ���������߰�
		��ġ�� ��ǥ �Է� �ޱ�;scanf("%d %d", &i, &j);
		if (�Է��� ��ǥ�� �������� Ȯ��)
			if (������ �õ�){
			����������� ���;
			�� �ٲ�; 
		} 
		else
		printf("invalid input, retry\n"); 
	}
	check_result(); //��� ��� 
	return 0;
}

void init_othello()
{int x,y,i;
 int gameboard[N][N];
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
printf("\n STATUS - White:2, Black:2\n");
printf("put a new white othello:");
	
}
