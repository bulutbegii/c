#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int bk=5,gs,secim,gb,cb,rs,kb;
	
	for(int i=0 ;i<100;i++){
	
	printf("\n\nGerceklestirmek istediginiz islemi seciniz:\n[1]bakiye eklemek\n[2]Bakiye sorgulamak\n[3]Bakiye aktarmak\n[4]Sansini denemek\n[5]1/10 oranindaki oyun\n");
	scanf("\n %d",&secim);
	if(secim==1){
		printf("\nEklemek istedginiz tutari girniz:");
		scanf("\n %d",&gb);
		bk=bk + gb ;
		printf("\n %d Tutari bakiyenize eklenmistir...",gb);
		
		
	}
	else if(secim==2){
		printf("\nBakiyenizin tutari: %d",bk);
	}
	else if(secim==3){
		printf("\nCekmek istediginiz bakiye tutarini giriniz: ");
		scanf("%d",&cb);
		if(cb=bk-5){
			bk=bk-cb;
			printf("\n%d tutari hesabinizdan cekilmistir:",cb);
			
		}
		else {
			printf("\nBakiyenizden yuksek bir tutar girdiniz tekrar deneyin:");
		}

	}
	else if(secim==4){
		
	printf("\nUygulamaya hosgeldiniz oyunumuzun ucretien az  5 tl ...");
		
	printf("\nOynamak istedginiz tutari giriniz:");
	scanf("\n %d", &kb);

		if(bk>4 && kb<=bk){
		printf("\n%d tl hesabinizdan cekimistir ...",kb);
		
		
		
		
		bk=bk-kb;
		printf("\n1 ile 100 arasinda sansli hissettiginiz bir sayıyı griniz");
		scanf("\n %d", &gs);
		if(gs>0 && gs<101){
			srand(time(NULL));
			rs=1+rand()%100;
			if(rs==gs){
				printf("\nTebrikler kazandiniz sayiniz %d:",rs);
				bk+=20*kb;
				printf("\nGuncel bakiyeniz: %d",bk);
			}
			else{
				printf("\nKaybettiniz... %d sayi bu idi TEKRAR DENEYINIZ.",rs);
				printf("\nGuncel bakiyeniz : %d", bk);
			}
			
		}
		else{
			printf("Kural disi sayi girdiniz paraniz yandi tekrar deneyiniz:");
		}
	}
	else{
		printf("\nBakiyene para yukle...");
	}
	
	}
	else if(secim==5){
	printf("\nUygulamaya hosgeldiniz oyunumuzun ucretien az  20 tl ...");
    printf("\nOynamak istedginiz tutari giriniz:");
	scanf("\n %d", &kb);
		if(bk>19 && kb<=bk){
		printf("\n%d tl hesabinizdan cekimistir ...",kb);
		
		
		bk=bk-kb;
		printf("\n1 ile 10 arasinda sansli hissettiginiz bir sayıyı griniz");
		scanf("\n %d", &gs);
		if(gs>0 && gs<11){
			srand(time(NULL));
			rs=1+rand()%10;
			if(rs==gs){
				printf("\nTebrikler kazandiniz sayiniz:%d",rs);
				bk+=5*kb;
				printf("\nGuncel bakiyeniz: %d",bk);
			}
			else{
				printf("\nKaybettiniz... %d sayi bu idi TEKRAR DENEYINIZ.",rs);
				printf("\nGuncel bakiyeniz : %d", bk);
			}
			
		}
	    else{
			printf("\nKural disi sayi girdiniz paraniz yandi tekrar deneyiniz:");
		}
	
	}
	else{
		printf("\nBakiyene para yukle...");
	}
}
else{
	printf("\nIslem algilanamamistir lutfen secmek istediginiz islemi secin");
}
}
}
