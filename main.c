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
		 
		scanf("%i %i", &i, &j);//��ġ�� ��ǥ �Է¹ޱ�
		
		
		if (�Է��� ��ǥ�� �������� Ȯ��)
			if (������ �õ�){
			����������� ���;
			turn = turn+1; // (turn+1)���� turn ������ ����ȴ� 
		} 
		else
		printf("invalid input, retry\n"); 
	}
	check_result();
}



void print_othello()
{
	int i, j;
	int turn=1;
	
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
	
	if (turn%2 != 0) //turn�� Ȧ���� �� �� ���� 
		printf("put a new white othello:\n"); 	
	else //turn�� ¦���� �� ������ ���� 
		printf("put a new black othello:\n");
	}	

//check_result �Լ� ���� 
void check_result()
{
	for (i=0; i<N; i++)
		for (j=0; j<N; j++)
		{
			if (gameboard[i][j]=='O')
				num_O += num_O;
			if (gameboard[i][j]=='X')
				num_X += num_X;
			}
	printf("White: %i, Black: %i\n", num_O, num_X);
	if (num_O > num_ X)
		printf("White win\n");
	else
		printf("Black win\n");			
}
