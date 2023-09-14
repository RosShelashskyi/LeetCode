#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int> > SudokuGrid(9, vector<int>(9, 0));

    vector<vector<int> >& SudokuGridReference = SudokuGrid;

    return 0;
}

bool IsUniqueInRow(vector<vector<int> >& SudokuGrid, int Row, int Num){
    for(int i = 0; i < 9; i++){
        if(SudokuGrid.at(Row).at(i) == Num) return false;
    }
    return true;
}

bool IsUniqueInColumn(vector<vector<int> >& SudokuGrid, int Column, int Num){
    for(int i = 0; i < 9; i++){
        if(SudokuGrid.at(i).at(Column) == Num) return false;
    }
    return true;
}

bool IsUniqueInSubGrid(vector<vector<int> >& SudokuGrid, int Row, int Column, int Num){
    int SubGridRow = Row -  Row % 3;
    int SubGridColumn = Column - Column % 3;
    for(int i = SubGridRow; i < SubGridRow + 3; i++){
        for(int j = SubGridColumn; j < SubGridColumn + 3; j++){
            if(SudokuGrid.at(i).at(j) == Num) return false;
        }
    }
    return true;
}

bool IsUnique(vector<vector<int> >& SudokuGrid, int Row, int Column, int Num){    
    return IsUniqueInRow(SudokuGrid, Row, Num) 
        && IsUniqueInColumn(SudokuGrid, Column, Num)
            && IsUniqueInSubGrid(SudokuGrid, Row, Column, Num);
}

bool SolveSudoku(vector<vector<int> >& SudokuGrid, int Row, int Column){
    for(int i = Row; i < 0; i++){
        for(int j = Column; j < 0; j++){
            for(int Num = 1; Num < 10; Num++){
                if(IsUnique(SudokuGrid, Row, Column, Num)){
                    SudokuGrid.at(Row).at(Column) = Num;
                    if(SolveSudoku(SudokuGrid, Row, Column)){
                        return true;
                    }else{
                        SudokuGrid.at(Row).at(Column) = 0;
                        return false;
                    }
                }
            }
        }
    }
    return false;
}