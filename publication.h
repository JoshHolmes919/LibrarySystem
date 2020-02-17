#ifndef PUBLICATION_H
#define PUBLICATION_H

using namespace std;

class publication {
public:
  const int publicationISBN;
  std::string keywords[5];
  publication (int id, std::string name)
  {
    publicationISBN = id;
    title = name;
  }
  ~publication();
  std::string title;
  std::string publisher;
  float datePublished;
  float wordcount;
};

class book : public publication {
public:
  book(std::string name, bool fict)
  {
    author = name;
    fiction = fict;
  }
  ~book();
  std::string author;
  bool fiction;
};
#endif
