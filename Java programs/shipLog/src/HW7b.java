/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW7a         : Ship log
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 08/08/21
 ******************************************************************************/

/*****************************************************************************
 *	 storing ship log
 * ___________________________________________________________________________
 *
 * 	 This Program uses classes and extends of the classes to store and save the
 *   data about the name and year of make of the ships, and using the other
 *   clsses with the extension of the Ship class, we determine if the ship is
 *   a cruise ship or a cargo ship and based on that the details will print out
 *   as information
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	N/A : the program uses the pre given names and details
 *
 *	 OUTPUT:
 *	 	the name of the ship and the details based on the usage of the ship
 *****************************************************************************/
public class HW7b {

    public static void main(String[] args) {

        //creates a new array of type class objects
        Ship[] ships = new Ship[5];

        //setting each object as passing the names and the details based on the usage of the ship in the
        //array
        ships[0] = new CruiseShip("Carribean Royal Cruise", "2003", 2500);
        ships[1] = new CargoShip("MERSK", "1998", 5000);
        ships[2] = new CruiseShip("Maldivies", "2013", 250);
        ships[3] = new CargoShip("RED SEA CARGO", "1976", 5000);
        ships[4] = new CruiseShip("Irish Royal Cruise", "2017", 200);

        //displays the output
        for (Ship aShip : ships) {
            System.out.println(aShip);
        }
    }

}



//class Ship, the base class containing the basic informations of the ships
class Ship{

    //protected variables, accessible by the extended classes
    protected String name;
    protected String year;

    //default constructor method initializes the variables
    public Ship(){
        this.name = "";
        this.year = "";
    }

    //constructor: sets the name and the year
    public Ship(String name, String year){

        this.name = name;
        this.year = year;
    }

    //class method: returns the name where it was called
    public String getName(){
        return name;
    }

    //class method: sets the variable name
    public void setName(String name){

        this.name = name;
    }

    //class method: returns the year to where it was called
    public String getYear(){

        return year;
    }

    //class method: sets the year to the variable passed to it
    public void setYear(String year){

        this.year = year;
    }

    //override the toString method to display the name and the year of the ship
    public String toString(){
        return getName() + "Year built: " + getYear();
    }

}
    //class cruise ship, extended from the class ship
    class CruiseShip extends Ship {

    //private variable, only accessible to the class itself
        private final int maxPassengers;

        //class constructor, sets the max passanger of the ship
        public CruiseShip(int maxPassengers){

            this.maxPassengers = maxPassengers;
        }

        //constructor that gets everything and changes whatever has access to the senior class
        public CruiseShip(String name, String year, int maxPassengers) {

            //initializing the name and the year using the senior class
            super(name, year);
            this.maxPassengers = maxPassengers;
        }

        //returns the number of max passangers to where it was called
        public int getMaxPassengers() {

            return maxPassengers;
        }

        //overrride to display the output for the variables of this class.
        public String toString() {

            return getName() + "Max passengers: " + getMaxPassengers();
        }
    }


    //class cargo ship, extended from the class ship
    class CargoShip extends Ship{

        //provate variable, only accessible to this class
        private int capacity;

        //constructor, initializes the variable
        public CargoShip(){

            this.capacity = 0;
        }

        //constructor, initializes the variable to what it is passed to the method
        public CargoShip(int capacity){

            this.capacity = capacity;
        }

        //constructo that uses the base class as well to initialize every variable
        public CargoShip(String name, String year, int capacity){

            super(name,year);
            this.capacity = capacity;
        }

        //returns the capacity to where it was called
        public int getCapacity(){

            return capacity;
        }

        //class method sets the capacity to what it was passed to
        public void setCapacity(int capacity){

            this.capacity = capacity;
        }

        //override the toString method to display the output
        public String toString(){
            return getName() + "Cargo Capacity: "+ getCapacity() + "tons";
        }

    }


/* Test

Carribean Royal CruiseMax passengers: 2500
MERSKCargo Capacity: 5000tons
MaldiviesMax passengers: 250
RED SEA CARGOCargo Capacity: 5000tons
Irish Royal CruiseMax passengers: 200

Process finished with exit code 0
* */