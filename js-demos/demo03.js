

function createPerson(name, age) {
    //to create and Object we don't need a class.
    var p = new Object();

    //now we have an Object that doesn't have any properties or behavior.
    //We can add property/behavior after creating the Object.
    p.name = name;
    p.age = age;


    p.eat = function (food) {
        console.log(this.name + " is eating " + food);
    }

    p.move = function (from, to) {
        console.log(this.name + " is moving from " + from + " to " + to);
    }

    return p;
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


var sanjay= createPerson("Sanjay", 50);
var anil = createPerson("Anil", 15);

teachDriving(sanjay, "Car"); //will get car licence and drive behavior
teachDriving(anil, "Bike");  //will be deined licence
teachDriving(sanjay, "Bike"); //will get bike licence

sanjay.drive("Car"); //can drive car
sanjay.drive("Truck"); //sanjay can drive, but not truck

anil.drive('Bike'); //anil doesn't know how to drive