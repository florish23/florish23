#pragma once
#include <vector>

enum figure_name
{
	none = '.',
	WhiteKing = 'K',
	WhiteQueen = 'Q',
	WhiteRook = 'R',
	WhiteBishop = 'B',
	WhiteKnight = 'N',
	WhitePawn = 'P',
	BlackKing = 'k',
	BlackQueen = 'q',
	BlackRook = 'r',
	BlackBishop = 'b',
	BlackKnight = 'n',
	BlackPawn = 'p',
};

struct coord
{
	int x;
	int y;
	coord(int _x, int _y) : x(_x), y(_y) {};
	bool operator == (const coord & rhs)
	{
		if (x == rhs.x && y == rhs.y)
		{
			return true;
		}
		return false;
	}
};

class Figure
{
private:
	figure_name name;
	coord pos;
	std::vector<coord> available;
public:
	void set_name(figure_name _name);
	void set_pos(coord _pos);
	figure_name get_name();
	coord get_pos();
	int find_pos(coord pos);
	bool check_move(coord x);
	void update_available(figure_name* board[8]);
	void set_WhitePawn(figure_name* board[8]);
};

