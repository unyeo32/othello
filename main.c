#include <stdio.h>
#include <stdlib.h>
#define N 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gameboard[N][N];
int main(int argc, char *argv[]) {
	void init_othello(); //���� �ʱ�ȭ
	int i,j; 
	
	while (isGameEnd()==0){ //game ���� ���� Ȯ��
		print_othello(); 
		
		if (��ġ�� ������ ĭ�� �ִ��� Ȯ��)
			continue; //�� �÷��̾� ��� ��ġ �Ұ����ϸ� �ݺ����� ���������߰�
			
		print_othello;  //��ġ ���� ��� �� �Է��� ��ǥ�� �ޱ� 
		
		if (�Է��� ��ǥ�� �������� Ȯ��)
			if (������ �õ�){
			����������� ���;
			turn += turn; // (turn+1)���� turn ������ ����ȴ� 
		} 
		else
		printf("invalid input, retry\n"); 
	}
	
	
	void count_othello();
	if (num_O > num_X)
		printf("white WIN");
	else
		printf("Black WIN");
	return 0;
}


void print_othello()
{
	int i, j;
	
	int turn=1;
	if (turn%2 != 0){ //turn�� Ȧ���� ��  
		printf("put a new white othello:\n"); //���� �� 
		scanf("%d %d", &i, &j); //�� �Է� ��ǥ �ޱ� 
		if (gameboard[i][j] !='O' || gameboard[i][j] != 'X')
		{
			gameboard [i][j] = 'O';
		}
	}
	else{ //turn�� ¦���� �� 
		printf("put a new black othello:\n");
		scanf("%d %d", &i, &j); //������ �Է� ��ǥ �ޱ� 
		if (gameboard[i][j] !='O' || gameboard[i][j] != 'X')
	{
			gameboard [i][j] = 'X';
	}
	}
	
	gameboard[2][2]='O';
	gameboard[3][3]='O';
	gameboard[2][3]='X';
	gameboard[3][2]='X';

	printf("  0 1 2 3 4 5 \n");		
for(i=0; i<N; i++)
{
	printf(" -------------\n");
	printf("%i|%c|%c|%c|%c|%c|%c\n", i, gameboard[i][0], gameboard[i][1],gameboard[i][2],gameboard[i][3],gameboard[i][4],gameboard[i][5]);
}
	printf(" -------------\n");
	
	}	



