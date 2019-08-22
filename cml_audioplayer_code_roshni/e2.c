enum Color { red, orange, yellow, green, blue, indigo, violet };
 

 int main()
{
 const char* color_name(enum Color col) {
  switch (col) {
  case red: return printf("red");
  case orange: return "orange";
  case yellow: return "yellow";
  case green: return "green";
  case blue: return "blue";
  case indigo: return "indigo";   /* Error: duplicate label (yellow) */
  case violet: return "violet";   /* Error: duplicate label (green) */
  if(color_name=="red")
  {
   printf("success");
 }
  }
}
 return 0;
}

