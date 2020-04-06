#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item {
	char *name;
	struct item * next;
} item;

void display(item *start){ /*������� ��������� ������������ ������*/
	item *i = start;
	for ( ; i != NULL; i=i->next){ /* i=(*i).next */
		printf("Name %s ", i->name);
	}
	printf("\n");
}

item *create (char *name){ /*������� �������� �������� ������������ ������*/
	item *i = malloc(sizeof(item));
	i->name = strdup(name);
	i->next = NULL;
	return i;
}
void append (item *start, char *name){ /*������� ���������� �������� � ����� ������������ ������*/
  item *i = start;
  if (i==NULL){
    printf("ERROR");
    return;
  }
  for ( ; i->next !=NULL ; i=i->next)
    {

    }
 i->next = create(name);
}
item *create_start (char *name){ /*������� �������� ������� �������� ������������ ������*/
   return (create(name));
}
item *delete_last (item *start){ /*������� �������� �������� � ����� ������������ ������*/
    item *i = start;
    if (i==NULL){
    printf("ERROR");
    return start;
  }
    if (i->next==NULL){
    free(i);
    return NULL;
    }
    for ( ; i->next->next !=NULL ; i=i->next)
    {

    }
    free(i->next);
    i->next = NULL;
    return start;
    }

item *delete_all(item *start){ /* ������� �������� ����� ������������ ������*/

	item *i = start;
	item *next = NULL;
	for ( ; i != NULL ; i = next){
		next = i->next;
		free(i->name);
		free(i);
	}
	return NULL;
}
item *search(item *start, char *str){ /*������� ���������� ����������������� ������ ��������� �������� � ����������� ������ */
    item *i = start;

    for(; i != NULL; i=i->next){
        if (strcmp(i->name,str)==0){
            return i;
    }}
    return NULL;
}

void print_menu() {
    printf("Enter option number:\n1 - Create first item\n2 - Append item\n3 - Remove item from end\n4 - Display list\n5 - Dispose list\n6 - Find element\n7 - Exit program\n");
}

int main(){
	item *start = NULL;
	char name[80];

	while (1) {
        print_menu();
        int option_num;
        char num_string[20];
        fgets(num_string, sizeof(num_string), stdin);
        sscanf(num_string, "%d\n", &option_num);
        switch (option_num) {
            case 1: {
                printf("Enter name:\n");
                fgets(name, sizeof(name), stdin);
                sscanf(name, "%s\n", name);
                start = create_start(name);
                break;
            }
            case 2: {
                printf("Enter name:\n");
                fgets(name, sizeof(name), stdin);
                sscanf(name, "%s\n", name);
                append(start, name);
                break;
            }
            case 3: {
                start = delete_last(start);
                break;
            }
            case 4: {
                display(start);
                break;
            }
            case 5: {
                start = delete_all(start);
                break;
            }
            case 6: {
                printf("Enter name:\n");
                fgets(name, sizeof(name), stdin);
                sscanf(name, "%s\n", name);
                item *res = search(start, name);
                if (res != NULL) {
                    printf("Found %s\n", res->name);
                }
                else {
                    printf("Not found\n");
                }
                break;
            }
            case 7: {
                delete_all(start);
                exit(0);
            }
            default: {
                printf("Wrong option number\n");
            }
        }
	}
    delete_all(start);

return 0;

}
