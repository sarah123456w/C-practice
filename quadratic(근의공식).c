#include <math.h>
#include <stdio.h>

void get_data(int* a_ptr, int* b_ptr, int* c_ptr);
int quadratic(int a, int b, int c, double* root1_ptr, double* root2_ptr);
void print_result(int num_roots, int a, int b, int c, double root1,
                  double root2);

int main(void) {
  int a, b, c, num_roots;
  double root1, root2;

  printf("Solve quadratic equation\n");

  get_data(&a, &b, &c);
  num_roots = quadratic(a, b, c, &root1, &root2);
  print_result(num_roots, a, b, c, root1, root2);

  return 0;
}

// get_data(int* a_ptr, int* b_ptr, int* c_ptr)
// Read coefficients for quadratic equation.
void get_data(int* a_ptr, int* b_ptr, int* c_ptr) {
  printf("Enter coefficients for quadratic equation: ");
  scanf("%d %d %d", a_ptr, b_ptr, c_ptr);
}

// quadratic(int a, int b, int c, double* root1_ptr, double* root2_ptr)
// Compute roots for a quadratic equation.
int quadratic(int a, int b, int c, double* root1_ptr, double* root2_ptr) {
    if((b*b-4*a*c)>0){
        * root1_ptr=(-b+sqrt(b*b-4*a*c))/(2*a);
        * root2_ptr=(-b-sqrt(b*b-4*a*c))/(2*a);
        return 2;
    }
    else if((b*b-4*a*c)<0)
        return 0;
    else if((a==0)&&(b==0))
        return -1;
        
    if((a!=0)||(b!=0))
        if((b*b-4*a*c)==0){
            * root1_ptr=-b/2*a;
            return 1;
    }
    

}

// print_result(int num_roots, int a, int b, int c, double root1, double root2)
// Print the result.
void print_result(int num_roots, int a, int b, int c, double root1,
                  double root2) {
  printf("Equation: %dx^2 + %dx + %d\n", a, b, c);
  switch (num_roots) {
    case 2:
      printf("Roots are %.3f & %.3f\n", root1, root2);
      break;
    case 1:
      printf("Only one root: %.3f\n", root1);
      break;
    case 0:
      printf("Roots are imaginary\n");
      break;
    default:
      printf("Invalid coefficients\n");
      break;
  }
}