#include <string>

class libroCalificar
{
 public:
  libroCalificar( string );
  void  setCourseName ( string );
  string getCourseName();
  void displayMessage();
 private:
  string courseName;
};
