#include<iostream>

int main(){
	int map[11][11];
	int x = 2, y = 2;
	int i, j;

	for (i = 1; i <= 10; i++)
		for (j = 1; j <= 10; j++)
			std::cin >> map[i][j];
	while (map[x][y] != 2){
		map[x][y] = 9;
		if (map[x][y + 1] != 1) 
			y += 1;
		else if 
			(map[x + 1][y] != 1) 
			x += 1;
		else 
			break;
	}
	map[x][y] = 9;

	for (i = 1; i <= 10; i++){
		for (j = 1; j <= 10; j++)
			std::cout << map[i][j] << ' ';
		std::cout << "\n";
	}
	return 0;
}
