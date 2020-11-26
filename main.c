 #include <stdio.h>
#include <stdlib.h>
#define N 6
#define NONE 0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gameboard[N][N];
int num_O, num_X;

int main(int argc, char *argv[]) {
	void init_othello(); //���� �ʱ�ȭ
	int i,j; 
	int turn=1;
	
	while (isGameEnd()==0){ //game ���� ���� Ȯ��
		print_othello(); 
		
		if (��ġ�� ������ ĭ�� �ִ��� Ȯ��)
			continue; //�� �÷��̾� ��� ��ġ �Ұ����ϸ� �ݺ����� ���������߰�
		 
		scanf("%i %i", &i, &j);//��ġ�� ��ǥ �Է¹ޱ�
		
		
		if (�Է��� ��ǥ�� �������� Ȯ��)
			if (������ �õ�){
			printf("%i othello flipped", )//����������� ���
			turn = turn+1; // (turn+1)���� turn ������ ����ȴ� 
		} 
		else
		printf("invalid input, retry\n");
		
		printf("::flip result::\n");
		printf("W:%i, E:%i, N:%i, S:%i, NW:%i, NE:%i, SW:%i, SE:%i", W, E, N, S, NW, NE, SW, SE);	
	}
	check_result();
}


//printf_othello() �Լ� ���� 
void print_othello()
{
	int i, j;

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
				num_O = num_O+1;
			if (gameboard[i][j]=='X')
				num_X = num_X+1;
			}
	printf("White: %i, Black: %i\n", num_O, num_X);
	if (num_O > num_ X)
		printf("White win\n");
	else
		printf("Black win\n");			
}

//flip_othello �Լ� ���� 
int flip_able(int x, int y)
{
	int i,j,k;
	if (x<0 || y<0 || x>N-1 || y>N-1)
		return 0;
	if (gameboard[x][y] != NONE)
		return 0;
}
