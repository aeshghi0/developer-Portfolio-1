import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
/*****************************************************************************
 * AUTHORS		: Ali Eshghi
 * STUDENT ID'S : 1112261
 * HW7a         : Phone book
 * CLASS  		: CS4A
 * SECTION		: MTWTH - 9am
 * DUE DATE		: 08/08/21
 ******************************************************************************/

/*****************************************************************************
 *	 making a Phone book
 * ___________________________________________________________________________
 *
 * 	 This Program prompts the user to enter the name and phone number of 5
 * 	 people, and then using the phone book class and its associated methods,
 * 	 it will make a phone book of 5 people with their names and phone number
 * ___________________________________________________________________________
 *	 INPUT :
 *	 	name : contacts name
 *	    phoneNumber : the contacts phone number
 *
 *	 OUTPUT:
 *	 	the contact info of the phone book of 5 will appear as the output
 *****************************************************************************/
public class HW7a {

    public static void main(String[] args){

        //creating a new array list to save the contact info
        List<PhoneBookEntery> contactsInfo = new ArrayList<PhoneBookEntery>();
        //creating a new scanner project
        Scanner in = new Scanner(System.in);

        //promts the user that it needs 5 contact for the loop to end
        System.out.print("I'm going to ask you to enter 5 names and phone numbers\n\n");

        //for loop goes through getting the contact info by prompting the user
        for(int i=0; i<5;i++){
            System.out.print("Enter a person's name: ");
            String name = in.nextLine();
            System.out.print("Enter that person's phone number: ");
            String number = in.nextLine();

            //creates a new class objects and passes the name and phone number to create a contact in class
            PhoneBookEntery contact = new PhoneBookEntery(name,number);

            //adds the contact to the array list
            contactsInfo.add(contact);
            System.out.println();
        }

        //outputs the saved data
        System.out.print("Here's the data you entered: \n\n");

        //going through the loop to print out the 5 contacts saved in the array list
        for(PhoneBookEntery contact: contactsInfo){
            System.out.print("--------------------\n");

            //uses the class method print to print out the contact info
            System.out.println(contact.print());
        }

    }

    // public class associated with the phone book entery that creates the contact
    public static class PhoneBookEntery{

        //private class variables: name and phone number
        private String name;
        private String number;

        //class method : saves the passed name and number to a class oriented object
        public PhoneBookEntery(String name, String number){

            this.name = name;
            this.number = number;
        }

        //class method: returns the name to wherver its been called
        public String getName(){

            return name;
        }

        //class method: set the class oriented object name
        public void setName(String name){

            this.name = name;
        }

        //class method: returns the phone number to where it was called
        public String getNumber(){

            return number;
        }

        //class method: sets the class oriented object phone number
        public void setNumber(String number){

            this.number = number;
        }

        //class method print helps out printing the objects saved content by calling the getter functions
        public String print(){
            return "Name: " + getName() + "\nPhone number: " + getNumber();
        }
    }
}



/* Test 1

I'm going to ask you to enter 5 names and phone numbers

Enter a person's name: Med Mogasemi
Enter that person's phone number: 949-212-4499

Enter a person's name: Bob Jones
Enter that person's phone number: 714-312-5467

Enter a person's name:  Tom Lee
Enter that person's phone number: 949-111-2222

Enter a person's name: Moe Mogasemi
Enter that person's phone number: 818-231-4466

Enter a person's name: Ellen Lee
Enter that person's phone number: 949-666-9876

Here's the data you entered:

--------------------
Name: Med Mogasemi
Phone number: 949-212-4499
--------------------
Name: Bob Jones
Phone number: 714-312-5467
--------------------
Name:  Tom Lee
Phone number: 949-111-2222
--------------------
Name: Moe Mogasemi
Phone number: 818-231-4466
--------------------
Name: Ellen Lee
Phone number: 949-666-9876

Process finished with exit code 0

* */