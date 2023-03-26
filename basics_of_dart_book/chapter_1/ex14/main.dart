import 'dart:io';

void main(List<String> arguments) {
  print('Enter num (0-5):');
  String? num = stdin.readLineSync();
  switch (num) {
    case '0':
      print(0);
      break;
    case '1':
      print(1);
      break;
    case '2':
      print(2);
      break;
    case '3':
      print(3);
      break;
    case '4':
      print(4);
      break;
    case '5':
      print(5);
      break;
    default:
      print('none');
  }
}
