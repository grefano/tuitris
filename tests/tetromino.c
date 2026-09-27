

#include <assert.h>
#include <stdio.h>
#include "tetromino.h"

static void test_choose_tetromino(void)
{
  int count[7];
  for (int i = 0; i < 7; i++){
    count[i] = 0;
  }
  for (int i = 0; i < 7; i++){
    TetrominoType type = tetromino_choose();
    count[type]++;
  }
  
  for(int i = 0; i < 7; i++){
    printf("count: %d\n", count[i]);
    assert(count[i] == 1);

  }

} 


void test_tetromino(void){
  test_choose_tetromino();
}
