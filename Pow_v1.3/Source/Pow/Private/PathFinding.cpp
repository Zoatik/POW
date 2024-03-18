// Megalone All Rights Reserved


#include "PathFinding.h"

TArray<int> UPathFinding::find_path(int row, int col, int start, int target, TArray<FCell> grid_cells, bool allow_diag_path)
{
	TArray<FCell> open_list;
	TArray<FCell> closed_list;
	FCell cell_start;
	TArray<int> path;
	cell_start.index = start;
	cell_start.f_score = 0;
	cell_start.g_score = 0;
	cell_start.h_score = 0;
	open_list.Add(cell_start);

	//*****DEBUG******//
	int tmp_len = 0;
	for (int i(0); i < grid_cells.Num(); i++)
	{
		if (grid_cells[i].is_walkable)
			tmp_len++;
	}
	UE_LOG(LogTemp, Warning, TEXT("MYLOG Number of walkable cells : %d"), tmp_len);


	while (open_list.Num() > 0)
	{
		FCell current_cell = open_list[0];
		for (int i(1); i < open_list.Num(); i++) //finds the cell with lowest f_score
		{
			if (open_list[i].f_score < current_cell.f_score || (open_list[i].f_score == current_cell.f_score && open_list[i].h_score < current_cell.h_score))
				current_cell = open_list[i];

		}
		open_list.Remove(current_cell);
		closed_list.Add(current_cell);

		if (current_cell.index == target)
		{
			path = retrace_path(grid_cells, start, target);
			return path;
		}
		TArray<int> new_neighbours = find_neighbours(grid_cells, current_cell.index, row, col, allow_diag_path);
		UE_LOG(LogTemp, Warning, TEXT("number of neighbours avant : %d"), new_neighbours.Num());

		TArray<int> neighbours_to_remove;
		for (int i(0); i < new_neighbours.Num(); i++)//on enlève les neighbours déjà traités (closed_list)
		{
			for (int j(0); j < closed_list.Num(); j++)
			{
				if (new_neighbours[i] == closed_list[j].index)
				{
					neighbours_to_remove.Add(new_neighbours[i]);
					break;
				}

			}
		}

		for (int i(0); i < neighbours_to_remove.Num(); i++)
		{
			new_neighbours.Remove(neighbours_to_remove[i]);
		}
		//DEBUG
		for (int i(0); i < new_neighbours.Num(); i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("index du neighbour: %d"), new_neighbours[i]);
		}


		for(int i(0); i<new_neighbours.Num(); i++)
		{
			int new_neighbour_g_cost = current_cell.g_score + grid_cells[new_neighbours[i]].get_distance(current_cell.index, row, col, allow_diag_path);
			if (new_neighbour_g_cost < grid_cells[new_neighbours[i]].g_score || !open_list.Contains(grid_cells[new_neighbours[i]]))
			{
				grid_cells[new_neighbours[i]].g_score = new_neighbour_g_cost;
				grid_cells[new_neighbours[i]].h_score = grid_cells[new_neighbours[i]].get_distance(target, row, col, allow_diag_path);
				grid_cells[new_neighbours[i]].update_f_score();
				grid_cells[new_neighbours[i]].parent_index = current_cell.index;

				if (!open_list.Contains(grid_cells[new_neighbours[i]]))
					open_list.Add(grid_cells[new_neighbours[i]]);
			}

		}

	}
	path.Add(-1);
	return path;
}

TArray<int> UPathFinding::find_neighbours(TArray<FCell> grid_cells, int current_cell_index, int row, int col, bool allow_diag_path)
{
	TArray<int> neighbours;
	
	if (current_cell_index - col >= 0 && grid_cells[current_cell_index - col].is_walkable == true)// bas
		neighbours.Add(current_cell_index - col);
	if (current_cell_index + col < row * col - 1 && grid_cells[current_cell_index + col].is_walkable == true)// haut
		neighbours.Add(current_cell_index + col);
	if (current_cell_index - 1 >= 0 && current_cell_index % col != 0 && grid_cells[current_cell_index - 1].is_walkable == true)// gauche
		neighbours.Add(current_cell_index - 1);
	if (current_cell_index + 1 < row * col - 1 && (current_cell_index + 1) % col != 0 && grid_cells[current_cell_index + 1].is_walkable == true)// droite
		neighbours.Add(current_cell_index + 1);
	if (allow_diag_path) // seulement si on autorise le passage en diagonale
	{
		if (current_cell_index - col - 1 >= 0 && current_cell_index % col != 0 && grid_cells[current_cell_index - col - 1].is_walkable == true) //bas gauche
			neighbours.Add(current_cell_index - col - 1);
		if (current_cell_index + col - 1 < row * col - 1 && current_cell_index % col != 0 && grid_cells[current_cell_index + col - 1].is_walkable == true) //haut gauche
			neighbours.Add(current_cell_index + col - 1);
		if (current_cell_index + col + 1 < row * col - 1 && (current_cell_index + 1) % col != 0 && grid_cells[current_cell_index + col + 1].is_walkable == true) //haut droite
			neighbours.Add(current_cell_index + col + 1);
		if (current_cell_index - col + 1 >= 0 && (current_cell_index + 1) % col != 0 && grid_cells[current_cell_index - col + 1].is_walkable == true) //bas droite
			neighbours.Add(current_cell_index - col + 1);
	}
	return neighbours; //retourne TArray des index des cases voisines
}

TArray<int> UPathFinding::retrace_path(TArray<FCell> grid_cells, int start_cell, int end_cell)
{
	FCell current_cell = grid_cells[end_cell];
	TArray<int> path;
	while (current_cell.index != start_cell)
	{
		path.Add(current_cell.index);
		current_cell = grid_cells[current_cell.parent_index];
	}
	Algo::Reverse(path);
	return path;
}
