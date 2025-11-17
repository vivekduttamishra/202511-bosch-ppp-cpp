

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


var sanjay= createPerson("Sanjay", 50);
var anil = createPerson("Anil", 15);

sanjay.eat("biryani");
anil.move("home", "school");


