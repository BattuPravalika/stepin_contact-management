#include "utility.h"
#include "contact.h"

void get_data(char *name) {

  int i = 0, j;
  char c, ch;
  
  do {
    c = getchar();
    if (c != '\n') {
      *(name + i) = c;
      putchar(c);
      i++;
    }
    if (c == 8) {
      if (i > 0) {
        i--;
      }
      for (j = 0; j < i; j++) {
        ch = *(name + j);
        putchar(ch);
      }
    }
  } while (c != '\n');
  *(name + i) = '\0';
}

void get_contact_details(contact_t *contact) {
  printf("\nEnter name: ");
  get_data(contact->name);

  printf("\nEnter the Phone number: ");
  
  get_data(contact->ph_number);

  printf("\nEnter Email ID: ");

  get_data(contact->email_id);
}