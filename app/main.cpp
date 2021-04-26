
#include <iostream>
#include <stdlib.h>

#include "Foo.h"

int count{};

bool numch(char* ch)
{
  int check{};
  for (int i = 0; i < count; i++)
  {
    for (char j = 48; j <= 57; j++)
    {
      if (ch[i] == j)
      {
        check = 1;
        break;
      }
    }
  }
  return check;
}

bool uppercase(char* ch)
{
  int check{};
  for (int i = 0; i < count; i++)
  {
    for (char j = 65; j <= 90; j++)
    {
      if (ch[i] == j)
      {
        check = 1;
        break;
      }
    }
  }
  return check;
}

bool lowercase(char* ch)
{
  int check{};
  for (int i = 0; i < count; i++)
  {
    for (char j = 97; j <= 122; j++)
    {
      if (ch[i] == j)
      {
        check = 1;
        break;
      }
    }
  }
  return check;
}

bool passVerifier(char* pass)
{
  bool check = (count >=6 && uppercase(pass) && lowercase(pass) && numch(pass));
  return check;
}

int main()
{
  char pass[120] = {};
  std::cout << "Enter pass : ";
  std::cin >> pass;

  for (count = 0; pass[count] != 0; count++);

  std::cout << '(' << pass << ") ---> " << (passVerifier(pass) ? "true" : "false") << '\n';

  return 0;
}
