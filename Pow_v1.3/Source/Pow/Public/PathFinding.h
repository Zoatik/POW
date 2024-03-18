// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Algo/Reverse.h"
#include "PathFinding.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FCell
{
	GENERATED_BODY()
	int f_score; //sum of g and h
	int g_score; // movement cost from start to current FCell
	int h_score; // estimated movement cost from current FCell to target
	int parent_index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int index; // index de la FCell dans le grid
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int cell_state;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool is_taken;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool is_walkable; //définit si on doit prendre la FCell pour le path finding

	void update_f_score()
	{
		f_score = g_score + h_score;
	}

	int get_distance(int other_cell, int row, int col, bool allow_diag_path)
	{
		int dist_x = abs(other_cell / row - index / row);
		int dist_y = abs(other_cell / col - index / col);
		if (allow_diag_path)
		{
			if (dist_x < dist_y)
				return 14 * dist_x + (dist_y - dist_x) * 10;
			else if (dist_x > dist_y)
				return 14 * dist_y + (dist_x - dist_y) * 10;
			else
				return 14 * dist_x;
		}
		return 10 * (dist_x + dist_y);
	}

	bool operator==(const FCell& a) const
	{
		return (index == a.index);
	}

	FCell()
	{
		f_score = 0;
		g_score = 0;
		h_score = 0;
		index = 0;
		parent_index = 0;
		is_taken = false;
		is_walkable = false;
	}
	FCell(int f,int g,int h)
	{
		f_score = f;
		g_score = g;
		h_score = h;
		index = 0;
		parent_index = 0;
		is_taken = false;
		is_walkable = false;
	}

};
UCLASS()
class POW_API UPathFinding : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Utilities")
	static TArray<int> find_path(int row,int col,int start,int target, TArray<FCell> grid_cells, bool allow_diag_path);

	static TArray<int> find_neighbours(TArray<FCell> grid_cells,int current_cell_index,int row,int col, bool allow_diag_path);
	static TArray<int> retrace_path(TArray<FCell> grid_cells,int start_cell,int end_cell);

	
};
