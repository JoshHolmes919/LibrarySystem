#include <iostream>

int isbn_reduncancy ( int x [10] )
{
  int sum = 0;

  for (int i = 0; i < 10; i++)
  {
    sum += (11-i)*x[i];
  }
  if ((sum % 11) == 0)
  {
    return 1;
  } else {
    return 0;
  }
}
