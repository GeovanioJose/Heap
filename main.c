#include"heap.h"
#include <unistd.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv){
	HEAP heap;
	heap.tam = 0;
	int c;
	int aflag = 0;
	int bflag = 0;
	
	opterr = 0;	
	
	while ((c = getopt (argc, argv, "hf:o:m")) != -1){
  
	        switch (c){
	              
                        case 'h':
                        aflag = 0;			
                        help();
                        break;
                        
                        case 'f':
                        if(bflag != 1){
                                aflag = 2;                               
                                lerArquivoMin(&heap, optarg);                        
                        }else{
                                aflag = 2;
                                lerArquivoMax(&heap, optarg);
                        }
                        break;
                        
                        case 'o':		          	
                                aflag = 0;		     	     	
                                heapSalvar(&heap, optarg);
                        break;  
                        
                        case 'm':		          	
                                aflag = 0;
                                bflag = 1;
                        break;         	
	          													 
                        case '?':
			if (optopt == 'c')
				fprintf (stderr, "Opção -%c requer um argumento.\n", optopt);
	        	else if (isprint (optopt))
				fprintf (stderr, "Opção desconhecida `-%c'.\n", optopt);
		        else
				fprintf (stderr,"Caractere de opção desconhecida `\\x%x'.\n", optopt);
			
				return 1;
		        default:
		                abort ();
			
			}
	}		

	if(aflag == 2){
		imprimirArranjo(&heap);		
	}
	
	return 0;
 
}
