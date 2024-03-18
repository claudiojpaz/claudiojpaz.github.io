#include <stdio.h>
#include <stdlib.h>

struct auto_ref {
  int dato;
  struct auto_ref *p_sig;
};

void nuevo_nodo (int dato, struct auto_ref **p);
void liberar_nodos (struct auto_ref *p);
void imprimir_nodos (struct auto_ref *p);

int main (void)
{
  struct auto_ref *nodo_inicio=NULL;

  nuevo_nodo(5, &nodo_inicio);
  nuevo_nodo(15, &nodo_inicio);
  nuevo_nodo(15, &nodo_inicio);
  nuevo_nodo(15, &nodo_inicio);
  nuevo_nodo(15, &nodo_inicio);

  imprimir_nodos(nodo_inicio);

  liberar_nodos(nodo_inicio);
  return 0;
}

void nuevo_nodo (int dato, struct auto_ref **p)
{
  struct auto_ref *p_new, *p_next;

  p_new = malloc(sizeof (struct auto_ref));

  p_new->p_sig = NULL;
  p_new->dato = dato;

  if (*p == NULL) {
    *p = p_new;
  } else {
    p_next = *p;
    while (p_next->p_sig != NULL) {
      p_next = p_next->p_sig;
    }
    p_next->p_sig = p_new;
  }

}

void imprimir_nodos (struct auto_ref *p)
{
  while (p != NULL) {
    printf("%d\n", p->dato);
    p = p->p_sig;
  }
}

void liberar_nodos (struct auto_ref *p)
{
  while (p->p_sig != NULL) {
    free(p);
    p = p->p_sig;
  }
}
