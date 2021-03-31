#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int square_width = 3;
const int digged = -3;
const int not_digged = -2;
const int mine_here = -1;

bool win(int** board, int m, int n);
int number_of_mine(int** board,int m , int n, int x, int y);
void createBoard(int** board, int m, int n, int mine);
void updateBoard(int** board, int m, int n, int x, int y);
void printBoard(int** board, int m, int n, int x, int y);
void printMine(int** board, int m, int n);
void checkMine(int** board, int m, int n);


int main(){
	cout << "WELCOME TO MINESWEPPER !" << endl;
	int m,n;
	cout << "Enter number of rows: ";
	cin >> m;
	while(m<=0){
		cout << "Invalid input, try again: ";
		cin >> m;
	}
	cout << "Enter number of columns: ";
	cin >> n;
	while(n<=0){
		cout << "Invalid input, try again: ";
		cin >> n;
	}
	
	cout << "Enter number of mines: ";
	int K;
	cin >> K;
	while(K<=0 || K>m*n){
		cout << "Invalid input, try again";
		cin >> K;
	}
	
	int** board = new int* [m];
	for(int i = 0; i<n; i++){
		board[i] = new int[n];
	}
	
	for(int i = 0; i<n; i++){
		for(int j= 0; j<n; j++){
			board[i][j] = not_digged;
		}
	}
	
	createBoard(board, m, n, K);
	
	printBoard(board, m, n, 0, 0);
	
	checkMine(board, m, n);
	
	return 0;
	
}
void createBoard(int** board, int m, int n, int mine){
	srand(time(0));
	while (mine > 0) {
		int temp1, temp2;
		temp1 = rand() % m;
		temp2 = rand() % n;
		if (board[temp1][temp2] != -1)
		{
			board[temp1][temp2] = mine_here;
			mine--;
		}
	}
}
bool win(int** board, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] == not_digged) return false;
		}
	}
	return true;
}
int number_of_mine(int** board,int m , int n, int x, int y){
	int mine = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		if (i >= 0 && i < m)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (j >= 0 && j < n)
				{
					if (i == x && j == y) continue;
					if (board[i][j] == mine_here) mine++;
				}
			}
		}
	}

	return mine;
}
void updateBoard(int** board, int m, int n, int x, int y)
{
	for (int i = x - 1; i <= x + 1; i++)
	{
		if (i >= 0 && i < m)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (j >= 0 && j < n)
				{
					if (i == x && j == y) continue;
					if (board[i][j] == not_digged)
					{
						board[i][j] = number_of_mine(board, m, n, i, j);
						if (board[i][j] == 0) updateBoard(board, m, n, i, j);
					}
				}
			}
		}
	}

}
void printBoard(int** board, int m, int n, int x, int y){
	for(int i = 0; i<60; i++){
		cout << endl;
	}
bool need_to_update = false;
cout << setw(square_width*2-2) << ' ';
for (int i = 0; i < n; i++) {
		cout << setw(square_width) << i + 1;
	}
	cout << endl << endl;
	for (int i = 0;i<m;i++){
		cout << setw(square_width) << i + 1;
		cout << setw(square_width - 2) << "";
	for(int j = 0; j<n; j++){
		if(board[i][j] == mine_here || board[i][j] == not_digged) cout << setw(square_width) << ' ';
		else if(board[i][j] == digged){
			board[i][j] = number_of_mine(board,m,n,x,y);
			if(board[i][j] == 0){
				need_to_update =  true;
				cout << setw(square_width) << "";
			}
			else cout << setw(square_width) << board[i][j];
		}
		else
				if(board[i][j] != 0) cout << setw(square_width) << board[i][j];
				else cout << setw(square_width) <<"";
	}
	cout << endl;
}
if(need_to_update){
	updateBoard(board,m,n,x,y);
	printBoard(board,m,n,x,y);
	need_to_update = false;
	}
}
void printMine(int** board, int m, int n){
	for(int i = 0; i<60;i++) cout << endl;
	cout << setw(square_width*2-2) <<' ';
	for(int i = 0; i<n; i++){
		cout << setw(square_width) << i+1;
	}
	cout << endl << endl;
	for(int i = 0; i<m;i++){
		cout <<setw(square_width) << i+1;
		cout << setw(square_width -2) <<"";
		for(int j = 0;j<n;j++){
			if(board[i][j] == mine_here) cout << setw(square_width) << 'x';
			else if(board[i][j] == not_digged) cout << setw(square_width) <<"-";
			else if(board[i][j] ==0) cout << setw(square_width) << "";
			else cout << setw(square_width) << board[i][j];
		}
		cout << endl;
	}
	cout << "YOU ARE DEAD !" << endl;
}
void checkMine(int** board, int m, int n){
	int alive = 1;
	while (alive == 1 && !win(board,m,n)){
		cout << "Please enter the position you want to dig: ";
		int x,y;
		cin >> y >> x;
		while(x>m || y>n){
			cout << "Invalid input, try again: ";
			cin >> y >>x;
		}
	x--; y--;
	if(board[x][y] == not_digged){
		board[x][y] = digged;
		printBoard(board,m,n,x,y);
		cout << "That's a safe place" << endl;
	}
	else if(board[x][y] == mine_here){
		alive = 0;
		printMine(board,m,n);
	}
	else{
		cout <<"You have already dig here" << endl;
		continue;
	}
	} 
	if(win(board,m,n)) cout << "YOU ARE WINNER !";
}

