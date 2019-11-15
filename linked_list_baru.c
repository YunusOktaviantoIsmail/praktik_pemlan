#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
	int data;
    struct node *next;
};
typedef struct node node;

void tranverse(node *head) {
    //traverse linked list
	node *pWalker;
	int jumlah=0;
	pWalker = head;
	
	while (pWalker != NULL){
   		printf("%d -> ", pWalker -> data);
   		pWalker = pWalker -> next;
	}
	
	printf("NULL\n");
}

void insertNode(node **head, node *pPre, node *pNew) {
	if (pPre == NULL){
       //menambahkan diawal atau pada empty list
	    pNew -> next = *head;
       *head = pNew;
    }
    else {
       //menambahkan node di tengah atau di akhir
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}

void tambahAwal(node **head) {
  int bil;
  node *pTemp;

  printf("Masukkan Bilangan Integer : ");
  scanf("%d", &bil);
  pTemp = (node *)malloc(sizeof(node));

  if (pTemp != NULL){
  	pTemp->data = bil;
    pTemp->next = NULL;
    insertNode(head, NULL, pTemp);
    tranverse(*head);
  } else {
	printf("Alokasi memori gagal");
    getch();
  }
}

void tambahAkhir(node **head) {
	int bil;
  	node *pCur,*pTemp;
  	pCur = *head;
  	printf("Masukkan Bilangan Integer : ");
 	scanf("%d", &bil);
  	pTemp = (node *)malloc(sizeof(node));
  	
	if (pTemp == NULL){
	 	printf("\nAlokasi memori gagal");
		getch();
		//return ;
	} else {
		while(pCur != NULL && pCur -> next != NULL){
  			pCur=  pCur->next;
		}
	  	
		pTemp->data = bil;
      	pTemp->next = NULL;
      	insertNode(head, pCur, pTemp);
      	tranverse(*head);
  	}
}

void tambahData(node **head) {
  int pos, bil;
  node *pTemp, *pCur;
  
  tranverse(*head);
  printf("\nPosisi penyisipan setelah value ke- : ");
  scanf("%d", &pos);
  printf("Masukkan Bilangan Integer : ");
  scanf("%d", &bil);

  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) {
    pCur = pCur -> next;
  }

  pTemp = (node *)malloc(sizeof(node));

  if (pCur == NULL){
	printf("\nNode tidak ditemukan");
	getch();
  } else if (pTemp == NULL){
    printf("\nAlokasi memeori gagal");
    getch();
  } else{
    pTemp->data = bil;
    pTemp->next = NULL;
    insertNode(head, pCur, pTemp);
    tranverse(*head);
  }
}

void penjumlahan(node *head) {
    //traverse linked list
	node *pWalker;
	int jumlah = 0;
	pWalker = head;
	
	while (pWalker != NULL){
		printf("%d -> ", pWalker -> data);
		jumlah += pWalker -> data; //menjumlahkan data inputan
		pWalker = pWalker -> next;
	}
   	
	   printf("NULL");
	   printf("\nTotal value = %d\n",jumlah);
}

void deleteNode(node **head, node *pPre, node *pCur) {
	if (pPre == NULL){
		*head = pCur -> next;
	} else {
		pPre -> next = pCur -> next;
		free(pCur);
	}
}

void hapusData(node **head) {
  int pos;
  node *pCur, *pPre;
  tranverse(*head);
  printf("\nValue yang akan dihapus : ");
  fflush(stdin);
  scanf("%d", &pos);

  pPre = NULL;
  pCur = *head;
  //cari target value sampai ditemukan atau sampai pada akhir list
  while (pCur != NULL && pCur -> data != pos) {
  	pPre = pCur;
	pCur = pCur -> next;
  }
  
  if (pCur == NULL){
  	printf("\nNode tidak ditemukan");
  } else{
	deleteNode(head, pPre, pCur);
	tranverse(*head);
  }
}

void hapusLayar() {
	printf("\nTekan ENTER untuk melanjutkan");
	getch();
	system("cls");
}

int main() {
	int pilih;
	node *head;
	head = NULL;
	
	do {
		printf("========= LINKED LIST =========");
		printf("\n========= PILIH MENU ==========\n\n");
		printf("1. Tambah Data Awal\n");
		printf("2. Tambah Data Akhir\n");
		printf("3. Tambah Data Tengah\n");
		printf("4. Tampilkan Data\n");
		printf("5. Hapus Data\n");
		printf("6. Jumlah Data\n");
		printf("99. Keluar Program\n\n");
		printf("Masukkan Pilihan : ");
		scanf("%d",&pilih);
		
		if(pilih == 99) {
			printf("\nTERIMA KASIH\n");
			return 0;
		} else if(pilih == 1) {
			tambahAwal(&head);
			hapusLayar();
		} else if(pilih == 2) {
			tambahAkhir(&head);
			hapusLayar();
		} else if(pilih == 3) {
			tambahData(&head);
			hapusLayar();
		} else if(pilih == 4) {
			tranverse(head);
			hapusLayar();
		} else if(pilih == 5) {
			hapusData(&head);
			hapusLayar();
		} else if(pilih == 6) {
			penjumlahan(head);
			hapusLayar();
		} else if(pilih != 99 || pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih != 5 || pilih != 6) {
			printf("\nPilihan Tidak Tersedia\n");
			printf("\nPress any Key");
			getch();
		}
	} while (pilih != 99 || pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih != 5 || pilih != 6);
}
