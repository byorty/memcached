/* associative array */
void assoc_init(void);
item *assoc_find(const char *key, const size_t nkey);
int assoc_insert(item *item);
void assoc_delete(const char *key, const size_t nkey);
char **assoc_keys(const char *regex);
int assoc_keys_length(void);
void do_assoc_move_next_bucket(void);

uint32_t hash( const void *key, size_t length, const uint32_t initval);

struct items_keys {
    char **array;
    size_t length;
    size_t capacity;
};

void keys_init(void);
void keys_reset(void);
void keys_push(struct items_keys *keys, char *value);
