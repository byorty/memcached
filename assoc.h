/* associative array */
struct items_keys {
    char **array;
    size_t length;
    size_t capacity;
};

void assoc_init(void);
item *assoc_find(const char *key, const size_t nkey);
int assoc_insert(item *item);
void assoc_delete(const char *key, const size_t nkey);
struct items_keys assoc_keys(const char *regex);
int assoc_keys_length(struct items_keys *keys);
void do_assoc_move_next_bucket(void);

uint32_t hash( const void *key, size_t length, const uint32_t initval);

void keys_init(struct items_keys *keys);
void keys_reset(struct items_keys *keys);
void keys_push(struct items_keys *keys, char *value);
