#include "Montage.h"

#include <stdlib.h>
#include <string>
#include <iostream>

void Montage::compose(const vector<string> &images, int cols, int rows, const string& composedImagePath)
{
  string montageCmd = "montage -geometry 60x60 -tile " + to_string(cols) + "x" + to_string(rows) + " ";
  for (auto &path : images)
  {
    montageCmd += path + " ";
  }
  montageCmd += string(composedImagePath);
  int ret = system(montageCmd.c_str());
  if (ret == -1)
  {
    //cout << "montage error" << endl;
  }
}

