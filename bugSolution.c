int main() {
  int x = 10;
  int *ptr = (int *)malloc(sizeof(int)); // Allocate memory dynamically
  *ptr = 20;
  printf("%d\n", *ptr); //Output: 20
  free(ptr); // Correct: free the dynamically allocated memory
  return 0;
}