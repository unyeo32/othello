#include <stdio.h>
#include <stdlib.h>
#define N 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gameboard[N][N];
int main(int argc, char *argv[]) {
	void init_othello(); //���� �ʱ�ȭ
	int i,j; 
	
	while (isGameEnd()==0){ //game ���� ���� Ȯ��
		print_othello(); //��ġ ���� ��� ��
		if (��ġ�� ������ ĭ�� �ִ��� Ȯ��)
			continue; //�� �÷��̾� ��� ��ġ �Ұ����ϸ� �ݺ����� ���������߰�
		scanf("%d %d", &i, &j);  //��ġ�� ��ǥ �Է� �ޱ� 
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


