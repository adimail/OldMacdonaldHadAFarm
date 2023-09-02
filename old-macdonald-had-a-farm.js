class FarmAnimal {
  constructor(name, sound) {
    this.name = name;
    this.sound = sound;
  }

  makeSound() {
    return this.sound;
  }

  getName() {
    return this.name;
  }
}

const animals = [
  new FarmAnimal("Cows", "moo"),
  new FarmAnimal("Chicks", "cluck"),
  new FarmAnimal("Pigs", "oink"),
  new FarmAnimal("Ducks", "quack")
];

for (const animal of animals) {
  console.log("Old MacDonald had a farm");
  console.log("Ee i ee i o");
  console.log(`And on his farm he had some ${animal.getName()}`);
  console.log("E-I-E-I-O!");
  console.log(`With a ${animal.makeSound()}-${animal.makeSound()} here`);
  console.log(`And a ${animal.makeSound()}-${animal.makeSound()} there`);
  console.log(`Here a ${animal.makeSound()} there a ${animal.makeSound()}`);
  console.log(`Everywhere ${animal.makeSound()}-${animal.makeSound()}\n`);
}
