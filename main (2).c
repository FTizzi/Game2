/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_menu();
int gioca_partita();

int main() 

{
    char scelta= {'\0'};

print_menu();

scanf ("%c", &scelta);

if (scelta =='B') 

{
    printf ("GRASIAS SENOR\n");
    return 0;
}
    while (scelta =='A')
    {
        scanf ("%c", &scelta);      
       gioca_partita();
  
    scanf ("%c", &scelta);
      
    }
 
    return 0;
}

void print_menu ()

{
    printf("Start Menu:\n");
    printf("A >> NG\nB >>EXIT\n");
    
}

int gioca_partita()
{
    
    int anime = 0;
    char Nxxxxx_Man;
    
    printf ("Q1:\n");
    printf ("Come si chiamava il gatto di H.P.Lovecraft?\n");
    printf ("A >> Pupy\nB >> Nxxxxx_Man\nC >> Ultar\n");
    scanf ("%c", &Nxxxxx_Man);
    
    if (Nxxxxx_Man == 'B')
    {
        
anime =anime+1000;
    
        
   
    
    printf ("anime %d\n", anime);
    
     }
     {
     char PEFFFFOOOZZZAAA;
    
    printf ("Q2:\n");
    printf ("Quale'è il nemico dei demoni?\n");
    printf ("A >> Bho\nB >> Bad_Guy\nC >> DOOM_GUY\n");
    scanf ("%c", &PEFFFFOOOZZZAAA);
    
    if (PEFFFFOOOZZZAAA=='C') 
    {
        
anime =anime+1000;

    printf ("anime %d\n", anime);
}
}

     {
     char IL_SOLE;
    
    printf ("Q3:\n");
    printf ("Cosa si loda?\n");
    printf ("A >> IL_SOLE\nB >> Budda\nC >> Dio\n");
    scanf ("%c", &IL_SOLE);
    
    if (IL_SOLE=='A')
    {
        
anime =anime+1000;

    printf ("anime %d\n", anime);
}

}
printf ("GRASIAS SENOR\n");
return 0;
}



    