#include <stdio.h>
int main(void){
    
    int i = 0, aprovados = 0, reprovados = 0, final = 0;
    float nota1, nota2, nota3, media, mediaGeral = 0, mediaH = 0, mediaM = 0, maiorMedia = 0, qtM = 0, qtH = 0, alunos = 0;
    char genero, aux;

    while(scanf("%f %f %f %c ", &nota1, &nota2, &nota3, &genero) != EOF){
        media = (nota1 + nota2 + nota3)/3.0;
        mediaGeral += media;
        //DEFININDO A MAIOR MEDIA
        if(media >= maiorMedia){
            maiorMedia = media;
            aux = genero;
        }
        // SEPARANDO A MEDIA POR GENERO
        if(genero == 'M'){
            mediaM += media;
            qtM += 1.0;
        }
        else if(genero == 'H'){
            mediaH += media;
            qtH += 1.0;
        }
        // SETANDO OS ALUNOS APROVADOS E REPROVADOS
        if(media < 3) reprovados++;
        else if(media >= 3 && media < 7) final++;
        else aprovados++;
        i++;
    }
    //FINALIZANDO AS MEDIAS
    alunos = qtM + qtH;
    mediaGeral /= alunos;
    if(mediaM > 0) mediaM /= qtM;
    if(mediaH > 0) mediaH /= qtH;
    
    if(aux == 'H') printf("A maior media da turma foi %.1f e pertence a um homem.\n", maiorMedia);
    else printf("A maior media da turma foi %.1f e pertence a uma mulher.\n", maiorMedia);

    printf("A media geral foi de %.1f.\n", mediaGeral);

    printf("%d alunos foram aprovados por media.\n", aprovados);

    printf("%d alunos podem fazer o exame final.\n", final);

    printf("%d alunos foram reprovados.\n", reprovados);

    printf("A media das mulheres foi de %.1f.\n", mediaM);

    printf("A media dos homens foi de %.1f.\n", mediaH);

    return 0;
}