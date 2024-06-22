#include <stdio.h>
#include <string.h>

#define CANDIDATOS 3

typedef struct {
    char nombre[50];
    int votos;
} Candidato;

void inicializarCandidatos(Candidato candidatos[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        candidatos[i].votos = 0;
    }
}

void mostrarCandidatos(Candidato candidatos[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("%d. %s\n", i + 1, candidatos[i].nombre);
    }
}

void votar(Candidato candidatos[], int cantidad) {
    int eleccion;
    printf("Seleccione su candidato (1-%d): ", cantidad);
    scanf("%d", &eleccion);
    if (eleccion >= 1 && eleccion <= cantidad) {
        candidatos[eleccion - 1].votos++;
        printf("Voto registrado para %s\n", candidatos[eleccion - 1].nombre);
    } else {
        printf("Elección no válida.\n");
    }
}

void mostrarResultados(Candidato candidatos[], int cantidad) {
    printf("\nResultados de la elección:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%s: %d votos\n", candidatos[i].nombre, candidatos[i].votos);
    }
}

int main() {
    Candidato presidente[CANDIDATOS] = {{"Candidato Presidente 1", 0}, {"Candidato Presidente 2", 0}, {"Candidato Presidente 3", 0}};
    Candidato jefeGobierno[CANDIDATOS] = {{"Candidato Jefe de Gobierno 1", 0}, {"Candidato Jefe de Gobierno 2", 0}, {"Candidato Jefe de Gobierno 3", 0}};
    Candidato senador[CANDIDATOS] = {{"Candidato Senador 1", 0}, {"Candidato Senador 2", 0}, {"Candidato Senador 3", 0}};
    Candidato diputadoFederal[CANDIDATOS] = {{"Candidato Diputado Federal 1", 0}, {"Candidato Diputado Federal 2", 0}, {"Candidato Diputado Federal 3", 0}};
    Candidato diputadoLocal[CANDIDATOS] = {{"Candidato Diputado Local 1", 0}, {"Candidato Diputado Local 2", 0}, {"Candidato Diputado Local 3", 0}};

    printf("Elección Federal\n");

    printf("\nVotación para Presidente de la República:\n");
    mostrarCandidatos(presidente, CANDIDATOS);
    votar(presidente, CANDIDATOS);

    printf("\nVotación para Jefe de Gobierno:\n");
    mostrarCandidatos(jefeGobierno, CANDIDATOS);
    votar(jefeGobierno, CANDIDATOS);

    printf("\nVotación para Senador:\n");
    mostrarCandidatos(senador, CANDIDATOS);
    votar(senador, CANDIDATOS);

    printf("\nVotación para Diputado Federal:\n");
    mostrarCandidatos(diputadoFederal, CANDIDATOS);
    votar(diputadoFederal, CANDIDATOS);

    printf("\nVotación para Diputado Local:\n");
    mostrarCandidatos(diputadoLocal, CANDIDATOS);
    votar(diputadoLocal, CANDIDATOS);

    printf("\n--- Resultados Finales ---\n");
    printf("\nPresidente de la República:\n");
    mostrarResultados(presidente, CANDIDATOS);

    printf("\nJefe de Gobierno:\n");
    mostrarResultados(jefeGobierno, CANDIDATOS);

    printf("\nSenador:\n");
    mostrarResultados(senador, CANDIDATOS);

    printf("\nDiputado Federal:\n");
    mostrarResultados(diputadoFederal, CANDIDATOS);

    printf("\nDiputado Local:\n");
    mostrarResultados(diputadoLocal, CANDIDATOS);

    return 0;
}
