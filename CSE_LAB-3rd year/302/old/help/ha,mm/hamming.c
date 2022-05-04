// ------------------------------------------------------------------------
// File:    hamming.c
// Date:    August 7, 2000
//
// Encoding and decoding of a Hamming code. 
// ------------------------------------------------------------------------
// This program is complementary material for the book:
//
// R.H. Morelos-Zaragoza, The Art of Error Correcting Coding, Wiley, 2002.
//
// ISBN 0471 49581 6
//
// This and other programs are available at http://the-art-of-ecc.com
//
// You may use this program for academic and personal purposes only. 
// If this program is used to perform simulations whose results are 
// published in a journal or book, please refer to the book above.
//
// The use of this program in a commercial product requires explicit
// written permission from the author. The author is not responsible or 
// liable for damage or loss that may be caused by the use of this program. 
//
// Copyright (c) 2002. Robert H. Morelos-Zaragoza. All rights reserved.
// ------------------------------------------------------------------------

#include <math.h>
#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <stdlib.h>
#define MAX_RANDOM LONG_MAX    // Maximum value of random() 

int i,j,l,index1;
int n, k;
int code[1024];
int red[1024], info[1024];
int m;
int parity[10];
int syn;
int error;

int test, result;

main(int argc, char *argv[])
{

  if (argc != 3)
    {
      printf("Usage: %s   m   position_error\n", argv[0]);
      exit(0);
    }

  sscanf(argv[1],"%d",  &m);
  sscanf(argv[2],"%d",  &error);

  n = pow(2,m)-1; 
  k = n - m;

  // Compute parity positions
  parity[1] = 1;
  for (i=2; i<=m; i++)
    parity[i] = (parity[i-1]<<1) & 0xfffffffe;

  printf("parity positions: ");
  for (i=1; i<=m; i++) printf("%2d ", parity[i]); printf("\n");

  // Generate random message
  for (i=1; i<=k; i++)
    info[i] = ( random() >> 10) & 0x01;

  printf("information bits = ");
  for (j=1; j<=k; j++) printf("%1d", info[j]);
  printf("\n");

  // Compute parity bits
  for (j=1; j<=m; j++)
  {
    red[j] = 0;
    l = 0;
    for (i=1; i<=n; i++)
    {
      // Check that "i" is not a parity position = not a power of 2
      result = 0;
      test = 1;
      for (index1=1; index1<=m; index1++)
      {
        if (i==test) result = 1;
        test *= 2;
      }
      if (!result)
      {
        l++;
        if ( (i>>(j-1)) & 0x01 )
          red[j] ^= info[l];
      }
    }
  }

  printf("parity bits = ");
  for (j=1; j<=m; j++) printf("%1d", red[j]);
  printf("\n");

  // Transmit codeword
  i = 1;
  l = 1;
  for (j=1; j<=n; j++)
    if (j==parity[l] && l<=m)
    {
      code[j] = red[l]; l++;
    }
    else
    {
      code[j] = info[i]; i++;
    }


  printf("codeword = ");
  for (j=1; j<=n; j++) printf("%1d", code[j]);
  printf("\n");

  // Add a hard error
  code[error] ^= 1;

  printf("received = ");
  for (j=1; j<=n; j++) printf("%1d", code[j]);
  printf("\n");

  // Compute syndrome 
  syn = 0;
  for (i=1; i<=n; i++)
    if (code[i]) syn ^= i;

  printf("syndrome = %d\n", syn);

  // Correct error if needed
  if (syn)
    code[syn] ^= 1;

  printf("estimate = ");
  for (j=1; j<=n; j++) printf("%1d", code[j]);
  printf("\n");

}

