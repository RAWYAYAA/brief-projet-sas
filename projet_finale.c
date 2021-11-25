#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
  typedef struct utilisateurs{
        char Nom[20];
        char Prenom[20];
        char CIN[20];
        float Montant;
        int    num;
    }utilisateur;  
  utilisateur T[2000];
int s = 0;
int cherche();
int Operation();
void creatcompte();
void creatcomptes();
void ascendant();
void quitter();
void quittter();
void affichage();
void ascendant();
void descendant();
void appquit();
void fidelisation();
void compteaffichage(utilisateur T[],int n){
    for(int i=0;i<n;i++)
    {
    printf("votre CIN     :%s           \n",T[i].CIN);
    printf("votre Nom     :%s           \n",T[i].Nom);
    printf("votre Prenom  :%s           \n",T[i].Prenom);
    printf("votre Montant :%.2f           \n",T[i].Montant);
    printf("\n");
}
}
void creatcompte(){
    		printf("Le nom      :   \n ");
            scanf("%s", T->Nom);
            printf("Le Prenom   :    \n ");
            scanf("%s", T->Prenom);
        	printf("Le CIN      :     \n ");
            scanf("%s", T->CIN);
           	printf("Le Montant  :     \n  ");
            scanf("%f", &T->Montant);
            printf("Felicitations votre compte a ete bien cree \n");
            srand(time(NULL));
        	T->num=rand();
        	printf(" Numero de compte  :   %d\n ",T->num);
        	s = s+ 1;
                    quitter();
        		}
void creatcomptes(){
   utilisateur utilisateur[2000];
	  int n,i;
            printf("saisir le nombre de comptes que vous voulez creer    :\n ");
            scanf("%d",&n);
            int r=s;
            for(i=r;i<n+r;i++){
                printf("Le nom     :   \n ");
                scanf("%s", T[i].Nom);
                printf("Le Prenom  :   \n ");
                scanf("%s",T[i].Prenom);
                printf("Le CIN     :   \n");
                scanf("%s",T[i].CIN);
                printf("Le Montatnt :   \n ");
                scanf("%f",&T[i].Montant);
                s++;
      	  }
      	   quitter();
      	  }
void quittter(){
      	     system("clear");
      	     printf("A Bientot");
			   }
 void retrait(utilisateur T[], int i){
     float Mr;
             printf("Tapez le montant que vous voulez retirer      :    \n");
             scanf("%f",&Mr);
                if(Mr > T[i].Montant){
                    printf("vous ne pouvez pas retirer ce Montant \n");
                    system("pause");
                 quitter();   
                }
                else
                T[i].Montant-=Mr;
             printf("le Montant apres retrait    :%.2f\n \n",T[i].Montant);  
             printf("operation retrait bien effectué\n");
              system("pause");
                  quitter();
 }
 void depot (utilisateur T[], int i){
     float Md;
                printf("Tapez le montant que vous voulez deposer     :     \n");
	            scanf("%f", &Md);
	            printf("le Montant apres depot      :     \n");
	            T[i].Montant+=Md;
	            printf("le Montant apres DEPOT     :      %.2f :\n", T[i].Montant);
	            printf("operation dépot bien effectué\n\n");
	             system("pause");
	           quitter();
 }
int cherche(){
    int i,f=0;
char cin[15];
printf("Entrer un CIN      :       \n");
scanf("%s",cin);
for( i=0;i<s;i++){
    int c;
    c = strcmp(T[i].CIN,cin);
      if( c == 0 )
	  {
      printf(" CIN valide \n");
     // f=1;
     return i;
    }
}
//if (f=0)
printf("n 'existe pas\n");
//return -1;
system("pause");
quitter();
}
int Operation(){
    char c[20];
 //   utilisateur T[2000];
	int i, optionx;
	float  Montant ,Md,Mr;
	          printf("[1]Depot\n[2]Retrait\n");
	          printf("tapez une option   :   \n");
	          scanf("%d",&optionx);
           switch(optionx){
            case 1:{
            	i=cherche();
                 depot(T,i);
	           quitter();
				break;
			}
            case 2:{
            	i=cherche();
            	retrait(T,i);
			    quitter();
            break;
			}
            default:
            break;
        }
        return 0;
                        quitter();
}
void appquit(){
    int optt;
    system("clear");
    printf("[1]Quitter l'application\n[2]Naviguer encore dans l'aplication\n");
    scanf("%d",&optt);
    switch(optt){
case 1:
system("clear");
    quittter();
    break;
case 2:
    printf("naviguer dans le menu\n");
    quitter();
    break;
default:
    break;
    }
}
void affichage(int n){
    float ma;
    int j,a=0;
   utilisateur B[100];
   utilisateur H[100];
    int i, optx;
    char cin[10];
printf("[1]Afficher par ordre ascendant \n[2]Afficher par ordre descendant\n[3]Les comptes ayant montant superieur par ordre ascendant\n[4]Les comptes ayant montant superieur par ordre descendant\n[5]Recherche par CIN");
scanf("%d",&optx);
switch(optx){
    case 1:
    ascendant(s);
    for(i=0;i<s;i++)
    {
    printf("votre CIN     :%s           \n",T[i].CIN);
    printf("votre Nom     :%s           \n",T[i].Nom);
    printf("votre Prenom  :%s           \n",T[i].Prenom);
    printf("votre Montant :%.2f           \n",T[i].Montant);
    printf("\n");
    }
    quitter();
    break;
    case 2:
    descendant(s);
    for(i=0;i<n;i++)
    {
        printf("votre CIN    :     %s \n",T[i].CIN);
        printf("votre Nom    :     %s \n",T[i].Nom);
        printf("votre Prenom :     %s \n",T[i].Prenom);
        printf("votre Montant :    %.2f \n",T[i].Montant);
        printf("\n");
    }
   quitter();
   break;
   system("pause");
   case 3:
    printf("Saisir le montant :\n ");
    scanf("%f",&ma);
    for(int c=0; c<s; c++)
    {
       if(T[c].Montant > ma)
        {
          H[a]=T[c];
          a++;
        } 
    }
        ascendant(H,a);
        compteaffichage(H,a);
        quitter();
    break;
    case 4:
    printf("Saisir le montant :\n ");
    float m;
    int i;
    scanf("%f",&m);
    for( i=0;i<s;i++)
    {
       if (T[i].Montant>m)
       {
        B[j]=T[i];
        j++;
       } 
    }
    descendant(B,j);
    compteaffichage(B,j);
    quitter();
    break;
    case 5:
printf("Entrer un CIN      :       \n");
scanf("%s",cin);
int c,f=0;
for( i=0;i<s;i++){
    c = strcmp(T[i].CIN,cin);
      if( c == 0 )
	  {
	  	f=1;
      	printf(" CIN valide \n");
       	printf("Le nom     :  %s \n ",T[i].Nom);
    	printf("Le Prenom  :%s   \n ",T[i].Prenom);
        printf("Le CIN     :  %s \n",T[i].CIN);
        printf("Le Montatnt :  %f \n ",T[i].Montant);
      }
     }if(f==0)
      printf("n 'existe pas\n");
      system("pause");
      quitter();
    default:
    quitter();
    break;
}
}
void ascendant(int n){
    int i,j;
    utilisateur temp;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
       if(T[i].Montant < T[j].Montant){ 
       temp = T[i];
       T[i] = T[j];
       T[j] = temp;
       }
    }
}
void descendant (int n){
    int i,j;
    utilisateur temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
       if(T[i].Montant > T[j].Montant){ 
       temp=T[i];
       T[i]=T[j];
       T[j]=temp;       
       }
}
}
void fidelisation(int n){
	float fid;
    descendant(s);
for(int i=0; i<3; i++){
	    fid=T[i].Montant;
	    fid+=(fid*1.3)/100;
	printf("*nous vous remercie pour votre fidelite*    \n");
	printf("Montant de fidelite :         \n");
	printf("%.2f",fid);
}
 system("pause");
 quitter();   
}
void Menu(){
    int option,n, optionx;
    printf("\n\n                                      ################### SYSTeME DE GESTION BANCAIRE ###################                               \n");
    printf("\n\n              //// MENU\\\\\\\\ \n\n\n");
    printf("[1]   Introduire un compte bancaire\n\n[2]  Introduire plusieurs comptes bancaires\n\n[3]  Operations\n\n[4]  Affichage\n\n[5]  Fidelisation\n\n[6]  Quitter l application\n\n");
    printf("choisi une option  : ");
    scanf("%d", &option);
    switch(option){
    case 1:
      creatcompte();
        break;
        case 2:
     creatcomptes();
        break;
        case 3:     	
      Operation();
        break;
        case 4:        
       affichage(s);           
        break;
        case 5:
           fidelisation(n);
        break;
        case 6:
           appquit();
        break;
        default:
      	printf("CHOIX INVALIDE !");
        break;
    }
}
void quitter(){
      	      Menu();
      	  }
    int  main()
    {
    	 Menu();
    	 return 0;        
}

