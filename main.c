#include "hash-table.h"

int main(int argc, char **argv) {
    HashTable *ht = ht_create(10);

    ht_set(ht, "name1", "em");
    ht_set(ht, "name2", "russian");
    ht_set(ht, "name3", "pizza");
    ht_set(ht, "name4", "doge");
    ht_set(ht, "name5", "pyro");
    ht_set(ht, "name6", "joost");
    ht_set(ht, "name7", "lemon juice");
    ht_set(ht, "name8", "kalix");

    ht_dump(ht);

    return 0;
}
