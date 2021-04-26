/* *************************************
 * Использована методика Е. Васильченко (http.j/charmel.chat.ru),
 * опубликованная в журнале РХ 2000 NN 3-5
 * 
 ************************************* */
#include <stdio.h>
#include <math.h>
#include "wyhtrans.cpp"
#include <iostream>
#include "charint.cpp"
#include <string.h>
int main(int argc, char *argv[])
{
    printf("\nИспользование : w1tr -значение параметр...");
    printf("\n\tпример : w1tr -Ri 1000.0 -a 3.5 -h 5.0\n");
    if (argc>0)
    {
      if (argc%2==0)
      {
          printf("\nневерное количество параметров : %d\n",argc);
          return 1;
      }
    }
    WyhTrans tr;
    //std::cout<<'\n'<<"argc= "<<argc;
    for (int i=(argc-1)/2;i>0;i-=1)
    {
      printf("\n i=%d agr=%s",i,argv[i*2-1]);  
      //std::cout<<'\n'<<strcmp(argv[i*2-1],"-is_hot_steel");
      if (strcmp(argv[i*2-1],"-is_hot_steel")==0)
      {
          tr.is_hot_steel=false;
          continue;
      }
      CharInt chi(argv[i*2]);
     // std::cout<<"\n"
     //     <<argv[i*2-1]<< " : " <<argv[2*i]
      //    <<" =  "<<chi.dfloat  ;
      if (strcmp(argv[i*2-1],"-Ri")==0)
      {
          tr.Ri=(float)chi.dfloat;
         // std::cout<<"\n Ri="<<tr.Ri;
          continue;
      }
      if (strcmp(argv[i*2-1],"-Ra")==0)
      {
          tr.Ra=(float)chi.dfloat;
          continue;
      }
      if (strcmp(argv[i*2-1],"-I0")==0)
      {
          tr.I0=(float)chi.dfloat;
          continue;
      }
      if (strcmp(argv[i*2-1],"-Rn")==0)
      {
          tr.Rn=(float)chi.dfloat;
          continue;
      }
      if (strcmp(argv[i*2-1],"-F_low")==0)
      {
          tr.F_low=(float)chi.dfloat;
          continue;
      }
      if (strcmp(argv[i*2-1],"-A")==0)
      {
          tr.A=(float)chi.dfloat;
          continue;
      }
      if (strcmp(argv[i*2-1],"-level")==0)
      {
          tr.level=-1;
          continue;
      }
      if (strcmp(argv[i*2-1],"-a")==0)
      {
          tr.a=(float)chi.dfloat;
          continue;
      }
      if (strcmp(argv[i*2-1],"-b")==0)
      {
          tr.b=(float)chi.dfloat;
          continue;
      }
      if (strcmp(argv[i*2-1],"-c")==0)
      {
          tr.c=(float)chi.dfloat;
          continue;
      }
      if (strcmp(argv[i*2-1],"-h")==0)
      {
          tr.h=(float)chi.dfloat;
          continue;
      }
      if (strcmp(argv[i*2-1],"-nu")==0)
      {
          tr.nu=(float)chi.dfloat;
          continue;
      }
    }
    tr.print_data();
    tr.raschet();
    return 0;
}

