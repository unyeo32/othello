#define N 6
 
extern void count_othello() //�򵹰� �������� ������ �˷��ִ� �Լ� 
{	
	int i,j;
	int num_O=0;
	int num_X=0;
	for (i=0;i<N;i++)
		for (j=0; j<N; j++)
		{
			if (gameboard[i][j]=='O')
				num_O++; //�� ���� ���� 
				
			if (gameboard[i][j]=='X')
				num_X++; //������ ���� ���� 
		}
	printf("\nSTATUS - White:%i, Black:%i\n", num_O, num_X);
}
