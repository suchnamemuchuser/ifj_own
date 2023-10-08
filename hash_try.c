#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_MAX_SIZE 1024 ///defined maximum size for hash table



/// @brief Token
struct Token{
    char name[50];
    struct Token* next;
};

/// @brief returns adress of new empty token
struct Token* tokenCtor(){
    struct Token* token;

    if ((token = malloc(sizeof(struct Token))) == NULL){
        ///TODO call error
    }

    return token;
}

/// @brief frees token and all of its members
/// @param token 
void tokenDtor(struct Token* token){
    ///TODO free any members of token
    free(token);
}


int tokenInsert(){
    ///TODO
    return 0;
}


int tokenRemove(){
    ///TODO
    return 0;
}


/// @brief function initialises hashTable with NULL pointers
/// @param hashTable 
void hashInit(struct Token** hashTable){

    for(int i = 0 ; i < HASH_MAX_SIZE ; i++){
        hashTable[i] = NULL;
    }

    return;
}


/// @brief hashes given string
/// @param str 
/// @return hash value within HASH_MAX_SIZE
unsigned long hash(unsigned char *str) {
    unsigned long hash = 5381; // Initial hash value
    int c;

    // Iterate over each character in the string
    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; // Update the hash value using DJB2 algorithm
    }

    return (hash % HASH_MAX_SIZE); // Return the final hash value modulo hash size (within the requested boundary)
}


int main() {
    struct Token* hashTable[HASH_MAX_SIZE]; ///declaration of hash table, might have to be done in a function if hash size is not static
    
    hashInit(hashTable);

    char input[] = "Hello, Worlb!";
    unsigned long hashValue = hash((unsigned char *)input); // Calculate the hash value

    if ((hashTable[hashValue] = malloc(sizeof(struct Token))) != NULL){
        strcpy(hashTable[hashValue]->name, input);
        hashTable[hashValue]->next = NULL;
    }
    else{
        fprintf(stderr, "Malloc fail");
        exit(1);
    }

    printf("Hash value: %lu\n", hashValue); // Print the hash value to the console
    return 0;
}