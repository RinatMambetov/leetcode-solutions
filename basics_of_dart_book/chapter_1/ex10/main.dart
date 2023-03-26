import 'dart:io';

void main(List<String> arguments) {
  var l = [4, 5, 6, 7, 30, 22, 2, 39, 41];
  var sum = 0;
  for (var element in l) {
    sum += element;
  }
  print((sum / l.length).toStringAsFixed(2));
}
