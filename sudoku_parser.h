Sudoku S_Read(char *fn);	/*read a sudoku from file fn */

FILE * OpenCompactMultiSudokuFile(char *fn);
Sudoku S_InitStdSudoku(int compact);
int S_ReadNextCompactStandard(FILE *f, Sudoku *S);
void GssOut(Sudoku S, FILE *f, char *pattern);
