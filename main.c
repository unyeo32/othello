 #include <stdio.h>
#include <stdlib.h>
#define N 6
#define NONE 0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gameboard[N][N];
int num_O, num_X;
int m,n;

int main(int argc, char *argv[]) {
	void init_othello(); //게임 초기화
	int i,j,m,n; 
	int turn=1;
	int result=1;
	
	while (isGameEnd()==0){ //game 종료 조건 확인
		print_othello(); 
		
		scanf("%i %i", &i, &j);//배치할 좌표 입력받기
		
		if (result>0) //돌 배치가 가능한 경우 
			continue;
		
			if (turn%2 != 0)
				if (white_flip_able(i,j) > 0 && gameboard[i][j]==NONE) //뒤집기 가능하고 아직 빈칸인 경우 
					continue; 
			else
				if (black_flip_able(i,j) >0 && gameboard[i][j]==NONE)
					continue; 
				
				
			if (뒤집기 시도){
			printf("%i othello flipped", count)//몇개뒤집었는지 출력
			turn = turn+1; // (turn+1)값이 turn 변수에 저장된다 
			} 
			
		else//뒤집기가 불가한 경우 
		printf("invalid input, retry\n");
		
		printf("::flip result::\n");
		printf("W:%i, E:%i, N:%i, S:%i, NW:%i, NE:%i, SW:%i, SE:%i", W, E, N, S, NW, NE, SW, SE);	
	}
	check_result();//게임 결과 출력 
}


//printf_othello() 함수 정의 
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
	
	
	if (turn%2 != 0) //turn이 홀수일 때 흰돌 차례 
		printf("put a new white othello:\n"); 	
	else //turn이 짝수일 때 검은돌 차례 
		printf("put a new black othello:\n");
	}	

//check_result 함수 정의 
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

//흰돌차례일 때 flip_able 함수 정의 
int white_flip_able(int i, int j)
{
	int i,j,k;
	int result=0; 
	
	if (i<0 || j<0 || i>N-1 || j>0)
		return 0;
	if (gameboard[i][j] != NONE)
		return 0;
	if (gameboard[i][j+1]=='X' && i<N)//동쪽에 있던 검은돌이 뒤집힐 때 
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
	
	if (gameboard[i][j-1]=='X' && j>N-1)//서쪽에 있던 검은돌이 뒤집힐 때 
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
	
	if (gameboard[i-1][j]=='X' && i<N-1)//북쪽에 있던 검은돌이 뒤집힐 때 
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
	
	if (gameboard[i+1][j]=='X' && i>0)//남쪽에 있던 검은돌이 뒤집힐 때 
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

//검은돌 차례일 때 flip_able 함수 정의 
int black_flip_able(int i, int j)
{
	int i,j;
	int result=0; 
	
	if (i<0 || j<0 || i>N-1 || j>0)
		return 0;
	if (gameboard[i][j] != NONE)
		return 0;
	if (gameboard[i][j+1]=='O' && i<N)//동쪽에 있던 검은돌이 뒤집힐 때 
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
	
	if (gameboard[i][j-1]=='O' && j>N-1)//서쪽에 있던 검은돌이 뒤집힐 때 
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
	
	if (gameboard[i-1][j]=='O' && i<N-1)//북쪽에 있던 검은돌이 뒤집힐 때 
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
	
	if (gameboard[i+1][j]=='O' && i>0)//남쪽에 있던 검은돌이 뒤집힐 때 
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
