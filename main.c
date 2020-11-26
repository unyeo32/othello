#include <stdio.h>
#include <stdlib.h>
#define N 6
#define NONE 0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gameboard[N][N];
int num_O, num_X;
int m,n;
int i,j;

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
	if (num_O > num_X)
		printf("White win\n");
	else
		printf("Black win\n");
		
	return;			
}

//흰돌차례일 때 flip_able 함수 정의 
int white_flip_able(int i, int j)
{
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
				if (gameboard[i][n]== NONE)
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

//게임이 종료할 상황을 판별하는 함수 
int isGameEnd()
{
	int k;
	for (i=0;i<N;i++)
		for (j=0;j<N;j++)
		{
			if (gameboard[i][j] != NONE || white_flip_able(i,j) ==0 || black_flip_able(i,j) ==0)
				k=0;
			
			else
				k=-1;
		}
	return k;	
}

//돌 뒤집기 함수 
int flip_othello(int i, int j) 
{
	int turn; 
	int W, E, North, S, NW, NE, SW, SE;
	 
	while (turn%2 != 0) //흰돌 차례에서 뒤집을 때 
		
	else //검은돌 차례에서 뒤집을 때 
		
}


int main(int argc, char *argv[]) {
	void init_othello(); //게임 초기화
	int W, E, North, S, NW, NE, SW, SE; 
	int turn=1;
	int result=1;
	int count;
	
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
				
				
			if (flip_othello(i,j)==0){ //뒤집기 시도 
			printf("%i othello flipped", count);//몇개뒤집었는지 출력
			turn = turn+1; // (turn+1)값이 turn 변수에 저장된다 
			} 
			
		else//뒤집기가 불가한 경우 
		printf("invalid input, retry\n");
		
		printf("::flip result::\n");//뒤집기 결과 안내 
		printf("W:%i, E:%i, N:%i, S:%i, NW:%i, NE:%i, SW:%i, SE:%i", W, E, North, S, NW, NE, SW, SE);	
	}
	check_result();//게임 결과 출력 
}

