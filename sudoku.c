#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<conio.h>
#include<stdlib.h>
void game(int [9][9],int);
//int level=1;
void advertising()
{
  	sleep(1);
  	printf(" =======THIS GAME IS MADE BY=======\n\n\n");
  	printf("*****   *   *   *   *   ****    *   *       *\n");
  	printf("*       *   *   *   *   *   *   *   *      * *\n");
  	printf("*****   *****   *   *   ****    *****     *****\n");
  	printf("    *   *   *   *   *   *   *   *   *    *     *\n");
  	printf("*****   *   *   *****   ****    *   *   *       *\n");

  	printf("\n\n\n");
}
void lastadvertising()
{
	system("clear");
	sleep(1);
  	printf(" =====>>>>THANKS FOR PLAYING<<<=====\n\n");
  	sleep(1);
  	printf(" ====!!!! This project name !!!!<<<<<<\n\n");
  	sleep(1);

  	printf(" ++++++ (S+S) ++++++\n\n");
  	sleep(1);                                                                    
  	printf(" >>>>=== THIS PROJECT IS DEVELOP BY SHUBHADEEP ===<<<\n\n");
  	sleep(2);
  	printf(" ..This Game Is Tested On LINUX Terminal~\n ..~And Android Coding C app..~~\n\n");

  	advertising();
  	system("clrscr");

}
void printtable(int table[9][9])     //input table
{
	int i,j;
	printf("  ----------------------------- ----------------------------- -----------------------------\n");
	for(i=0;i<9;i++)
	{
		printf(" | ");
		for(j=0;j<9;j++)
		{
			if(table[i][j]==0)
				printf("[ (%d,%d) ]",i+1,j+1);
			else
				printf("[  (X)  ]");
			if(j==2 || j==5 || j==8)
				printf(" | ");
		}
		printf("\n");
		if(i==2 || i==5 || i==8)
		{
			printf("  ----------------------------- ----------------------------- -----------------------------");
			printf("\n");
		}
	}
//	printf("\n\n");
}
void printgame(int table[9][9])   //output table
{
	int i,j;
	printf("  ----------------- ----------------- -----------------\n");
	for(i=0;i<9;i++)
	{
		printf(" | ");
		for(j=0;j<9;j++)
		{
			if(table[i][j]!=0)
				printf("[ %d ]",table[i][j]);
			else
				printf("[   ]");
			if(j==2 || j==5 || j==8)
				printf(" | ");
		}
		printf("\n");
		if(i==2 || i==5 || i==8)
		{
			printf("  ----------------- ----------------- -----------------");
			printf("\n");
		}
	}
}
void board()
{
	int table[9][9]={0};
	int level=1;
	level=selectlevel(level);
	switch(level)
	{
		case 1:
			table[0][3]=4;table[0][5]=7;
			table[1][2]=4;table[1][4]=1;table[1][6]=3;
			table[2][1]=9;table[2][4]=3;table[2][7]=8;
			table[3][0]=5;table[3][3]=3;table[3][5]=1;table[3][8]=2;
			table[4][1]=3;table[4][2]=2;table[4][6]=4;table[4][7]=1;
			table[5][0]=8;table[5][3]=9;table[5][5]=5;table[5][8]=6;
			table[6][1]=2;table[6][4]=9;table[6][7]=6;
			table[7][2]=7;table[7][4]=5;table[7][6]=9;
			table[8][3]=8;table[8][5]=4;
			sleep(1);
			printf("\n\n\t\t...L E V E L  1...");
			sleep(1);
			printf("\n\nYour SUDOKU table is:-\n");
			sleep(1);
			printgame(table);
			printf("\nLet's solve it...\n");
			sleep(1);
			game(table,level);
		case 2:
			table[0][3]=4;table[0][5]=3;
			table[1][0]=5;table[1][1]=8;table[1][7]=3;table[1][8]=4;
			table[2][1]=1;table[2][7]=6;
			table[3][0]=9;table[3][3]=7;table[3][5]=6;table[3][8]=8;
			table[5][0]=6;table[5][3]=9;table[5][5]=1;table[5][8]=2;
			table[6][1]=3;table[6][7]=1;
			table[7][0]=8;table[7][1]=2;table[7][7]=4;table[7][8]=3;
			table[8][3]=5;table[8][5]=9;
			sleep(1);
			printf("\n\n\t\t...L E V E L  2...");
			sleep(1);
			printf("\n\nYour SUDOKU table is:-\n");
			sleep(1);
			printgame(table);
			printf("\nLet's solve it...\n");
			sleep(1);
			game(table,level);
		case 3:
			table[0][3]=4;table[0][5]=9;
			table[1][1]=4;table[1][7]=5;
			table[2][2]=3;table[2][3]=2;table[2][5]=8;table[2][6]=7;
			table[3][0]=2;table[3][2]=5;table[3][6]=9;table[3][8]=1;
			table[4][4]=3;
			table[5][0]=8;table[5][2]=6;table[5][6]=3;table[5][8]=4;
			table[6][2]=2;table[6][3]=9;table[6][5]=7;table[6][6]=4;
			table[7][1]=6;table[7][7]=2;
			table[8][3]=8;table[8][5]=6;
			sleep(1);
			printf("\n\n\t\t...L E V E L  3...");
			sleep(1);
			printf("\n\nYour SUDOKU table is:-\n");
			sleep(1);
			printgame(table);
			printf("\nLet's solve it...\n");
			sleep(1);
			game(table,level);
		case 4:
			table[0][4]=8;table[0][6]=3;
			table[1][1]=1;table[1][3]=3;table[1][4]=5;
			table[2][2]=8;table[2][4]=7;table[2][8]=9;
			table[3][1]=8;
			table[4][0]=9;table[4][1]=4;table[4][2]=1;table[4][6]=8;table[4][7]=6;table[4][8]=2;
			table[5][7]=1;
			table[6][4]=4;table[6][6]=7;table[6][0]=3;
			table[7][7]=5;table[7][4]=9;table[7][5]=1;
			table[8][2]=9;table[8][4]=6;
			sleep(1);
			printf("\n\n\t\t...L E V E L  4...");
			sleep(1);
			printf("\n\nYour SUDOKU table is:-\n");
			sleep(1);
			printgame(table);
			printf("\nLet's solve it...\n");
			sleep(1);
			game(table,level);
		case 5:
			table[0][0]=7;table[0][1]=3;table[0][3]=6;table[0][4]=1;table[0][7]=8;
			table[1][1]=6;table[1][3]=7;table[1][5]=8;table[1][6]=9;table[1][7]=5;
			table[2][2]=5;table[2][7]=6;
			table[3][3]=8;table[3][7]=7;
			table[4][2]=1;table[4][4]=6;table[4][6]=4;
			table[5][1]=2;table[5][5]=9;
			table[6][1]=9;table[6][6]=7;
			table[7][1]=1;table[7][2]=8;table[7][3]=5;table[7][5]=3;table[7][7]=2;
			table[8][1]=7;table[8][4]=9;table[8][5]=4;table[8][7]=1;table[8][8]=3;
			sleep(1);
			printf("\n\n\t\t...L E V E L  5...");
			sleep(1);
			printf("\n\nYour SUDOKU table is:-\n");
			sleep(1);
			printgame(table);
			printf("\nLet's solve it...\n");
			sleep(1);
			game(table,level);
		case 6:
			table[0][1]=7;table[0][3]=2;table[0][5]=1;
			table[1][0]=8;table[1][2]=3;
			table[2][1]=5;table[2][4]=3;table[2][5]=8;
			table[3][0]=9;table[3][4]=5;table[3][6]=6;table[3][8]=4;
			table[4][2]=2;table[4][6]=8;
			table[5][0]=1;table[5][2]=6;table[5][4]=4;table[5][8]=3;
			table[6][3]=4;table[6][4]=6;table[6][7]=5;
			table[7][6]=1;table[7][8]=7;
			table[8][3]=1;table[8][5]=7;table[8][7]=9;
			sleep(1);
			printf("\n\n\t\t...L E V E L  6...");
			sleep(1);
			printf("\n\nYour SUDOKU table is:-\n");
			sleep(1);
			printgame(table);
			printf("\nLet's solve it...\n");
			sleep(1);
			game(table,level);
		case 7:
			table[0][3]=5;table[0][4]=6;table[0][5]=8;
			table[1][2]=1;table[1][6]=4;
			table[2][1]=2;table[2][4]=3;table[2][7]=6;
			table[3][0]=9;table[3][8]=7;
			table[4][0]=1;table[4][2]=4;table[4][6]=5;table[4][8]=8;
			table[5][0]=8;table[5][8]=6;
			table[6][1]=9;table[6][4]=5;table[6][7]=2;
			table[7][2]=8;table[7][6]=3;
			table[8][3]=6;table[8][4]=9;table[8][5]=4;
			sleep(1);
			printf("\n\n\t\t...L E V E L  7...");
			sleep(1);
			printf("\n\nYour SUDOKU table is:-\n");
			sleep(1);
			printgame(table);
			printf("\nLet's solve it...\n");
			sleep(1);
			game(table,level);
		case 8:
			table[0][0]=7;table[0][3]=3;table[0][4]=4;table[0][8]=8;
			table[1][0]=6;table[1][2]=1;table[1][6]=3;table[1][8]=9;
			table[2][5]=7;
			table[3][2]=9;table[3][8]=2;
			table[4][0]=1;table[4][4]=8;table[4][8]=6;
			table[5][0]=3;table[5][6]=1;
			table[6][3]=5;
			table[7][0]=9;table[7][2]=2;table[7][6]=7;table[7][8]=3;
			table[8][0]=8;table[8][4]=9;table[8][5]=1;table[8][8]=4;
			sleep(1);
			printf("\n\n\t\t...L E V E L  8...");
			sleep(1);
			printf("\n\nYour SUDOKU table is:-\n");
			sleep(1);
			printgame(table);
			printf("\nLet's solve it...\n");
			sleep(1);
			game(table,level);
		case 9:
			table[0][0]=2;table[0][2]=4;table[0][5]=8;table[0][8]=7;
			table[1][1]=8;table[1][3]=9;table[1][5]=7;table[1][7]=3;
			table[2][8]=5;
			table[3][0]=3;table[3][1]=7;table[3][7]=8;
			table[5][1]=2;table[5][7]=6;table[5][8]=4;
			table[6][0]=5;
			table[7][1]=6;table[7][3]=1;table[7][5]=9;table[7][7]=2;
			table[8][0]=1;table[8][3]=5;table[8][6]=9;table[8][8]=3;
			sleep(1);
			printf("\n\n\t\t...L E V E L  9...");
			sleep(1);
			printf("\n\nYour SUDOKU table is:-\n");
			sleep(1);
			printgame(table);
			printf("\nLet's solve it...\n");
			sleep(1);
			game(table,level);
		case 10:
			table[0][0]=6;table[0][3]=9;table[0][5]=2;table[0][8]=1;
			table[1][1]=7;table[1][3]=8;table[1][5]=5;table[1][7]=3;
			table[2][2]=2;table[2][6]=9;
			table[3][1]=1;table[3][2]=3;table[3][4]=8;table[3][6]=6;table[3][7]=4;
			table[4][3]=5;table[4][5]=6;
			table[5][1]=5;table[5][2]=6;table[5][4]=3;table[5][6]=2;table[5][7]=9;
			table[6][2]=4;table[6][6]=1;
			table[7][1]=6;table[7][3]=1;table[7][5]=3;table[7][7]=2;
			table[8][0]=5;table[8][3]=2;table[8][5]=4;table[8][8]=8;
			sleep(1);
			printf("\n\n\t\t...L E V E L  10...");
			sleep(1);
			printf("\n\nYour SUDOKU table is:-\n");
			sleep(1);
			printgame(table);
			printf("\nLet's solve it...\n");
			sleep(1);
			game(table,level);									
	}
}
int selectlevel(int level)
{
	char c='A';
	while(c!='E')
	{
		sleep(1);
		printf("\nEnter P for previous level.");
		sleep(1);
		printf("\nEnter N for next level.");
		sleep(1);
		printf("\nEnter T for try again.");
		sleep(1);
		printf("\nEnter E for exit the game.");
		sleep(1);
		printf("\nEnter your choice: ");
		scanf("%c",&c);
		switch(c)
		{
			case 'P':
				if(level==1)
					return 10;
				else 
					return level-1;	
				break;
			case 'N':
				if(level==10)
					return 1;
				else 
					return level+1;	
				break;		
			case 'T':
				return level;	
				break;		
			case 'E':
				sleep(1);
				printf("\nThankyou for playing this game!!!");
				lastadvertising();
				break;
			default:
				printf("\nEnter P, N, T or E");
				break;		
		}
	}
	
}
void check(int table[9][9],int level,int row,int col,int *num)
{
	int i,j,lr,ur,lc,uc,flag=0;
	if(row>=1 && row<=3)
	{
		lr=0;
		ur=2;
	}
	else if(row>=4 && row<=6)
	{
		lr=3;
		ur=5;
	}
	else if(row>=7 && row<=9)
	{
		lr=6;
		ur=8;
	}
	if(col>=1 && col<=3)
	{
		lc=0;
		uc=2;
	}
	else if(col>=4 && col<=6)
	{
		lc=3;
		uc=5;
	}
	else if(col>=7 && col<=9)
	{
		lc=6;
		uc=8;
	}
	for(i=lr;i<=ur;i++)
	{
		for(j=lc;j<=uc;j++)
		{
			if(table[i][j]==*num)
			{
				char ch='Y';
				sleep(1);
				printf("\n\nWrong choice...");
				sleep(1);
				printf("\nIf you want to insert new  number in this position then press Y otherwise N.");
				printf("\nAnd if you want to restart the game then press R.");
				sleep(1);
				printf("\nEnter your choice: ");
				fflush(stdin);
				scanf("%c",&ch);
				switch(ch)
				{
					case 'Y':
						printf("\nEnter new number: ");
						scanf("%d",num);
						check(table,level,row,col,num);
						break;
					case 'N':
						game(table,level);
						break;
					case 'R':
						board();
						break;			
					default:
						sleep(1);
						printf("\nEnter Y, N or R.");
						break;	
				}
				flag=1;
				break;
			}
			else
				continue;
		}
	}
	if(flag==0)
	{
		for(i=0;i<9;i++)
		{
			if(table[i][col-1]==*num)
			{
				char ch='Y';
				sleep(1);
				printf("\n\nWrong choice...");
				sleep(1);
				printf("\nIf you want to insert new  number in this position then press Y otherwise N.");
				printf("\nAnd if you want to restart the game then press R.");
				sleep(1);
				printf("\nEnter your choice: ");
				fflush(stdin);
				scanf("%c",&ch);
				switch(ch)
				{
					case 'Y':
						printf("\nEnter new number: ");
						scanf("%d",num);
						check(table,level,row,col,num);
						break;
					case 'N':
						game(table,level);
						break;
					case 'R':
						board();
						break;			
					default:
						sleep(1);
						printf("\nEnter Y, N or R.");
						break;	
				}
				flag=1;
				break;
			}
			else
				continue;
		}
		if(flag==0)
		{
			for(i=0;i<9;i++)
			{
				if(table[row-1][i]==*num)
				{
					char ch='Y';
					sleep(1);
					printf("\n\nWrong choice...");
					sleep(1);
					printf("\nIf you want to insert new  number in this position then press Y otherwise N.");
					printf("\nAnd if you want to restart the game then press R.");
					sleep(1);
					printf("\nEnter your choice: ");
					fflush(stdin);
					scanf("%c",&ch);
					switch(ch)
					{
						case 'Y':
							printf("\nEnter new number: ");
							scanf("%d",num);
							check(table,level,row,col,num);
							break;
						case 'N':
							game(table,level);
							break;
						case 'R':
							board();
							break;			
						default:
							sleep(1);
							printf("\nEnter Y, N or R.");
							break;	
					}	
					flag=1;
					break;
				}
				else
					continue;
			}
		}
	}
	if(flag==0)
	{
		table[row-1][col-1]=*num;
		printgame(table);
		game(table,level);
	}
}
void game(int table[9][9],int level)
{
	int i,j,flag=0;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(table[i][j]!=0)
				continue;
			else
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		system("clrscr");
		int row,col,num;
		printtable(table);
//		printf("\n");
		fflush(stdout);
		printf("\n\nEnter the position, where you want to insert a number(row,column): ");
		fflush(stdout);
//		putchar(CR);
		scanf("%d %d",&row,&col);
		sleep(1);
		printf("\nEnter the number: ");
		scanf("%d",&num);
		check(table,level,row,col,&num);
	}
	else
	{
		sleep(2);
		printf("\n\n\t!!!CONGRATULATIONS!!!");
		sleep(1);
		printf("\n\n\t...you solved level %d...\n\n",level);
//		selectlevel();
		board();
	}
}


int main()
{
	advertising();
	
	sleep(2);
  	system("clear");
  	printf("\n\n [!][!]...How to play...[!][!]\n\n");
  	sleep(1);
  	printf(" [#]1.) Here in a 9x9 Board have some numbers and some gaps...\n");
  	sleep(1);
  	printf(" [#]2.) Solve 9x9 Sudoku puzzles using only the numbers 1-9....\n");
  	sleep(1);
  	printf(" [#]3.) Please do not choose same number multiple times in a single row or column or small square...\n");
  	sleep(1);
  	printf(" [#]4.) Solve the empty squares using the provided clues...\n");
  	sleep(1);
  	printf(" [#]5.) Fill in every square to solve the puzzle...\n");
  	sleep(1);
  	printf(" [#]6.) The places where the numbers are present will shown in thee table..\n");
  	sleep(1);
  	printf(" [#]7.) The places [ X ] are present denotes that the places are already filled up..\n");
  	sleep(1);
  	printf(" [#]8.) The places you might fill up will denoted by [row,column] numbers..\n");
  	sleep(1);
  	printf(" [#]9.) You have to enter the row and the column number respect to the table where  you want to insert the number..\n");
  	sleep(1);
  	printf(" [!][!]...Please read following instruction carefully\n");
  	sleep(1);
  	printf(" [^][^]...The game start after 6 second later....\n");
  	sleep(5);
  	system("clrscr");
  
  	board();
	
//	printtable(table);
	//printgame(table);
	return 0;	
}
