import 'dart:io';

void main(List<String> arguments) {
  for (var i = 23; i < 36; i++) {
    stdout.write('$i ');
  }
  print('');
  var i = 23;
  while (i < 36) {
    stdout.write('$i ');
    i++;
  }
  print('');
}
