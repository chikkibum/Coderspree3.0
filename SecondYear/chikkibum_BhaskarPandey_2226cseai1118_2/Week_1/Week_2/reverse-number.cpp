
int reverse(int a) {

  int reversed_number = 0, remainder;

  while(a != 0) {
    remainder = a % 10;
    reversed_number = reversed_number * 10 + remainder;
    a /= 10;
  }

  return reversed_number;

}