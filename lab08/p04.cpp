//
// Created by Alex on 26.12.2023.
//


# include <iostream>
using namespace std;

const int cells_num=9;
void readSolution(int grid[0][cells_num]);
bool isValid(const int grid[][cells_num]);
bool isValid(int i, int j, const int grid[][cells_num]);

int main() {
    //this program checks the solution of a sudoku puzzle

    //read a sudoku puzzle
    int grid[cells_num][cells_num];
    readSolution(grid); // read input
    //check the correctness
    cout << (isValid(grid) ? "Valid solution" : "Invalid solution");

    return 0;
}

// read a sudoku puzzle from the keyboard
void readSolution(int grid[0][cells_num]){
    cout << "Enter a sudoku puzzle:" << endl;
    for (int i = 0; i < cells_num; i++){
        for (int j = 0; j< cells_num; j++){
            cin >> grid[i][j];
        }
    }
}

// check whether the fixed cells are valid in the grid
bool isValid(const int grid[][cells_num]){
    for (int i = 0; i < cells_num; i++){
        for (int j = 0; j< cells_num; j++){
            if (grid[i][j] < 1 || grid[i][j] > cells_num ||  !isValid(i, j, grid)){ // checks the solution
                return false;
            }
        }
    }
    return true; //the fixed cells are valid
}

bool isValid(int i, int j, const int grid[][cells_num]){
    // Check whether grid[i][j] is valid at the i's row
    for (int column = 0; column < cells_num; column++){
        if (column != j && grid[i][column] == grid[i][j]) { // checks rows
            return false;
        }
    }

    //Check whether grid[i][j] is valid at the j's column
    for (int row = 0; row < cells_num; row++){
        if (row != i && grid[row][j] == grid[i][j]) { // checks rows
            return false;
        }
    }

    // Check whether grid[i][j] is valid in the 3-by-3 box
    for (int row = (i/3) * 3; row < (i/3)* 3 + 3; row++) {
        for (int col = (j/3)* 3; col < (j/3)*3 + 3; col++){
            if (row !=i && col !=j && grid[row][col] == grid [i][j]){
                return false;
            }
        }
    }

    return true; //the current value at grid[i][j] is valid
}
