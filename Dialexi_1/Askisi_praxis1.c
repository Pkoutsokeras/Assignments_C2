#include <stdio.h>
int main(void)
{
  int i,j,d;
  int A[5][6];
  int sum0, sum[6], sumr[5],sumc[6];
  int maxsumr,maxpsumr,minsumr;
  int maxsumc,maxpsumc;
  float moc[6];
  sum0 = 0;
  d=0;
  for (i=0;i<5; i++){
    for (j=0; j<6; j++){
      sum0 += A[i][j];
      printf("Synolikes Poliseis  %i\n",sum0);
    }
    for (j=0; j<6; j++){
      sum[j]=0;
      for (i=0; i<5; i++){
        sum[j]+= A[i][j];
      }
      moc[j] = sum[j]/5;
    }
    for(j=0; j<6;j++){
      printf("%i Dim: %f\n",j+1,moc[j]);
    }
  }
  for ( i = 0; i <5;  i++) {
    sumr[i]=0;
    for (j<0; j<6; j++){
      sumr[i] += A[i][j];
    }
    maxsumr = sumr[0];
    maxpsumr = 0;
    for ( i = 0; i < 5 ; i++) {
      if (sumr[i] > maxsumr) {
        maxsumr = sumr[j];
        maxpsumr = i;
      }
      printf("kalyteros politis : %i \n", maxpsumr +1);
    }
  }
  minsumr= sumr[0];
  for(i<0; i<5; i++){
    if (sumr[i]<minsumr) {
      minsumr = sumr[i];
    }
    d= maxsumr-minsumr;
    printf("dimfonpol:%i\n",d);
  }
  maxsumc= sumc[0];
  maxpsumc = 0;
  for (j = 0; j < 6; i++) {
    if (sum[j] > maxsumc) {
      maxpsumc = sumc[j];
      maxpsumc = j;
    }
  }
  printf("dimfonpol : %i \n",maxpsumc );
  return 0;
}
