import 'dart:io';

void main(List<String> arguments) {
  for (var i = -35; i < 0; i++) {
    stdout.write('$i ');
  }
  print('');

  for (var i = -35; i < 0; i++) {
    if (i % 4 == 0) stdout.write('$i ');
  }
  print('');

  for (var i = -35; i < 0; i++) {
    if (i % 7 == 0) stdout.write('$i ');
  }
}
