#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void kerem() {
	for(int i = 0; i <= 10; i++) {
		printf("-");
        Sleep(150);
	}
	printf(" Loading ");
	for(int i = 0; i <= 10; i++) {
		printf("-");
        Sleep(150);
	}
	
	printf("\n-> Started <-");
	Sleep(150);
    
    system("cls"); 
}

void goodBye() {
     	printf("�");
		Sleep(150);
		printf("y");
		Sleep(150);
		printf("i");
		Sleep(150);
		printf(" G");
		Sleep(150);
		printf("�");
		Sleep(150);
		printf("n");
		Sleep(150);
		printf("l");
		Sleep(150);
		printf("e");
		Sleep(150);
		printf("r");
		Sleep(150);
		printf(".");
		Sleep(150);
		printf(".");
		Sleep(150);
		printf(".");
}

int loadAnimation() {
	int i = 0;
	while(i < 5) {
		printf("|");
     	Sleep(70);
		printf("�");
		Sleep(70);
		printf("|");
		Sleep(70);
		printf("\n");
		printf(" �");
		Sleep(70);
	
	i += 1;
	system("cls"); 
	}
	
}


int main() {
	int ogrenciNumarasi;
	char adSoyad[100];
	char cinsiyet;
	
    setlocale(LC_ALL, "Turkish");
	kerem();
	printf("------- Syncrof Seyahat ------- \n");
    printf("L�tfen Gerekli Bilgileri Doldurunuz:");
    printf("\n��renci Numaran�z: ");
    scanf("%d", &ogrenciNumarasi);
    Sleep(150);
    
    system("cls"); 
    
    printf("------- Syncrof Seyahat ------- \n");
    printf("L�tfen Gerekli Bilgileri Doldurunuz:");
    printf("\n�sim: ");
	scanf(" %s", &adSoyad);
	Sleep(150);
	
	system("cls"); 
	
    printf("------- Syncrof Seyahat ------- \n");
    printf("L�tfen Gerekli Bilgileri Doldurunuz:");
    printf("\nCinsiyet: ");
	scanf(" %c", &cinsiyet);

    system("cls");
    loadAnimation();
    
    int i;
    printf("------- Syncrof Seyahat ------- \n");
    printf("|  Ho�geldiniz Say�n: %s!\n", adSoyad);
    printf("|  ��renci Numaran�z: %d\n", ogrenciNumarasi);
    printf("| Yeni bir rezervasyona ne dersiniz? ");
    printf("\n(Evet = E / Hay�r = H) : ");
    

    
    char yanit[20];
	scanf(" %s", &yanit);
	system("cls");

	
    if(yanit[0] == 'e' || yanit[0] == 'E') {
        // Rezervasyon ��lemleri
       
        
        // Se�ilmi� koltuklar�n al�nmas�
        int doluKoltuklar[40]; // Boyutlar�n ayarlanmas�
        
        
		for(int i = 0; i < 40; i++) {
			doluKoltuklar[i] = -15;
		}
		
        int cinsiyetList[40]; // Boyutlar�n ayarlanmas�
        for(int i = 0; i < 40; i++) {
			cinsiyetList[i] = -11;
		}
        
        
        doluKoltuklar[0] = 1;
        cinsiyetList[0] = 'e';
        
        doluKoltuklar[1] = 19;
        cinsiyetList[1] = 'k';
		
		doluKoltuklar[2] = 24;
        cinsiyetList[2] = 'k';
        
        doluKoltuklar[3] = 27;
        cinsiyetList[3] = 'k';
        
        doluKoltuklar[3] = 36;
        cinsiyetList[3] = 'k';
		
		doluKoltuklar[4] = 11;
        cinsiyetList[4] = 'k';

        
        doluKoltuklar[5] = 7;
        cinsiyetList[5] = 'k';
        
        doluKoltuklar[6] = 10;
        cinsiyetList[6] = 'k';
        
        doluKoltuklar[7] = 22;
        cinsiyetList[7] = 'k';
	
        // ilk seat cam kenari
        int firstSeatCounter = 3;
        for(int i = 0; i < 20; i++){
       	
       	if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(firstSeatCounter == doluKoltuklar[k]) {
       		   	    	  varMi = k;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	firstSeatCounter = firstSeatCounter + 4;
			   } else {
			   	printf("[ %d ]", firstSeatCounter);
			   	firstSeatCounter = firstSeatCounter + 4;
			   }
			   
		   }
		   printf(" ");
 
	   }
	   printf("\n");
	   
	   
	   // ilk seat koridor tarafi
	   int firstSeatCounterCoridor = 4;

	   for(int i = 0; i < 20; i++){
        if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(firstSeatCounterCoridor == doluKoltuklar[k]) {
       		   	    	  varMi = k;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	firstSeatCounterCoridor = firstSeatCounterCoridor + 4;
			   } else {
			   	printf("[ %d ]", firstSeatCounterCoridor);
			   	firstSeatCounterCoridor = firstSeatCounterCoridor + 4;
			   }
			   
		   }
		   printf(" ");
 
	   }
	   
	    printf("\n");
	    printf("\n");
	    
	    // ikinci seat koridor tarafi
	    
	    int secondSeatCounterCoridor = 2;

	   for(int i = 0; i < 20; i++){
        if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(secondSeatCounterCoridor == doluKoltuklar[k]) {
       		   	    	  varMi = k;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	secondSeatCounterCoridor = secondSeatCounterCoridor + 4;
			   } else {
			   	printf("[ %d ]", secondSeatCounterCoridor);
			   	secondSeatCounterCoridor = secondSeatCounterCoridor + 4;
			   }
			   
		   }
		   printf(" ");
 
	   }
	   printf("\n");
	   
	   //ikinci seat cam kenari
	   int secondSeatCoridor = 1;

	   for(int i = 0; i < 20; i++){
        if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(secondSeatCoridor == doluKoltuklar[k]) {
       		   	    	  varMi = 99;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	secondSeatCoridor = secondSeatCoridor + 4;
			   } else {
			   	printf("[ %d ]", secondSeatCoridor);
			   	secondSeatCoridor = secondSeatCoridor + 4;
			   }
			   
		   }
		   printf(" ");
 
	   }
    	
    	printf("\n\n\n");
    	printf("------- Rezervasyon Noktas� Se�imi -------\n");
    	printf("| 1 - Sa� Cam Kenar�\n");
    	printf("| 2 - Sa� Koridor\n");
    	printf("| 3 - Sol Koridor\n");
    	printf("| 4 - Sol Cam Kenar�\n");
    	printf("| 5 - ��k\n");

		int tercih;
		scanf("%d", &tercih);
		
		// Elimizde
		//  tercih == 1 - 2 - 3 - 4 
		//  cinsiyet == 101 102
    	
    	switch(tercih) {
    		case 1: {
				
    		    // Sa� Cam Kenar� Tercih Edildi
    			// [ X ]
                int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
    		  
    			while(1) { 
    			
    			int counterForRightWindowSide = 3;
    			
    			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(counterForRightWindowSide == doluKoltuklar[j]) {
    					     	kontrol = 1;
						} 
					}

					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {

					    printf(" [ %d ]", counterForRightWindowSide);
					    doluOlmayanKoltuklar[counter] = counterForRightWindowSide;
					    counter += 1;
			    	}
			    	

    				counterForRightWindowSide = counterForRightWindowSide + 4;
				}
				
				
				 // KOLTUK SE��M�
				 // se�ilemeyen say�lar� tercih edemez
				 int secilenKoltukNumarasi;
				 
				 printf("\n L�tfen Koltuk Se�iniz: ");
				 scanf("%d", &secilenKoltukNumarasi);
				
				 int secilebilirMi = 0;
    			 for(int i = 0; i < 100; i++) {
    			 	if(doluOlmayanKoltuklar[i] == secilenKoltukNumarasi) {
    			 		secilebilirMi = 1;
					 }
				 }
				 
				 if(secilebilirMi == 0) {
				 	printf("Bu koltuk se�ilemez.");
				 	
				 } else {
				 	
				 	if(secilenKoltukNumarasi % 2 == 0) {
				 		// secilen koltuk �ift numarali
				 		int doluKoltuklardaVarMi = 0;
				 		int doluSorguIndisi;
				 		for(int i = 0; i < 40; i++) {
				 			if(doluKoltuklar[i] == secilenKoltukNumarasi-1) {
				 				doluKoltuklardaVarMi = 1;
				 				doluSorguIndisi = i;
							 }
						 }
						 
						 if(doluKoltuklardaVarMi == 1) {
						 	if(cinsiyetList[doluSorguIndisi] == cinsiyet) {
						 	   printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	   break;
						    } else {
						    	printf("Bu koltuk se�ilemez.");
							}
						 } else {
						 	printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	break;
						 }
					    
					 } else {
					 	// secilen koltuk tek numarali
					 	
				 		int doluKoltuklardaVarMi = 0;
				 		int doluSorguIndisi;
				 		for(int i = 0; i < 40; i++) {
				 			if(doluKoltuklar[i] == secilenKoltukNumarasi+1) {
				 				doluKoltuklardaVarMi = 1;
				 				doluSorguIndisi = i;
							 }
						 }
						 
						 if(doluKoltuklardaVarMi == 1) {
						 	if(cinsiyetList[doluSorguIndisi] == cinsiyet) {
						 	   printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz..."); 
						 	   break;
						    } else {
						    	printf("Bu koltuk se�ilemez.");
							}
						 } else {
						 	printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	break;
						 }
					 }
				 	
				 	
				 }
				 
				}
    		
				 
				
				
				
    			break;
    			}
    		case 2: {
			
			
    			// Sa� Koridor Teercih Edildi
    			// [ X ]
                
                int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
    		  
    			while(1) { 
    			
    			int counterForRightWindowSide = 4;
    			
    			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(counterForRightWindowSide == doluKoltuklar[j]) {
    					     	kontrol = 1;
						} 
					}

					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {

					    printf(" [ %d ]", counterForRightWindowSide);
					    doluOlmayanKoltuklar[counter] = counterForRightWindowSide;
					    counter += 1;
			    	}
			    	

    				counterForRightWindowSide = counterForRightWindowSide + 4;
				}
				
				
				 // KOLTUK SE��M�
				 // se�ilemeyen say�lar� tercih edemez
				 int secilenKoltukNumarasi;
				 
				 printf("\n L�tfen Koltuk Se�iniz: ");
				 scanf("%d", &secilenKoltukNumarasi);
				
				 int secilebilirMi = 0;
    			 for(int i = 0; i < 100; i++) {
    			 	if(doluOlmayanKoltuklar[i] == secilenKoltukNumarasi) {
    			 		secilebilirMi = 1;
					 }
				 }
				 
				 if(secilebilirMi == 0) {
				 	printf("Bu koltuk se�ilemez.");
				 	
				 	
				 } else {
				 	
				 	if(secilenKoltukNumarasi % 2 == 0) {
				 		// secilen koltuk �ift numarali
				 		int doluKoltuklardaVarMi = 0;
				 		int doluSorguIndisi;
				 		for(int i = 0; i < 40; i++) {
				 			if(doluKoltuklar[i] == secilenKoltukNumarasi-1) {
				 				doluKoltuklardaVarMi = 1;
				 				doluSorguIndisi = i;
							 }
						 }
						 
						 if(doluKoltuklardaVarMi == 1) {
						 	if(cinsiyetList[doluSorguIndisi] == cinsiyet) {
						 	   printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	   break;
						    } else {
						    	printf("Bu koltuk se�ilemez.");
							}
						 } else {
						 	printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	break;
						 }
						 
				 		
					 } else {
					 	// secilen koltuk tek numarali
					 	
				 		int doluKoltuklardaVarMi = 0;
				 		int doluSorguIndisi;
				 		for(int i = 0; i < 40; i++) {
				 			if(doluKoltuklar[i] == secilenKoltukNumarasi+1) {
				 				doluKoltuklardaVarMi = 1;
				 				doluSorguIndisi = i;
							 }
						 }
						 
						 if(doluKoltuklardaVarMi == 1) {
						 	if(cinsiyetList[doluSorguIndisi] == cinsiyet) {
						 	   printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz..."); 
						    } else {
						    	printf("Bu koltuk se�ilemez.\n");
							}
						 } else {
						 	printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 }
					 }
				 	
				 	
				 }
				 
				}
    	     
    		    
    			break;
    		}
    		case 3:{

    			// Sol Koridor Tercih 
    			// [ X ]
                
                int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
    		  
    			while(1) { 
    			
    			int counterForRightWindowSide = 2;
    			
    			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(counterForRightWindowSide == doluKoltuklar[j]) {
    					     	kontrol = 1;
						} 
					}

                                 
					
					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {

					    printf(" [ %d ]", counterForRightWindowSide);
					    doluOlmayanKoltuklar[counter] = counterForRightWindowSide;
					    counter += 1;
			    	}
			    	

    				counterForRightWindowSide = counterForRightWindowSide + 4;
				}
				
				
				 // KOLTUK SE��M�
				 // se�ilemeyen say�lar� tercih edemez
				 int secilenKoltukNumarasi;
				 
				 printf("\n L�tfen Koltuk Se�iniz: ");
				 scanf("%d", &secilenKoltukNumarasi);
				
				 int secilebilirMi = 0;
    			 for(int i = 0; i < 100; i++) {
    			 	if(doluOlmayanKoltuklar[i] == secilenKoltukNumarasi) {
    			 		secilebilirMi = 1;
					 }
				 }
				 
				 if(secilebilirMi == 0) {
				 	printf("Bu koltuk se�ilemez.\n");
				 	
				 	
				 } else {
				 	
				 	if(secilenKoltukNumarasi % 2 == 0) {
				 		// secilen koltuk �ift numarali
				 		int doluKoltuklardaVarMi = 0;
				 		int doluSorguIndisi;
				 		for(int i = 0; i < 40; i++) {
				 			if(doluKoltuklar[i] == secilenKoltukNumarasi-1) {
				 				doluKoltuklardaVarMi = 1;
				 				doluSorguIndisi = i;
							 }
						 }
						 
						 if(doluKoltuklardaVarMi == 1) {
						 	if(cinsiyetList[doluSorguIndisi] == cinsiyet) {
						 	  
						 	   printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	   break;
						    } else {
						    	printf("Bu koltuk se�ilemez.");
							}
						 } else {
						 	
						 	printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	break;
						 }
						 
				 		
					 } else {
					 	// secilen koltuk tek numarali
					 	
				 		int doluKoltuklardaVarMi = 0;
				 		int doluSorguIndisi;
				 		for(int i = 0; i < 40; i++) {
				 			if(doluKoltuklar[i] == secilenKoltukNumarasi+1) {
				 				doluKoltuklardaVarMi = 1;
				 				doluSorguIndisi = i;
							 }
						 }
						 
						 if(doluKoltuklardaVarMi == 1) {
						 	if(cinsiyetList[doluSorguIndisi] == cinsiyet) {
						 	   printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	   break;
						    } else {
						    	printf("Bu koltuk se�ilemez.\n");
							}
						 } else {
						 	printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	break;
						 }
					 }
				 	
				 	
				 }
				 
				}
    	     
    		    
    			break;
    		}
    		case 4:
    			{
				// Sol Koridor Tercih 
    			// [ X ]
                
                int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
    		  
    			while(1) { 
    			
    			int counterForRightWindowSide = 1;
    			
    			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(counterForRightWindowSide == doluKoltuklar[j]) {
    					     	kontrol = 1;
						} 
					}

					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {

					    printf(" [ %d ]", counterForRightWindowSide);
					    doluOlmayanKoltuklar[counter] = counterForRightWindowSide;
					    counter += 1;
			    	}
			    	

    				counterForRightWindowSide = counterForRightWindowSide + 4;
				}
				
				
				 // KOLTUK SE��M�
				 // se�ilemeyen say�lar� tercih edemez
				 int secilenKoltukNumarasi;
				 
				 printf("\n L�tfen Koltuk Se�iniz: ");
				 scanf("%d", &secilenKoltukNumarasi);
				
				 int secilebilirMi = 0;
    			 for(int i = 0; i < 100; i++) {
    			 	if(doluOlmayanKoltuklar[i] == secilenKoltukNumarasi) {
    			 		secilebilirMi = 1;
					 }
				 }
				 
				 if(secilebilirMi == 0) {
				 	printf("Bu koltuk se�ilemez.\n");
				 	
				 	
				 } else {
				 	
				 	if(secilenKoltukNumarasi % 2 == 0) {
				 		// secilen koltuk �ift numarali
				 		int doluKoltuklardaVarMi = 0;
				 		int doluSorguIndisi;
				 		for(int i = 0; i < 40; i++) {
				 			if(doluKoltuklar[i] == secilenKoltukNumarasi-1) {
				 				doluKoltuklardaVarMi = 1;
				 				doluSorguIndisi = i;
							 }
						 }
						 
						 if(doluKoltuklardaVarMi == 1) {
						 	if(cinsiyetList[doluSorguIndisi] == cinsiyet) {
						 	  printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	  break;
						    } else {
						    	printf("Bu koltuk se�ilemez.\n");
							}
						 } else {
						 	printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	break;
						 }
						 
				 		
					 } else {
					 	// secilen koltuk tek numarali
					 	
				 		int doluKoltuklardaVarMi = 0;
				 		int doluSorguIndisi;
				 		for(int i = 0; i < 40; i++) {
				 			if(doluKoltuklar[i] == secilenKoltukNumarasi+1) {
				 				doluKoltuklardaVarMi = 1;
				 				doluSorguIndisi = i;
							 }
						 }
						 
						 if(doluKoltuklardaVarMi == 1) {
						 	if(cinsiyetList[doluSorguIndisi] == cinsiyet) {
						 	   printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
								break; 
						    } else {
						    	printf("Bu koltuk se�ilemez.\n");
							}
						 } else {
						 	printf("\n -> Rezervasyonunuz al�nm��t�r iyi g�nler dileriz...");
						 	break;
						 }
					 }
				 	
				 	
				 }
				 
				}
    	     
    		    
    			break;
    		}
    		
    		case 5:
    			goodBye();
    			break;
		}
    	

	} else if(yanit[0] == 'h' || yanit[0] == 'H') {
		// �yi G�nler Dileriz.
		system("cls");
		goodBye();
	} else {
		printf("Kodunuzda hata var. \n");
	    printf("%s", yanit);
	
	}
	
	 
}

