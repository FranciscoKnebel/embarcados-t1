#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

#include "goertzelfilter.h"

#define LEN(a) (sizeof(a)/sizeof(a[0]) )

int main() {

  // This will hold our input and output data
  double data[1024] = { 0. };
  double complex filtered[1024] = { 0. };

  // This will hold the filter constants
  GoertzelFilter g = { 0. };

  int n;
  int nwindow = 16;

  double f = 4./LEN(data) ;

  // Generate data with noise
  for ( n = 0 ; n < LEN(data) ; n++ ) {
    data[n] = sin( n * (2.*M_PI) * f ) + 0.5*((float)rand()/RAND_MAX - 0.5);
  }

  // Set up the filter constants, note that we choose a frequency
  g = goertzelSetup( f );

  // Filter the data using a sliding window
  for( n = 0 ; n < LEN(data)-nwindow ; n++ ) {
    filtered[n+nwindow/2]  = goertzelFilterC( &data[n], nwindow, &g )/nwindow;
  }

  // Print the real Valued Data (1st column) and complex valued Goertzel output
  for( n = 0 ; n < LEN(data); n++ ) {
    printf( "%g %g %g\n", data[n], creal(filtered[n]), cimag(filtered[n]) );
  }

}
