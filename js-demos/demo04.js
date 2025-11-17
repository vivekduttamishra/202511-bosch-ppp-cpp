

class Person{
    constructor(name,age){
        this.name=name;
        this.age=age;
    }

    eat(food){
        console.log(this.name + " is eating " + food);
    }
    move(from,to){
        console.log(this.name + " is moving from " + from + " to " + to);
    }
}




function teachDriving(person,vehicle) {
    if(person.age<18)
        return console.log(person.name + " is not eligible to learn driving.");

    if(person.licences){
        person.licences.push(vehicle);
        return console.log(person.name + " has learnt to drive " + vehicle);
    }

    person.drive=function(v){
        if(this.licences.indexOf(v)===-1)
            return console.log(this.name + " is not licensed to drive " + v);
        console.log(this.name + " is driving " + v);
    }
    person.licences = [vehicle];
}


var sanjay= new Person("Sanjay", 50);
var anil = new Person("Anil", 15);

teachDriving(sanjay, "Car"); //will get car licence and drive behavior
teachDriving(anil, "Bike");  //will be deined licence
teachDriving(sanjay, "Bike"); //will get bike licence

sanjay.drive("Car"); //can drive car
sanjay.drive("Truck"); //sanjay can drive, but not truck

anil.drive('Bike'); //anil doesn't know how to drive