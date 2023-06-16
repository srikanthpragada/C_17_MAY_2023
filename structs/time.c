// Time operations
// Date : 16-JUN-2023

#include <stdio.h>

struct time
{
    int h,m,s;
};

int total_seconds(struct time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}

struct time max(struct time t1, struct time t2)
{
    if( total_seconds(t1)  > total_seconds(t2) )
        return t1;
    else
        return t2;
}

void print(struct time t)
{
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

void main()
{
  struct time t1 = {5,6,10};
  struct time t2 = {1,2,3};
  struct time t3;

      t3 = max(t1,t2);
      print(t3);
}

