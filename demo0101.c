
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

void Match()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for ( a = 1; a < 6; a ++)
	{
		for ( b = 1; b < 6; b ++)
		{
			for (c = 1; c < 6; c ++)
			{
				for ( d = 1; d < 6; d ++)
				{
					for ( e = 1; e < 6; e ++)
					{
						//Aѡ��˵��B�ڶ����ҵ�����
						//Bѡ��˵���ҵڶ���E���ģ�
						//Cѡ��˵���ҵ�һ��D�ڶ���
						//Dѡ��˵��C����ҵ�����
						//Eѡ��˵���ҵ��ģ�A��һ��
						//ÿ��˵����һ��  ��һ��Ϊ0 һ��Ϊ1 
						if ((b == 2) + (a == 3) == 1
							&& (b == 2) + (e == 4) == 1
							&& (c == 1) + (d == 2) == 1
							&& (c == 5) + (d == 3) == 1
							&& (e == 4) + (a == 1) == 1)
						{
							if(a != b&&a != c&&a != d&& a != e
								&&b != c&&b != d&&b != e&& c != d
								&& c != e&&d != e )
							{
								
									printf("%d %d %d %d %d \n", a, b, c, d, e);
								
							}
						}
					
						
					}
				}
			}
		}
	}
}
void Murderer()
{
	
	int i;
	char people[4] = { 'a', 'b', 'c', 'd' };
	char kill;
	for (i = 0; i < sizeof(people) / sizeof(people[0]); i++)
	{
		kill = people[i];
		//A˵�������ҡ�
		//B˵����C��
		//C˵����D��
		//D˵��C�ں�˵
		//��֪3����˵���滰��1����˵���Ǽٻ���
		if ((people[0] != kill) 
			+ (people[2] == kill) 
			+ (people[3] == kill)
			+ (people[3] != kill) == 3)
		{
			printf("������%c", kill);
		}
	}

}
void Yanghui(int num)
{
	int  a[100][500] = { 0 };
	a[0][0] = 1;
	a[1][0] = 1;
	a[1][1] = 1;
	//1
	//1 1
	//1 2 1
	//1 3 3 1
	for (int i = 2; i < num; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			a[i][0] = 1;
			a[i][i] = 1;
			a[i][j] = a[i - 1][j] +a [i - 1][j - 1];
		}
	}
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < num - i - 1; k++)
		{
			printf("%c", ' ');
		}
		for (int j = 0; j < i+1; j++)
		{
		
		/*	if (a[i][j] == 0)
			{
				a[i][j] = ' ';
			}*/
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
//	Match();
	//Murderer();
	int num = 0;
	printf("������һ������2����->");
	while (1)
	{
		scanf("%d", &num);
		if (num < 3)
		{
			printf("��������\n����������->");
		}
		else
			break;
	}
	Yanghui(num);
	system("pause");
	return 0;
}
