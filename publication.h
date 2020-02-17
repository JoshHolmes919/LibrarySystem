#ifndef PUBLICATION_H
#define PUBLICATION_H

using namespace std;

class publication {
  int publicationID;
  std::string keywords[5];
public:
  publication ();
  publication (int ID,std::string name);
  ~publication();
  std::string title;
  bool borrowed;
};
#endif
