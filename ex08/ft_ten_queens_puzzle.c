#include <unistd.h>
static void	print_solution(int board[])
{
	char	c;
	int	i;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}
// Backtracking: check if the queen can be put in (row, col) //
static int	is_safe(int board[], int col, int row)
{
	int	prev_col;
	int	prev_row;

	prev_col = 0;
	while (prev_col < col)
	{
		prev_row = board[prev_col];
		if (prev_row == row
			|| prev_row - prev_col == row - col
			|| prev_row + prev_col == row + col)
			return (0);
		prev_col++;
	}
	return (1);
}
// Recursivity to solve //
static void	solve(int board[], int col, int *count)
{
	int	row;

	if (col == 10)
	{
		print_solution(board);
		(*count)++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_safe(board, col, row) == 1)
		{
			board[col] = row;
			solve(board, col + 1, count);
		}
		row++;
	}
}
int	ft_ten_queens_puzzle(void)
{
	int	board[10];  // 存储每列皇后的行位置
	int	count;  // 记录解法数

	count = 0;
	solve(board, 0, &count);
	return (count);
}
#include <stdio.h>
int	main()
{
	int	solutions;

	solutions = ft_ten_queens_puzzle();
	printf("Total Solutions: %i\n", solutions);
	return (0);
}
