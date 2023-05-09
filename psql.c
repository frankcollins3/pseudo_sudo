#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main () {
    char sentence[100];
    char *findport = "sudo lsof -i 5432";
    int status = system(findport);

    if (status == -1) {
        printf("nothing happened\n");
    } else {
        printf("something happened!\n");
        printf("heres what happened:\t %s \n", findport);
    }

    printf("please print sentence!\n");
    fgets(sentence, sizeof(sentence), stdin);
    printf("heres my sentence:\t %s \n", sentence);

    return 0;
}

// int main () {
//    char commando[20];
//    char go;
  
//     while (go == 'g') {
//    fgets(commando, sizeof(commando), stdin);
  
//       if (commando === "nopsql") {

//       }
      
//      system() // like system("cls");  
   
//      scanf("% ^[\n], &go); 
//   }
  
//   return 0;
// }
