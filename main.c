#include <stdio.h>
#include <stdlib.h>
#define N 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gameboard[N][N];
int main(int argc, char *argv[]) {
	void init_othello(); //게임 초기화
	int i,j; 
	
	while (isGameEnd()==0){ //game 종료 조건 확인
		print_othello(); 
		
		if (배치가 가능한 칸이 있는지 확인)
			continue; //두 플레이어 모두 배치 불가능하면 반복문을 빠져나가야감
			
		print_othello;  //배치 상태 출력 및 입력할 좌표값 받기 
		
		if (입력한 좌표가 적절한지 확인)
			if (뒤집기 시도){
			몇개뒤집었는지 출력;
			turn += turn; // (turn+1)값이 turn 변수에 저장된다 
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
	if (turn%2 != 0){ //turn이 홀수일 때  
		printf("put a new white othello:\n"); //흰돌일 때 
		scanf("%d %d", &i, &j); //흰돌 입력 좌표 받기 
		if (gameboard[i][j] !='O' || gameboard[i][j] != 'X')
		{
			gameboard [i][j] = 'O';
		}
	}
	else{ //turn이 짝수일 때 
		printf("put a new black othello:\n");
		scanf("%d %d", &i, &j); //검은돌 입력 좌표 받기 
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



