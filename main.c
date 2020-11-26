 #include <stdio.h>
#include <stdlib.h>
#define N 6
#define NONE 0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gameboard[N][N];
int num_O, num_X;
int m,n;

int main(int argc, char *argv[]) {
	void init_othello(); //���� �ʱ�ȭ
	int i,j,m,n; 
	int turn=1;
	int result=1;
	
	while (isGameEnd()==0){ //game ���� ���� Ȯ��
		print_othello(); 
		
		scanf("%i %i", &i, &j);//��ġ�� ��ǥ �Է¹ޱ�
		
		if (result>0) //�� ��ġ�� ������ ��� 
			continue;
		
			if (turn%2 != 0)
				if (white_flip_able(i,j) > 0 && gameboard[i][j]==NONE) //������ �����ϰ� ���� ��ĭ�� ��� 
					continue; 
			else
				if (black_flip_able(i,j) >0 && gameboard[i][j]==NONE)
					continue; 
				
				
			if (������ �õ�){
			printf("%i othello flipped", count)//����������� ���
			turn = turn+1; // (turn+1)���� turn ������ ����ȴ� 
			} 
			
		else//�����Ⱑ �Ұ��� ��� 
		printf("invalid input, retry\n");
		
		printf("::flip result::\n");
		printf("W:%i, E:%i, N:%i, S:%i, NW:%i, NE:%i, SW:%i, SE:%i", W, E, N, S, NW, NE, SW, SE);	
	}
	check_result();//���� ��� ��� 
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

//�������� �� flip_able �Լ� ���� 
int white_flip_able(int i, int j)
{
	int i,j,k;
	int result=0; 
	
	if (i<0 || j<0 || i>N-1 || j>0)
		return 0;
	if (gameboard[i][j] != NONE)
		return 0;
	if (gameboard[i][j+1]=='X' && i<N)//���ʿ� �ִ� �������� ������ �� 
		{
			for (n=j+1;n<N-1;n++){
				if(gameboard[i][n]=='O'){
					result = result+1;
					break;
				if (gameboard[i][n]==NONE)
					break;
				}
				
			}
		 } 
	
	if (gameboard[i][j-1]=='X' && j>N-1)//���ʿ� �ִ� �������� ������ �� 
		{
			for (n=j-1; n>0; n--){
				if(gameboard[i][n]=='O'){
					result = result+1;
					break;
				if (gameboard[i][n]==NONE)
					break;
				}
				
			}
		 } 
	
	if (gameboard[i-1][j]=='X' && i<N-1)//���ʿ� �ִ� �������� ������ �� 
		{
			for (m>0; m<i; m++){
				if(gameboard[m][j]=='O'){
					result = result+1;
					break;
				if (gameboard[i][m]==NONE)
					break;
				}
				
			}
		 }
	
	if (gameboard[i+1][j]=='X' && i>0)//���ʿ� �ִ� �������� ������ �� 
		{
			for (m=i+1; m<N-1; m++){
				if(gameboard[m][j]=='O'){
					result = result+1;
					break;
				if (gameboard[m][j]==NONE)
					break;
				}
				
			}
		 } 
	return result;
}

//������ ������ �� flip_able �Լ� ���� 
int black_flip_able(int i, int j)
{
	int i,j;
	int result=0; 
	
	if (i<0 || j<0 || i>N-1 || j>0)
		return 0;
	if (gameboard[i][j] != NONE)
		return 0;
	if (gameboard[i][j+1]=='O' && i<N)//���ʿ� �ִ� �������� ������ �� 
		{
			for (n=j+1;n<N-1;n++){
				if(gameboard[i][n]=='X'){
					result = result+1;
					break;
				if (gameboard[i][n]==NONE)
					break;
				}
				
			}
		 } 
	
	if (gameboard[i][j-1]=='O' && j>N-1)//���ʿ� �ִ� �������� ������ �� 
		{
			for (n=j-1; n>0; n--){
				if(gameboard[i][n]=='X'){
					result = result+1;
					break;
				if (gameboard[i][n]==NONE)
					break;
				}
				
			}
		 } 
	
	if (gameboard[i-1][j]=='O' && i<N-1)//���ʿ� �ִ� �������� ������ �� 
		{
			for (m>0; m<i; m++){
				if(gameboard[m][j]=='X'){
					result = result+1;
					break;
				if (gameboard[i][m]==NONE)
					break;
				}
				
			}
		 }
	
	if (gameboard[i+1][j]=='O' && i>0)//���ʿ� �ִ� �������� ������ �� 
		{
			for (m=i+1; m<N-1; m++){
				if(gameboard[m][j]=='X'){
					result = result+1;
					break;
				if (gameboard[m][j]==NONE)
					break;
				}
				
			}
		 } 
	return result;
}
}
