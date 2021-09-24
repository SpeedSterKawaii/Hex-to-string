#include <some_files_you_need_to_include_yourself>//fine fine sstream iostream string
int hex_code = 48656c6c6f2066726f6d207370656564737465726b617761696921;//whatever u wanna convert ;)

std::string ConvertHexIntoString(int hex, bool tf) {//joke the bool doesnt work lol
  char hexString[4*sizeof(int)+1];
  sprintf(hexString,"%i", hex); //sprintf printf sprintf sprintf.
  return std::string(hexString);//this will return the hex code.
}

void Load()//wherever u want to exec the function..
{
  ConvertHexIntoString(hex_code, true);
  //it will return as "Hello from speedsterkawaii!"
}
