#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void fecha_hora()
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf("\n\tDate: %s", asctime (timeinfo) );

}


#endif // DATE_H_INCLUDED
