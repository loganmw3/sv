package types;
typedef enum logic [1:0] {
    IDLE       = 2'b00,
    CHECK_FOR_HIT        = 2'b01,
    WRITEBACK  = 2'b10,
    ALLOCATE   = 2'b11
} cache_state_e;
endpackage
