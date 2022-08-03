//#include<stdio.h>
 //mohamed v
int main()
{
  int matx1[4][4], matx2[4][4], matx3[4][4];
  int i,j,row,col;
  
  printf("Combien de lignes (max 4) et de colonnes (max 4)?\n");
  scanf("%d%d",&row,&col);
  
  printf("\nEntrez la première matrice:\n");
  for(i=0; i < row; ++i)
    for(j = 0; j < col; ++j)
      scanf("%d",&matx1[i][j]);
      
  printf("\nEntrez la deuxième matrice:\n");
  for(i = 0; i < row; ++i)
    for(j = 0; j < col; ++j)
      scanf("%d",&matx2[i][j]);
  
  printf("\nMatrice après l'addition:\n");
  for(i = 0; i < row; ++i)
  {
    for(j=0; j < col; ++j)
    {
      matx3[i][j] = matx1[i][j] + matx2[i][j];
      printf("%d ",matx3[i][j]);
    }
    printf("\n");
  }
 
  return 0;
}
