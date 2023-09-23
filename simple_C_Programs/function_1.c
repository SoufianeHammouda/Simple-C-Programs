#include <stdio.h>
#include <string.h>


struct Adresse{
	char rue[50];
	char ville[25];
};
typedef struct Adresse Adresse;

struct Etudiant {
	int code;
	char nom[50];
	float note;
	Adresse adr;
};
typedef struct Etudiant Etudiant;

int main(){
	printf("Hello User");
		printf("\n");
	Etudiant a = {131011071, "HAMMOUDA", 15.75,{"53 RUE Saad Zaghloul", "Kenitra"}};
	printf("L'Etudiant : %d %s %f habite à ===> Adresse[&%s %s] \n", a.code, a.nom, a.note, a.adr.rue, a.adr.ville);
}
