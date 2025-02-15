/*
 * Copyright (c) 2023 Loongarch Technology
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2 or later, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.

 */

typedef enum {
    OPC_CLZ_W = 0x00001400,
    OPC_CTZ_W = 0x00001c00,
    OPC_CLZ_D = 0x00002400,
    OPC_CTZ_D = 0x00002c00,
    OPC_REVB_2H = 0x00003000,
    OPC_REVB_2W = 0x00003800,
    OPC_REVB_D = 0x00003c00,
    OPC_SEXT_H = 0x00005800,
    OPC_SEXT_B = 0x00005c00,
    OPC_ADD_W = 0x00100000,
    OPC_ADD_D = 0x00108000,
    OPC_SUB_W = 0x00110000,
    OPC_SUB_D = 0x00118000,
    OPC_SLT = 0x00120000,
    OPC_SLTU = 0x00128000,
    OPC_MASKEQZ = 0x00130000,
    OPC_MASKNEZ = 0x00138000,
    OPC_NOR = 0x00140000,
    OPC_AND = 0x00148000,
    OPC_OR = 0x00150000,
    OPC_XOR = 0x00158000,
    OPC_ORN = 0x00160000,
    OPC_ANDN = 0x00168000,
    OPC_SLL_W = 0x00170000,
    OPC_SRL_W = 0x00178000,
    OPC_SRA_W = 0x00180000,
    OPC_SLL_D = 0x00188000,
    OPC_SRL_D = 0x00190000,
    OPC_SRA_D = 0x00198000,
    OPC_ROTR_W = 0x001b0000,
    OPC_ROTR_D = 0x001b8000,
    OPC_MUL_W = 0x001c0000,
    OPC_MULH_W = 0x001c8000,
    OPC_MULH_WU = 0x001d0000,
    OPC_MUL_D = 0x001d8000,
    OPC_MULH_D = 0x001e0000,
    OPC_MULH_DU = 0x001e8000,
    OPC_DIV_W = 0x00200000,
    OPC_MOD_W = 0x00208000,
    OPC_DIV_WU = 0x00210000,
    OPC_MOD_WU = 0x00218000,
    OPC_DIV_D = 0x00220000,
    OPC_MOD_D = 0x00228000,
    OPC_DIV_DU = 0x00230000,
    OPC_MOD_DU = 0x00238000,
    OPC_SLLI_W = 0x00408000,
    OPC_SLLI_D = 0x00410000,
    OPC_SRLI_W = 0x00448000,
    OPC_SRLI_D = 0x00450000,
    OPC_SRAI_W = 0x00488000,
    OPC_SRAI_D = 0x00490000,
    OPC_ROTRI_W = 0x004c8000,
    OPC_ROTRI_D = 0x004d0000,
    OPC_BSTRINS_W = 0x00600000,
    OPC_BSTRPICK_W = 0x00608000,
    OPC_BSTRINS_D = 0x00800000,
    OPC_BSTRPICK_D = 0x00c00000,
    OPC_SLTI = 0x02000000,
    OPC_SLTUI = 0x02400000,
    OPC_ADDI_W = 0x02800000,
    OPC_ADDI_D = 0x02c00000,
    OPC_CU52I_D = 0x03000000,
    OPC_ANDI = 0x03400000,
    OPC_ORI = 0x03800000,
    OPC_XORI = 0x03c00000,
    OPC_LU12I_W = 0x14000000,
    OPC_CU32I_D = 0x16000000,
    OPC_PCADDU2I = 0x18000000,
    OPC_PCALAU12I = 0x1a000000,
    OPC_PCADDU12I = 0x1c000000,
    OPC_PCADDU18I = 0x1e000000,
    OPC_LD_B = 0x28000000,
    OPC_LD_H = 0x28400000,
    OPC_LD_W = 0x28800000,
    OPC_LD_D = 0x28c00000,
    OPC_ST_B = 0x29000000,
    OPC_ST_H = 0x29400000,
    OPC_ST_W = 0x29800000,
    OPC_ST_D = 0x29c00000,
    OPC_LD_BU = 0x2a000000,
    OPC_LD_HU = 0x2a400000,
    OPC_LD_WU = 0x2a800000,
    OPC_LDX_B = 0x38000000,
    OPC_LDX_H = 0x38040000,
    OPC_LDX_W = 0x38080000,
    OPC_LDX_D = 0x380c0000,
    OPC_STX_B = 0x38100000,
    OPC_STX_H = 0x38140000,
    OPC_STX_W = 0x38180000,
    OPC_STX_D = 0x381c0000,
    OPC_LDX_BU = 0x38200000,
    OPC_LDX_HU = 0x38240000,
    OPC_LDX_WU = 0x38280000,
    OPC_DBAR = 0x38720000,
    OPC_JIRL = 0x4c000000,
    OPC_B = 0x50000000,
    OPC_BL = 0x54000000,
    OPC_BEQ = 0x58000000,
    OPC_BNE = 0x5c000000,
    OPC_BGT = 0x60000000,
    OPC_BLE = 0x64000000,
    OPC_BGTU = 0x68000000,
    OPC_BLEU = 0x6c000000,
} LoongArchInsn;

static int32_t __attribute__((unused))
encode_d_slot(LoongArchInsn opc, uint32_t d)
{
    return opc | d;
}

static int32_t __attribute__((unused))
encode_dj_slots(LoongArchInsn opc, uint32_t d, uint32_t j)
{
    return opc | d | j << 5;
}

static int32_t __attribute__((unused))
encode_djk_slots(LoongArchInsn opc, uint32_t d, uint32_t j, uint32_t k)
{
    return opc | d | j << 5 | k << 10;
}

static int32_t __attribute__((unused))
encode_djkm_slots(LoongArchInsn opc, uint32_t d, uint32_t j, uint32_t k,
                  uint32_t m)
{
    return opc | d | j << 5 | k << 10 | m << 16;
}

static int32_t __attribute__((unused))
encode_dk_slots(LoongArchInsn opc, uint32_t d, uint32_t k)
{
    return opc | d | k << 10;
}

static int32_t __attribute__((unused))
encode_dj_insn(LoongArchInsn opc, TCGReg d, TCGReg j)
{
    tcg_debug_assert(d >= 0 && d <= 0x1f);
    tcg_debug_assert(j >= 0 && j <= 0x1f);
    return encode_dj_slots(opc, d, j);
}

static int32_t __attribute__((unused))
encode_djk_insn(LoongArchInsn opc, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_debug_assert(d >= 0 && d <= 0x1f);
    tcg_debug_assert(j >= 0 && j <= 0x1f);
    tcg_debug_assert(k >= 0 && k <= 0x1f);
    return encode_djk_slots(opc, d, j, k);
}

static int32_t __attribute__((unused))
encode_djsk12_insn(LoongArchInsn opc, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_debug_assert(d >= 0 && d <= 0x1f);
    tcg_debug_assert(j >= 0 && j <= 0x1f);
    tcg_debug_assert(sk12 >= -0x800 && sk12 <= 0x7ff);
    return encode_djk_slots(opc, d, j, sk12 & 0xfff);
}

static int32_t __attribute__((unused))
encode_djsk16_insn(LoongArchInsn opc, TCGReg d, TCGReg j, int32_t sk16)
{
    tcg_debug_assert(d >= 0 && d <= 0x1f);
    tcg_debug_assert(j >= 0 && j <= 0x1f);
    tcg_debug_assert(sk16 >= -0x8000 && sk16 <= 0x7fff);
    return encode_djk_slots(opc, d, j, sk16 & 0xffff);
}

static int32_t __attribute__((unused))
encode_djuk12_insn(LoongArchInsn opc, TCGReg d, TCGReg j, uint32_t uk12)
{
    tcg_debug_assert(d >= 0 && d <= 0x1f);
    tcg_debug_assert(j >= 0 && j <= 0x1f);
    tcg_debug_assert(uk12 <= 0xfff);
    return encode_djk_slots(opc, d, j, uk12);
}

static int32_t __attribute__((unused))
encode_djuk5_insn(LoongArchInsn opc, TCGReg d, TCGReg j, uint32_t uk5)
{
    tcg_debug_assert(d >= 0 && d <= 0x1f);
    tcg_debug_assert(j >= 0 && j <= 0x1f);
    tcg_debug_assert(uk5 <= 0x1f);
    return encode_djk_slots(opc, d, j, uk5);
}

static int32_t __attribute__((unused))
encode_djuk5um5_insn(LoongArchInsn opc, TCGReg d, TCGReg j, uint32_t uk5,
                     uint32_t um5)
{
    tcg_debug_assert(d >= 0 && d <= 0x1f);
    tcg_debug_assert(j >= 0 && j <= 0x1f);
    tcg_debug_assert(uk5 <= 0x1f);
    tcg_debug_assert(um5 <= 0x1f);
    return encode_djkm_slots(opc, d, j, uk5, um5);
}

static int32_t __attribute__((unused))
encode_djuk6_insn(LoongArchInsn opc, TCGReg d, TCGReg j, uint32_t uk6)
{
    tcg_debug_assert(d >= 0 && d <= 0x1f);
    tcg_debug_assert(j >= 0 && j <= 0x1f);
    tcg_debug_assert(uk6 <= 0x3f);
    return encode_djk_slots(opc, d, j, uk6);
}

static int32_t __attribute__((unused))
encode_djuk6um6_insn(LoongArchInsn opc, TCGReg d, TCGReg j, uint32_t uk6,
                     uint32_t um6)
{
    tcg_debug_assert(d >= 0 && d <= 0x1f);
    tcg_debug_assert(j >= 0 && j <= 0x1f);
    tcg_debug_assert(uk6 <= 0x3f);
    tcg_debug_assert(um6 <= 0x3f);
    return encode_djkm_slots(opc, d, j, uk6, um6);
}

static int32_t __attribute__((unused))
encode_dsj20_insn(LoongArchInsn opc, TCGReg d, int32_t sj20)
{
    tcg_debug_assert(d >= 0 && d <= 0x1f);
    tcg_debug_assert(sj20 >= -0x80000 && sj20 <= 0x7ffff);
    return encode_dj_slots(opc, d, sj20 & 0xfffff);
}

static int32_t __attribute__((unused))
encode_sd10k16_insn(LoongArchInsn opc, int32_t sd10k16)
{
    tcg_debug_assert(sd10k16 >= -0x2000000 && sd10k16 <= 0x1ffffff);
    return encode_dk_slots(opc, (sd10k16 >> 16) & 0x3ff, sd10k16 & 0xffff);
}

static int32_t __attribute__((unused))
encode_ud15_insn(LoongArchInsn opc, uint32_t ud15)
{
    tcg_debug_assert(ud15 <= 0x7fff);
    return encode_d_slot(opc, ud15);
}

/* Emits the `clz.w d, j` instruction.  */
static void __attribute__((unused))
tcg_out_opc_clz_w(TCGContext *s, TCGReg d, TCGReg j)
{
    tcg_out32(s, encode_dj_insn(OPC_CLZ_W, d, j));
}

/* Emits the `ctz.w d, j` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ctz_w(TCGContext *s, TCGReg d, TCGReg j)
{
    tcg_out32(s, encode_dj_insn(OPC_CTZ_W, d, j));
}

/* Emits the `clz.d d, j` instruction.  */
static void __attribute__((unused))
tcg_out_opc_clz_d(TCGContext *s, TCGReg d, TCGReg j)
{
    tcg_out32(s, encode_dj_insn(OPC_CLZ_D, d, j));
}

/* Emits the `ctz.d d, j` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ctz_d(TCGContext *s, TCGReg d, TCGReg j)
{
    tcg_out32(s, encode_dj_insn(OPC_CTZ_D, d, j));
}

/* Emits the `revb.2h d, j` instruction.  */
static void __attribute__((unused))
tcg_out_opc_revb_2h(TCGContext *s, TCGReg d, TCGReg j)
{
    tcg_out32(s, encode_dj_insn(OPC_REVB_2H, d, j));
}

/* Emits the `revb.2w d, j` instruction.  */
static void __attribute__((unused))
tcg_out_opc_revb_2w(TCGContext *s, TCGReg d, TCGReg j)
{
    tcg_out32(s, encode_dj_insn(OPC_REVB_2W, d, j));
}

/* Emits the `revb.d d, j` instruction.  */
static void __attribute__((unused))
tcg_out_opc_revb_d(TCGContext *s, TCGReg d, TCGReg j)
{
    tcg_out32(s, encode_dj_insn(OPC_REVB_D, d, j));
}

/* Emits the `sext.h d, j` instruction.  */
static void __attribute__((unused))
tcg_out_opc_sext_h(TCGContext *s, TCGReg d, TCGReg j)
{
    tcg_out32(s, encode_dj_insn(OPC_SEXT_H, d, j));
}

/* Emits the `sext.b d, j` instruction.  */
static void __attribute__((unused))
tcg_out_opc_sext_b(TCGContext *s, TCGReg d, TCGReg j)
{
    tcg_out32(s, encode_dj_insn(OPC_SEXT_B, d, j));
}

/* Emits the `add.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_add_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_ADD_W, d, j, k));
}

/* Emits the `add.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_add_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_ADD_D, d, j, k));
}

/* Emits the `sub.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_sub_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_SUB_W, d, j, k));
}

/* Emits the `sub.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_sub_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_SUB_D, d, j, k));
}

/* Emits the `slt d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_slt(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_SLT, d, j, k));
}

/* Emits the `sltu d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_sltu(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_SLTU, d, j, k));
}

/* Emits the `maskeqz d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_maskeqz(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MASKEQZ, d, j, k));
}

/* Emits the `masknez d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_masknez(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MASKNEZ, d, j, k));
}

/* Emits the `nor d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_nor(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_NOR, d, j, k));
}

/* Emits the `and d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_and(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_AND, d, j, k));
}

/* Emits the `or d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_or(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_OR, d, j, k));
}

/* Emits the `xor d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_xor(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_XOR, d, j, k));
}

/* Emits the `orn d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_orn(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_ORN, d, j, k));
}

/* Emits the `andn d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_andn(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_ANDN, d, j, k));
}

/* Emits the `sll.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_sll_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_SLL_W, d, j, k));
}

/* Emits the `srl.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_srl_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_SRL_W, d, j, k));
}

/* Emits the `sra.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_sra_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_SRA_W, d, j, k));
}

/* Emits the `sll.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_sll_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_SLL_D, d, j, k));
}

/* Emits the `srl.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_srl_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_SRL_D, d, j, k));
}

/* Emits the `sra.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_sra_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_SRA_D, d, j, k));
}

/* Emits the `rotr.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_rotr_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_ROTR_W, d, j, k));
}

/* Emits the `rotr.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_rotr_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_ROTR_D, d, j, k));
}

/* Emits the `mul.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_mul_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MUL_W, d, j, k));
}

/* Emits the `mulh.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_mulh_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MULH_W, d, j, k));
}

/* Emits the `mulh.wu d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_mulh_wu(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MULH_WU, d, j, k));
}

/* Emits the `mul.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_mul_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MUL_D, d, j, k));
}

/* Emits the `mulh.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_mulh_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MULH_D, d, j, k));
}

/* Emits the `mulh.du d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_mulh_du(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MULH_DU, d, j, k));
}

/* Emits the `div.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_div_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_DIV_W, d, j, k));
}

/* Emits the `mod.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_mod_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MOD_W, d, j, k));
}

/* Emits the `div.wu d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_div_wu(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_DIV_WU, d, j, k));
}

/* Emits the `mod.wu d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_mod_wu(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MOD_WU, d, j, k));
}

/* Emits the `div.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_div_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_DIV_D, d, j, k));
}

/* Emits the `mod.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_mod_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MOD_D, d, j, k));
}

/* Emits the `div.du d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_div_du(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_DIV_DU, d, j, k));
}

/* Emits the `mod.du d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_mod_du(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_MOD_DU, d, j, k));
}

/* Emits the `slli.w d, j, uk5` instruction.  */
static void __attribute__((unused))
tcg_out_opc_slli_w(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk5)
{
    tcg_out32(s, encode_djuk5_insn(OPC_SLLI_W, d, j, uk5));
}

/* Emits the `slli.d d, j, uk6` instruction.  */
static void __attribute__((unused))
tcg_out_opc_slli_d(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk6)
{
    tcg_out32(s, encode_djuk6_insn(OPC_SLLI_D, d, j, uk6));
}

/* Emits the `srli.w d, j, uk5` instruction.  */
static void __attribute__((unused))
tcg_out_opc_srli_w(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk5)
{
    tcg_out32(s, encode_djuk5_insn(OPC_SRLI_W, d, j, uk5));
}

/* Emits the `srli.d d, j, uk6` instruction.  */
static void __attribute__((unused))
tcg_out_opc_srli_d(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk6)
{
    tcg_out32(s, encode_djuk6_insn(OPC_SRLI_D, d, j, uk6));
}

/* Emits the `srai.w d, j, uk5` instruction.  */
static void __attribute__((unused))
tcg_out_opc_srai_w(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk5)
{
    tcg_out32(s, encode_djuk5_insn(OPC_SRAI_W, d, j, uk5));
}

/* Emits the `srai.d d, j, uk6` instruction.  */
static void __attribute__((unused))
tcg_out_opc_srai_d(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk6)
{
    tcg_out32(s, encode_djuk6_insn(OPC_SRAI_D, d, j, uk6));
}

/* Emits the `rotri.w d, j, uk5` instruction.  */
static void __attribute__((unused))
tcg_out_opc_rotri_w(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk5)
{
    tcg_out32(s, encode_djuk5_insn(OPC_ROTRI_W, d, j, uk5));
}

/* Emits the `rotri.d d, j, uk6` instruction.  */
static void __attribute__((unused))
tcg_out_opc_rotri_d(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk6)
{
    tcg_out32(s, encode_djuk6_insn(OPC_ROTRI_D, d, j, uk6));
}

/* Emits the `bstrins.w d, j, uk5, um5` instruction.  */
static void __attribute__((unused))
tcg_out_opc_bstrins_w(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk5,
                      uint32_t um5)
{
    tcg_out32(s, encode_djuk5um5_insn(OPC_BSTRINS_W, d, j, uk5, um5));
}

/* Emits the `bstrpick.w d, j, uk5, um5` instruction.  */
static void __attribute__((unused))
tcg_out_opc_bstrpick_w(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk5,
                       uint32_t um5)
{
    tcg_out32(s, encode_djuk5um5_insn(OPC_BSTRPICK_W, d, j, uk5, um5));
}

/* Emits the `bstrins.d d, j, uk6, um6` instruction.  */
static void __attribute__((unused))
tcg_out_opc_bstrins_d(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk6,
                      uint32_t um6)
{
    tcg_out32(s, encode_djuk6um6_insn(OPC_BSTRINS_D, d, j, uk6, um6));
}

/* Emits the `bstrpick.d d, j, uk6, um6` instruction.  */
static void __attribute__((unused))
tcg_out_opc_bstrpick_d(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk6,
                       uint32_t um6)
{
    tcg_out32(s, encode_djuk6um6_insn(OPC_BSTRPICK_D, d, j, uk6, um6));
}

/* Emits the `slti d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_slti(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_SLTI, d, j, sk12));
}

/* Emits the `sltui d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_sltui(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_SLTUI, d, j, sk12));
}

/* Emits the `addi.w d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_addi_w(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_ADDI_W, d, j, sk12));
}

/* Emits the `addi.d d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_addi_d(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_ADDI_D, d, j, sk12));
}

/* Emits the `cu52i.d d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_cu52i_d(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_CU52I_D, d, j, sk12));
}

/* Emits the `andi d, j, uk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_andi(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk12)
{
    tcg_out32(s, encode_djuk12_insn(OPC_ANDI, d, j, uk12));
}

/* Emits the `ori d, j, uk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ori(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk12)
{
    tcg_out32(s, encode_djuk12_insn(OPC_ORI, d, j, uk12));
}

/* Emits the `xori d, j, uk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_xori(TCGContext *s, TCGReg d, TCGReg j, uint32_t uk12)
{
    tcg_out32(s, encode_djuk12_insn(OPC_XORI, d, j, uk12));
}

/* Emits the `lu12i.w d, sj20` instruction.  */
static void __attribute__((unused))
tcg_out_opc_lu12i_w(TCGContext *s, TCGReg d, int32_t sj20)
{
    tcg_out32(s, encode_dsj20_insn(OPC_LU12I_W, d, sj20));
}

/* Emits the `cu32i.d d, sj20` instruction.  */
static void __attribute__((unused))
tcg_out_opc_cu32i_d(TCGContext *s, TCGReg d, int32_t sj20)
{
    tcg_out32(s, encode_dsj20_insn(OPC_CU32I_D, d, sj20));
}

/* Emits the `pcaddu2i d, sj20` instruction.  */
static void __attribute__((unused))
tcg_out_opc_pcaddu2i(TCGContext *s, TCGReg d, int32_t sj20)
{
    tcg_out32(s, encode_dsj20_insn(OPC_PCADDU2I, d, sj20));
}

/* Emits the `pcalau12i d, sj20` instruction.  */
static void __attribute__((unused))
tcg_out_opc_pcalau12i(TCGContext *s, TCGReg d, int32_t sj20)
{
    tcg_out32(s, encode_dsj20_insn(OPC_PCALAU12I, d, sj20));
}

/* Emits the `pcaddu12i d, sj20` instruction.  */
static void __attribute__((unused))
tcg_out_opc_pcaddu12i(TCGContext *s, TCGReg d, int32_t sj20)
{
    tcg_out32(s, encode_dsj20_insn(OPC_PCADDU12I, d, sj20));
}

/* Emits the `pcaddu18i d, sj20` instruction.  */
static void __attribute__((unused))
tcg_out_opc_pcaddu18i(TCGContext *s, TCGReg d, int32_t sj20)
{
    tcg_out32(s, encode_dsj20_insn(OPC_PCADDU18I, d, sj20));
}

/* Emits the `ld.b d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ld_b(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_LD_B, d, j, sk12));
}

/* Emits the `ld.h d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ld_h(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_LD_H, d, j, sk12));
}

/* Emits the `ld.w d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ld_w(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_LD_W, d, j, sk12));
}

/* Emits the `ld.d d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ld_d(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_LD_D, d, j, sk12));
}

/* Emits the `st.b d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_st_b(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_ST_B, d, j, sk12));
}

/* Emits the `st.h d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_st_h(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_ST_H, d, j, sk12));
}

/* Emits the `st.w d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_st_w(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_ST_W, d, j, sk12));
}

/* Emits the `st.d d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_st_d(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_ST_D, d, j, sk12));
}

/* Emits the `ld.bu d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ld_bu(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_LD_BU, d, j, sk12));
}

/* Emits the `ld.hu d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ld_hu(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_LD_HU, d, j, sk12));
}

/* Emits the `ld.wu d, j, sk12` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ld_wu(TCGContext *s, TCGReg d, TCGReg j, int32_t sk12)
{
    tcg_out32(s, encode_djsk12_insn(OPC_LD_WU, d, j, sk12));
}

/* Emits the `ldx.b d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ldx_b(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_LDX_B, d, j, k));
}

/* Emits the `ldx.h d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ldx_h(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_LDX_H, d, j, k));
}

/* Emits the `ldx.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ldx_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_LDX_W, d, j, k));
}

/* Emits the `ldx.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ldx_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_LDX_D, d, j, k));
}

/* Emits the `stx.b d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_stx_b(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_STX_B, d, j, k));
}

/* Emits the `stx.h d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_stx_h(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_STX_H, d, j, k));
}

/* Emits the `stx.w d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_stx_w(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_STX_W, d, j, k));
}

/* Emits the `stx.d d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_stx_d(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_STX_D, d, j, k));
}

/* Emits the `ldx.bu d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ldx_bu(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_LDX_BU, d, j, k));
}

/* Emits the `ldx.hu d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ldx_hu(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_LDX_HU, d, j, k));
}

/* Emits the `ldx.wu d, j, k` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ldx_wu(TCGContext *s, TCGReg d, TCGReg j, TCGReg k)
{
    tcg_out32(s, encode_djk_insn(OPC_LDX_WU, d, j, k));
}

/* Emits the `dbar ud15` instruction.  */
static void __attribute__((unused))
tcg_out_opc_dbar(TCGContext *s, uint32_t ud15)
{
    tcg_out32(s, encode_ud15_insn(OPC_DBAR, ud15));
}

/* Emits the `jirl d, j, sk16` instruction.  */
static void __attribute__((unused))
tcg_out_opc_jirl(TCGContext *s, TCGReg d, TCGReg j, int32_t sk16)
{
    tcg_out32(s, encode_djsk16_insn(OPC_JIRL, d, j, sk16));
}

/* Emits the `b sd10k16` instruction.  */
static void __attribute__((unused))
tcg_out_opc_b(TCGContext *s, int32_t sd10k16)
{
    tcg_out32(s, encode_sd10k16_insn(OPC_B, sd10k16));
}

/* Emits the `bl sd10k16` instruction.  */
static void __attribute__((unused))
tcg_out_opc_bl(TCGContext *s, int32_t sd10k16)
{
    tcg_out32(s, encode_sd10k16_insn(OPC_BL, sd10k16));
}

/* Emits the `beq d, j, sk16` instruction.  */
static void __attribute__((unused))
tcg_out_opc_beq(TCGContext *s, TCGReg d, TCGReg j, int32_t sk16)
{
    tcg_out32(s, encode_djsk16_insn(OPC_BEQ, d, j, sk16));
}

/* Emits the `bne d, j, sk16` instruction.  */
static void __attribute__((unused))
tcg_out_opc_bne(TCGContext *s, TCGReg d, TCGReg j, int32_t sk16)
{
    tcg_out32(s, encode_djsk16_insn(OPC_BNE, d, j, sk16));
}

/* Emits the `bgt d, j, sk16` instruction.  */
static void __attribute__((unused))
tcg_out_opc_bgt(TCGContext *s, TCGReg d, TCGReg j, int32_t sk16)
{
    tcg_out32(s, encode_djsk16_insn(OPC_BGT, d, j, sk16));
}

/* Emits the `ble d, j, sk16` instruction.  */
static void __attribute__((unused))
tcg_out_opc_ble(TCGContext *s, TCGReg d, TCGReg j, int32_t sk16)
{
    tcg_out32(s, encode_djsk16_insn(OPC_BLE, d, j, sk16));
}

/* Emits the `bgtu d, j, sk16` instruction.  */
static void __attribute__((unused))
tcg_out_opc_bgtu(TCGContext *s, TCGReg d, TCGReg j, int32_t sk16)
{
    tcg_out32(s, encode_djsk16_insn(OPC_BGTU, d, j, sk16));
}

/* Emits the `bleu d, j, sk16` instruction.  */
static void __attribute__((unused))
tcg_out_opc_bleu(TCGContext *s, TCGReg d, TCGReg j, int32_t sk16)
{
    tcg_out32(s, encode_djsk16_insn(OPC_BLEU, d, j, sk16));
}
/* End of generated code.  */
