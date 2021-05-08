void
changevolumestatus() {
  int volumestatus;
  FILE* fptr = fopen("/home/akash/bin/val/volume_status", "r");

  if(fptr == NULL) return;

  fscanf(fptr, "%d", &volumestatus);
  fclose(fptr);

  fptr = fopen("/home/akash/bin/val/volume_status", "w");

  if(fptr == NULL) return;

  fprintf(fptr, "%d", !volumestatus);
  fclose(fptr);
}
