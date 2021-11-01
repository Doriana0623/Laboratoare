#include <iostream>
using namespace std;

 class student
{
public:
    string nume;
    int an;
    double nota;
    
public : student()
    {
        nume = "";
        an = 0;
	   nota = 0;
    };
public : student(string nume, int an, double nota)
    {
         this->nume = nume;
         this->an = an;
         this->nota = nota;
    };
public : double afiseaza()
   {
	return nota;
   }   
    
 public: void Citeste_ST()
    {
        cout<<"Nume : ";
        cin>>nume;
        cout<<"Anul : ";
        cin>>an;
        cout<<"Nota : "; 
        cin>>nota;
    };

    public: void Afisare_ST()
    {

        cout<<"Nume : "<<nume<<endl;
        cout<<"Anul : "<<an<<endl;
        cout<<"Nota : "<<nota<<endl;

    };
	};
  /*public:
    void Media(int nota)
	{
	    float s = 0;
	    for(int i = 0 ; i<n; i++)
	    {
	    s = s + nota[i];
	    }
		float media = s / n;
		cout<<"Media: "<<media<<endl;
    }
};*/


 class Universitate
{
public:
	student* st[];
    string Nume;
    int An_fondarii;
  
    

    public : Universitate(student* st[], string Nume, int An_fondarii)
    {
        this->Nume = Nume;
        this->An_fondarii = An_fondarii;
        //this->st = st;
    }

/*public:
    Media()
    {
    	double sum = 0;
    	for(int i = 0; i< st->length; i++)
    	{
    		sum += st[i].afiseaza();
		}
        return sum/st.lenght
    }*/

/*public:
    void Citeste()
    {
        cout << "Nume universitate : ";
        cin >> Nume;
        cout << "Anul fondarii : ";
        cin >> An_fondarii;
    }

public:
    void Afiseaza()
    {
        cout << "Afisarea datelor : "<<endl;
        cout << "Nume universitate : " << Nume<<endl;
        cout << "Anul Fondarii : " << An_fondarii<<endl;
    }*/

};

int main()
{

    /*Universitate u[10];
    student st[10];
    int n,m;
    cout<<"Introduceti numarul de studenti:    ";
    cin>>n;
    cout<<"Introduceti datele : "<<endl;
    cout<<"___________________________"<<endl;
    for(int i=0;i<n;i++)
	{
        st[i].Citeste_ST();
    }
    cout<<"Afisarea datele : "<<endl;
    cout<<"___________________________"<<endl;
    for(int i=0;i<n;i++)
	{
        st[i].Afisare_ST();
        cout<<"___________________________"<<endl;
    }
    cout<<"Introduceti numarul de Universitati : ";
    cin>>m;
    cout<<"Introduceti datele : "<<endl;
    for(int j=0;j<m;j++)
	{
        u[j].Citeste();
        cout<<"___________________________"<<endl;
    }
    cout<<"Afisarea datele : ";
    for(int j=0;j<m;j++)
	{
        u[j].Afiseaza();
        cout<<"___________________________"<<endl;
    }
    cout<<"Lista de studenti a Universitatii:"<<endl;
    for(int i=0;i<n;i++)
	{
        st[i].Afisare_ST();
        cout<<"___________________________"<<endl;
    }
   /* cout<<"NOta medie a studentilor:   "<<endl;
    for(int i=0;i<n;i++)
	{
        st[i].Media(nota);
        cout<<"___________________________"<<endl;
    }*/
    
    
        student* s1 = new student("Walter White", 21, 9.99);
        student* s2 = new student("Constance Langdon", 19, 7.91);
        student* s3 = new student("Jerry Smith", 19, 6.01);
        student* s4 = new student("Beth Sanchez", 20, 9.21);
        student* s5 = new student("Rick Grimes", 23, 6.35);
        student* s6 = new student("Thomas Shelby", 19, 8.16);
        student* s7 = new student("Octavia Blake", 21, 7.27);
        student* s8 = new student("Jesse Custer", 23, 6.14);
        student* s9 = new student("Monty Green", 20, 9.65);

        /*student[] UTM  = {s1,s2,s3};
        student[] USM = {s4,s5,s6};
        student[] USMF = {s7,s8,s9};*/

        Universitate* u1 = new Universitate(UTM, "Technical University of Moldova", 1964);
        Universitate* u2 = new Universitate(USM,"Moldova State University", 1946);
        Universitate* u3 = new Universitate(USMF,"Moldova State University of Medicine and Pharmacy", 1945);

        cout<<"Average mark of UTM's students: "<< s1->nume << s2->nume<<s3->nume<<u1->Media();
        /*System.out.println("Average mark of USM's students is: " + s4.name + ", " + s5.name + ", " + s6.name + " is: " + u2.getAverage());
        System.out.println("Average mark of USMF's students is: " + s7.name + ", " + s8.name + ", " + s9.name + " is: " + u3.getAverage());*/

        double Avg, a = u1->Media(), b = u2->Media(), c = u3->Media();
        Avg = (a + b + c)/3;

        cout<<"Average mark of UTM, USM and USMF is: "<<Avg;
    }
    return 0;
	}



