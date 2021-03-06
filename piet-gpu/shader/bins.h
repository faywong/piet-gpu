// SPDX-License-Identifier: Apache-2.0 OR MIT OR Unlicense

// Code auto-generated by piet-gpu-derive

struct BinInstanceRef {
    uint offset;
};

struct BinInstance {
    uint element_ix;
};

#define BinInstance_size 4

BinInstanceRef BinInstance_index(BinInstanceRef ref, uint index) {
    return BinInstanceRef(ref.offset + index * BinInstance_size);
}

BinInstance BinInstance_read(BinInstanceRef ref) {
    uint ix = ref.offset >> 2;
    uint raw0 = bins[ix + 0];
    BinInstance s;
    s.element_ix = raw0;
    return s;
}

void BinInstance_write(BinInstanceRef ref, BinInstance s) {
    uint ix = ref.offset >> 2;
    bins[ix + 0] = s.element_ix;
}

