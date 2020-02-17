#ifndef LIBRARY_H
#define LIBRARY_H
#include "publication.h"


class library {
public:
  library();
  ~library();
  publication publicationsList [];
  void movePublication ()
  {
    //move the thing
  }
  std::string location;
  int shelves;
};
#endif
