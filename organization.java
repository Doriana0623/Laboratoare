import java.util.*;



public class organization {
	public Person person;
	private static Scanner input;
	
	public class Person
	{
		public String title;
		public String givenName;
		public String familyName;
		public String name;
		public Date birthdate;
		public boolean gender;
		public String phone;
		public String homeAdress;
		public Hospital[] hospital;
		public String fullName() {
			
			return title + givenName + name + familyName;
		}
	}
	
	public static void citeste() {
		System.out.println("Titlu:");
		input = new Scanner(System.in);
        String title = input.nextLine();
        System.out.println("Numele:");
        String givenName = input.nextLine();
        System.out.println("Patronimic:");
        String name = input.nextLine();
        System.out.println("Prenumele");
        String familyName = input.nextLine();
        System.out.println("Nr de telefon");
        String phone = input.nextLine();
        System.out.println("Gen");
        String gender = input.nextLine();
        System.out.println("Adresa");
        String homeAdress = input.nextLine();
        System.out.println("\nTitlu:  " + title +"\nNumele:  " + givenName + "\nPatronimic:  " + name + "\nPrenumele:  " + familyName + "\nNr de telefon:  " + phone + "\nGen:  " + gender +"\nAdresa:  " + homeAdress);
	}
	
	

	public class Patient extends Person
	{
	    public String id;
	    public Date accepted;
	    public String[] sickness;
	    public String[] prescriptions;
	    public String[] allergies;
	    public String[] specialReqs;
	    public OperationsStaff staf;

	   
	}
	
	public class Hospital 
	{
	    public String id;
	    public String address;
	    public String phone;
	    public Department[] departments;
	    public Person[] person;
	}
	
	public class Department
	{
	    public Staff[] staff;
	}
	
	public class Staff extends Person
	{
	    public Date joined;
	    public String[] education;
	    public String[] certifications;
	    public String[] languages;
	}
	
	public  class OperationsStaff extends Staff {
		public Patient[] patient;

	}
	
	public  class AdministrativeStaff extends Staff {

	}
	
	public  class TechnicalStaff extends Staff {

	}
	
	public class Technician extends TechnicalStaff {

	}
	
	public class Technologist extends TechnicalStaff {

	}
	
	public class SurgicalTechnologist extends Technologist {

	}
	
	public class FrontDeskStuff extends AdministrativeStaff {

	}
	
	public class Receptionist extends FrontDeskStuff {

	}
	
	public class Nurse extends OperationsStaff {

	}
	
	public class Doctor extends OperationsStaff {

	    public String[] specialty;
	    public String[] locations;
	}
	
	public class Surgeon extends Doctor {
	}
	
	static public void main(String[] args)
    {
        organization org = new organization();
        organization org1 = new organization();

        System.out.println(org);
        System.out.println(org1);
        citeste();
    }
	
}
