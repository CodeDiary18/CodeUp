#include <iostream>

int main(){
	int arr[101][101] = {};
	int h, w, n, l, d, x, y, max;
	std::cin >> h >> w >> n;

	for (int i = 0; i < n; i++){
		std::cin >> l >> d >> x >> y;
		if (d == 0) 
			max = w - y + 1;
		else 
			max = h - x + 1;
		for (int j = 1; j <= l; j++) {
			if (d == 0)
				arr[x][y++] = 1;
			else 
				arr[x++][y] = 1;
			if (j == max)
				break;
		}
	}
	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= w; j++)
			std::cout << arr[i][j] << ' ';
		std::cout <<"\n";
	}
  return 0;
}
