/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register Enum Values                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Capstone Disassembly Engine, http://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013> */


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

enum {
  X86_NoRegister,
  X86_AH = 1,
  X86_AL = 2,
  X86_AX = 3,
  X86_BH = 4,
  X86_BL = 5,
  X86_BP = 6,
  X86_BPL = 7,
  X86_BX = 8,
  X86_CH = 9,
  X86_CL = 10,
  X86_CS = 11,
  X86_CX = 12,
  X86_DH = 13,
  X86_DI = 14,
  X86_DIL = 15,
  X86_DL = 16,
  X86_DS = 17,
  X86_DX = 18,
  X86_EAX = 19,
  X86_EBP = 20,
  X86_EBX = 21,
  X86_ECX = 22,
  X86_EDI = 23,
  X86_EDX = 24,
  X86_EFLAGS = 25,
  X86_EIP = 26,
  X86_EIZ = 27,
  X86_ES = 28,
  X86_ESI = 29,
  X86_ESP = 30,
  X86_FPSW = 31,
  X86_FS = 32,
  X86_GS = 33,
  X86_IP = 34,
  X86_RAX = 35,
  X86_RBP = 36,
  X86_RBX = 37,
  X86_RCX = 38,
  X86_RDI = 39,
  X86_RDX = 40,
  X86_RIP = 41,
  X86_RIZ = 42,
  X86_RSI = 43,
  X86_RSP = 44,
  X86_SI = 45,
  X86_SIL = 46,
  X86_SP = 47,
  X86_SPL = 48,
  X86_SS = 49,
  X86_CR0 = 50,
  X86_CR1 = 51,
  X86_CR2 = 52,
  X86_CR3 = 53,
  X86_CR4 = 54,
  X86_CR5 = 55,
  X86_CR6 = 56,
  X86_CR7 = 57,
  X86_CR8 = 58,
  X86_CR9 = 59,
  X86_CR10 = 60,
  X86_CR11 = 61,
  X86_CR12 = 62,
  X86_CR13 = 63,
  X86_CR14 = 64,
  X86_CR15 = 65,
  X86_DR0 = 66,
  X86_DR1 = 67,
  X86_DR2 = 68,
  X86_DR3 = 69,
  X86_DR4 = 70,
  X86_DR5 = 71,
  X86_DR6 = 72,
  X86_DR7 = 73,
  X86_FP0 = 74,
  X86_FP1 = 75,
  X86_FP2 = 76,
  X86_FP3 = 77,
  X86_FP4 = 78,
  X86_FP5 = 79,
  X86_FP6 = 80,
  X86_K0 = 81,
  X86_K1 = 82,
  X86_K2 = 83,
  X86_K3 = 84,
  X86_K4 = 85,
  X86_K5 = 86,
  X86_K6 = 87,
  X86_K7 = 88,
  X86_MM0 = 89,
  X86_MM1 = 90,
  X86_MM2 = 91,
  X86_MM3 = 92,
  X86_MM4 = 93,
  X86_MM5 = 94,
  X86_MM6 = 95,
  X86_MM7 = 96,
  X86_R8 = 97,
  X86_R9 = 98,
  X86_R10 = 99,
  X86_R11 = 100,
  X86_R12 = 101,
  X86_R13 = 102,
  X86_R14 = 103,
  X86_R15 = 104,
  X86_ST0 = 105,
  X86_ST1 = 106,
  X86_ST2 = 107,
  X86_ST3 = 108,
  X86_ST4 = 109,
  X86_ST5 = 110,
  X86_ST6 = 111,
  X86_ST7 = 112,
  X86_XMM0 = 113,
  X86_XMM1 = 114,
  X86_XMM2 = 115,
  X86_XMM3 = 116,
  X86_XMM4 = 117,
  X86_XMM5 = 118,
  X86_XMM6 = 119,
  X86_XMM7 = 120,
  X86_XMM8 = 121,
  X86_XMM9 = 122,
  X86_XMM10 = 123,
  X86_XMM11 = 124,
  X86_XMM12 = 125,
  X86_XMM13 = 126,
  X86_XMM14 = 127,
  X86_XMM15 = 128,
  X86_XMM16 = 129,
  X86_XMM17 = 130,
  X86_XMM18 = 131,
  X86_XMM19 = 132,
  X86_XMM20 = 133,
  X86_XMM21 = 134,
  X86_XMM22 = 135,
  X86_XMM23 = 136,
  X86_XMM24 = 137,
  X86_XMM25 = 138,
  X86_XMM26 = 139,
  X86_XMM27 = 140,
  X86_XMM28 = 141,
  X86_XMM29 = 142,
  X86_XMM30 = 143,
  X86_XMM31 = 144,
  X86_YMM0 = 145,
  X86_YMM1 = 146,
  X86_YMM2 = 147,
  X86_YMM3 = 148,
  X86_YMM4 = 149,
  X86_YMM5 = 150,
  X86_YMM6 = 151,
  X86_YMM7 = 152,
  X86_YMM8 = 153,
  X86_YMM9 = 154,
  X86_YMM10 = 155,
  X86_YMM11 = 156,
  X86_YMM12 = 157,
  X86_YMM13 = 158,
  X86_YMM14 = 159,
  X86_YMM15 = 160,
  X86_YMM16 = 161,
  X86_YMM17 = 162,
  X86_YMM18 = 163,
  X86_YMM19 = 164,
  X86_YMM20 = 165,
  X86_YMM21 = 166,
  X86_YMM22 = 167,
  X86_YMM23 = 168,
  X86_YMM24 = 169,
  X86_YMM25 = 170,
  X86_YMM26 = 171,
  X86_YMM27 = 172,
  X86_YMM28 = 173,
  X86_YMM29 = 174,
  X86_YMM30 = 175,
  X86_YMM31 = 176,
  X86_ZMM0 = 177,
  X86_ZMM1 = 178,
  X86_ZMM2 = 179,
  X86_ZMM3 = 180,
  X86_ZMM4 = 181,
  X86_ZMM5 = 182,
  X86_ZMM6 = 183,
  X86_ZMM7 = 184,
  X86_ZMM8 = 185,
  X86_ZMM9 = 186,
  X86_ZMM10 = 187,
  X86_ZMM11 = 188,
  X86_ZMM12 = 189,
  X86_ZMM13 = 190,
  X86_ZMM14 = 191,
  X86_ZMM15 = 192,
  X86_ZMM16 = 193,
  X86_ZMM17 = 194,
  X86_ZMM18 = 195,
  X86_ZMM19 = 196,
  X86_ZMM20 = 197,
  X86_ZMM21 = 198,
  X86_ZMM22 = 199,
  X86_ZMM23 = 200,
  X86_ZMM24 = 201,
  X86_ZMM25 = 202,
  X86_ZMM26 = 203,
  X86_ZMM27 = 204,
  X86_ZMM28 = 205,
  X86_ZMM29 = 206,
  X86_ZMM30 = 207,
  X86_ZMM31 = 208,
  X86_R8B = 209,
  X86_R9B = 210,
  X86_R10B = 211,
  X86_R11B = 212,
  X86_R12B = 213,
  X86_R13B = 214,
  X86_R14B = 215,
  X86_R15B = 216,
  X86_R8D = 217,
  X86_R9D = 218,
  X86_R10D = 219,
  X86_R11D = 220,
  X86_R12D = 221,
  X86_R13D = 222,
  X86_R14D = 223,
  X86_R15D = 224,
  X86_R8W = 225,
  X86_R9W = 226,
  X86_R10W = 227,
  X86_R11W = 228,
  X86_R12W = 229,
  X86_R13W = 230,
  X86_R14W = 231,
  X86_R15W = 232,
  X86_NUM_TARGET_REGS 	// 233
};

// Register classes
enum {
  X86_VK1RegClassID = 0,
  X86_VK1WMRegClassID = 1,
  X86_GR8RegClassID = 2,
  X86_GR8_NOREXRegClassID = 3,
  X86_GR8_ABCD_HRegClassID = 4,
  X86_GR8_ABCD_LRegClassID = 5,
  X86_VK8RegClassID = 6,
  X86_VK8WMRegClassID = 7,
  X86_GR16RegClassID = 8,
  X86_GR16_NOREXRegClassID = 9,
  X86_VK16RegClassID = 10,
  X86_VK16WMRegClassID = 11,
  X86_SEGMENT_REGRegClassID = 12,
  X86_GR16_ABCDRegClassID = 13,
  X86_FPCCRRegClassID = 14,
  X86_FR32XRegClassID = 15,
  X86_FR32RegClassID = 16,
  X86_GR32RegClassID = 17,
  X86_GR32_NOAXRegClassID = 18,
  X86_GR32_NOSPRegClassID = 19,
  X86_GR32_NOAX_and_GR32_NOSPRegClassID = 20,
  X86_DEBUG_REGRegClassID = 21,
  X86_GR32_NOREXRegClassID = 22,
  X86_GR32_NOAX_and_GR32_NOREXRegClassID = 23,
  X86_GR32_NOREX_NOSPRegClassID = 24,
  X86_RFP32RegClassID = 25,
  X86_GR32_NOAX_and_GR32_NOREX_NOSPRegClassID = 26,
  X86_GR32_ABCDRegClassID = 27,
  X86_GR32_ABCD_and_GR32_NOAXRegClassID = 28,
  X86_GR32_TCRegClassID = 29,
  X86_GR32_ADRegClassID = 30,
  X86_GR32_NOAX_and_GR32_TCRegClassID = 31,
  X86_CCRRegClassID = 32,
  X86_GR32_AD_and_GR32_NOAXRegClassID = 33,
  X86_RFP64RegClassID = 34,
  X86_FR64XRegClassID = 35,
  X86_GR64RegClassID = 36,
  X86_CONTROL_REGRegClassID = 37,
  X86_FR64RegClassID = 38,
  X86_GR64_with_sub_8bitRegClassID = 39,
  X86_GR64_NOSPRegClassID = 40,
  X86_GR64_with_sub_32bit_in_GR32_NOAXRegClassID = 41,
  X86_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOSPRegClassID = 42,
  X86_GR64_NOREXRegClassID = 43,
  X86_GR64_TCRegClassID = 44,
  X86_GR64_NOSP_and_GR64_TCRegClassID = 45,
  X86_GR64_with_sub_16bit_in_GR16_NOREXRegClassID = 46,
  X86_VR64RegClassID = 47,
  X86_GR64_NOREX_NOSPRegClassID = 48,
  X86_GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAXRegClassID = 49,
  X86_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClassID = 50,
  X86_GR64_NOREX_and_GR64_TCRegClassID = 51,
  X86_GR64_TCW64RegClassID = 52,
  X86_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREX_NOSPRegClassID = 53,
  X86_GR64_NOREX_NOSP_and_GR64_TCRegClassID = 54,
  X86_GR64_TCW64_and_GR64_with_sub_32bit_in_GR32_NOAXRegClassID = 55,
  X86_GR64_ABCDRegClassID = 56,
  X86_GR64_TC_and_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_NOREXRegClassID = 57,
  X86_GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_NOAXRegClassID = 58,
  X86_GR64_with_sub_32bit_in_GR32_TCRegClassID = 59,
  X86_GR64_with_sub_32bit_in_GR32_ADRegClassID = 60,
  X86_GR64_with_sub_32bit_in_GR32_NOAX_and_GR32_TCRegClassID = 61,
  X86_GR64_with_sub_32bit_in_GR32_AD_and_GR32_NOAXRegClassID = 62,
  X86_RSTRegClassID = 63,
  X86_RFP80RegClassID = 64,
  X86_VR128XRegClassID = 65,
  X86_VR128RegClassID = 66,
  X86_VR256XRegClassID = 67,
  X86_VR256RegClassID = 68,
  X86_VR512RegClassID = 69,
  X86_VR512_with_sub_xmm_in_FR32RegClassID = 70
};

#endif // GET_REGINFO_ENUM

