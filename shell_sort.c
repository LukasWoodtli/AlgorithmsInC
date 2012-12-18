#include <string.h>
#include <stdio.h>

void shellsort(void);
void print_arr_f(void);

static char * chr_a[] = {"R","Q","R","J","N","T","S","J","J","X","K","O","Q","D","P","O","W","O","Q","Q","M","F","B","L","X","H","Q","X","I","L","Q","V","G","F","U","R","U","M","W","A"};

#define ARR_LEN (sizeof(chr_a)/sizeof(*chr_a))

int main()
{
  print_arr_f();
  shellsort();
  print_arr_f();

}

static unsigned int spalten_a[] = {1, 4, 13, 41, 111, 271, 815};
 
static unsigned int run_no = sizeof(spalten_a)/sizeof(*spalten_a);

void shellsort (void)
{ 
  unsigned int i;
  unsigned int j;
  unsigned int k;
  unsigned int h;
  
  int q = 0;
  
  char * temp_s;
    
    for (k=run_no; k>0; --k)
    { 
      printf("at Beginning for: k: %i\n", k);
        h=spalten_a[k];
        // Sortiere die "Spalten" mit Insertionsort
        for (i=h; i<ARR_LEN; i++)
        { 
          printf("at Beginning for: i: %i\n", i);
          
            temp_s = chr_a[i];
            j = i;
            while (j>=h && strcmp(chr_a[j-h], temp_s) > 0)
            { 
                chr_a[j] = chr_a[j-h];
                j=j-h;
                
                q++;
            }
            chr_a[j] = temp_s;
        }
    }
    printf("\nq: %i\nk: %i", q, k);
}


void print_arr_f(void)
{
  int i = 0;
  printf("\n");
  for (i = 0; i < ARR_LEN; ++i)
  { 
    printf("%s", chr_a[i]);
  }
  printf("\n");
}
