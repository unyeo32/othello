#include <stdio.h>
#include <stdlib.h>
#define N 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gameboard[N][N];
int main(int argc, char *argv[]) {
	init_othello(); //게임 초기화
	
	
	while (isGameEnd()==0){ //game 종료 조건 확인
		print_othello(); //배치 상태 출력 등
		if (배치가 가능한 칸이 있는지 확인)
			continue; //두 플레이어 모두 배치 불가능하면 반복문 빠져나가야감
		배치할 좌표 입력 받기;scanf("%d %d", &i, &j);
		if (입력한 좌표가 적절한지 확인)
			if (뒤집기 시도){
			몇개뒤집었는지 출력;
			턴 바꿈; 
		} 
		else
		printf("invalid input, retry\n"); 
	}
	check_result(); //결과 출력 
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
