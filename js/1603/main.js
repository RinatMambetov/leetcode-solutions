class ParkingSystem {
  constructor(big, medium, small) {
    this.big = big;
    this.medium = medium;
    this.small = small;
  }

  addCar(carType) {
    if (
      (carType == 1 && this.big == 0) ||
      (carType == 2 && this.medium == 0) ||
      (carType == 3 && this.small == 0)
    )
      return false;

    if (carType == 1) this.big--;
    if (carType == 2) this.medium--;
    if (carType == 3) this.small--;

    return true;
  }
}

let big = 1;
let medium = 1;
let small = 0;

var obj = new ParkingSystem(big, medium, small);
console.log(obj.big);
console.log(obj.medium);
console.log(obj.small);

console.log(obj.addCar(1));
console.log(obj.addCar(2));
console.log(obj.addCar(3));
console.log(obj.addCar(1));
