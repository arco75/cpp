


int main(int argc, char **argv) {

    FILE plik1, plik2;
    char znak;

    plik1=fopen(argv[1], "r");
    plik2=fopen(argv[2], "w");
   
    while(!feof(plik1)){
        fscanf(plik1, "%c", &znak);
        fprintf(plik2, "%c", znak);
    };
    fclose(plik1);
    fclose(plik2);
    return 0;
}