import 'dart:io';

void main(List<String> arguments) {
  print("Enter letter:");
  String? letter = stdin.readLineSync();
  switch (letter) {
    case 'a':
    case 'e':
    case 'y':
    case 'u':
    case 'i':
    case 'o':
    case 'o':
      print('$letter is vowel');
      break;
    default:
      print('$letter is consonant');
  }
}
