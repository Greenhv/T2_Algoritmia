/* Merge sort para ordenación de listas enlazadas*/
#include <stddio.h>
#include <stdlib.h>


void ObtenerMitad(TNodo* slow_aux, int cant_aux){
    int cant;
    cant = 0 ;
	while(cant < (cant_aux/2-1)0){
        slow_aux = slow_aux->next;
        cant ++;
        }

    }





void mergeSorting(TLista* a,TLista* b) {
    TNodo* aux;
    if(a->head->val > b->head->val){
        aux = a->head;
        a->head = b->head;
        b->head = aux;
    }




}
                /*cant_aux = L->cant*/
void merge(TLista* L , int  cant_aux){
	TNodo* ptr_slow;
	TLista a ;
	TLista b ;


	if (cant_aux == 1 ){
        return;
	}
	ptr_slow = L->head;
	ObtenerMitad(ptr_slow,cant_aux);
	a->head = L->head;
	a->tail = ptr_slow;
	b->head	= ptr_slow->next    ;
	b->tail = L->tail;
	merge(&a,cant_aux/2);
	merge(&b,cant_aux/2);
	mergeSorting(&a,&b) ;
}



