// Combined frames
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#define WIDTH 128
#define HEIGHT 96

typedef struct { int type; float x, y, w, h; } Primitive;

#define CIRCLE 0
#define RECT 1

Primitive frame_0[] = {
    // No primitives for this frame
};
Primitive frame_1[] = {
    // No primitives for this frame
};
Primitive frame_2[] = {
    // No primitives for this frame
};
Primitive frame_3[] = {
    // No primitives for this frame
};
Primitive frame_4[] = {
    // No primitives for this frame
};
Primitive frame_5[] = {
    // No primitives for this frame
};
Primitive frame_6[] = {
    // No primitives for this frame
};
Primitive frame_7[] = {
    // No primitives for this frame
};
Primitive frame_8[] = {
    // No primitives for this frame
};
Primitive frame_9[] = {
    // No primitives for this frame
};
Primitive frame_10[] = {
    // No primitives for this frame
};
Primitive frame_11[] = {
    // No primitives for this frame
};
Primitive frame_12[] = {
    // No primitives for this frame
};
Primitive frame_13[] = {
    // No primitives for this frame
};
Primitive frame_14[] = {
    // No primitives for this frame
};
Primitive frame_15[] = {
    {RECT, 0.9375f, 0.4167f, 0.0625f, 0.3958f},
};
Primitive frame_16[] = {
    {RECT, 0.9570f, 0.5000f, 0.0430f, 0.5000f},
    {RECT, 0.8086f, 0.6667f, 0.0273f, 0.1042f},
};
Primitive frame_17[] = {
    {RECT, 0.8281f, 0.5000f, 0.1719f, 0.5000f},
};
Primitive frame_18[] = {
    {RECT, 0.7891f, 0.5000f, 0.2109f, 0.5000f},
};
Primitive frame_19[] = {
    {RECT, 0.8203f, 0.4688f, 0.1797f, 0.4688f},
    {RECT, 0.0156f, 0.3958f, 0.0156f, 0.0729f},
};
Primitive frame_20[] = {
    {RECT, 0.8594f, 0.4375f, 0.1406f, 0.4375f},
    {RECT, 0.0469f, 0.3438f, 0.0469f, 0.3438f},
    {RECT, 0.2930f, 0.2969f, 0.0195f, 0.0573f},
};
Primitive frame_21[] = {
    {RECT, 0.8867f, 0.4375f, 0.1133f, 0.4375f},
    {RECT, 0.1016f, 0.4792f, 0.1016f, 0.4792f},
    {RECT, 0.4023f, 0.3698f, 0.0195f, 0.0469f},
    {RECT, 0.7578f, 0.3073f, 0.0078f, 0.0573f},
};
Primitive frame_22[] = {
    {RECT, 0.1328f, 0.5000f, 0.1328f, 0.5000f},
    {RECT, 0.8984f, 0.4167f, 0.1016f, 0.4167f},
    {RECT, 0.3398f, 0.2969f, 0.0117f, 0.0573f},
};
Primitive frame_23[] = {
    {RECT, 0.1562f, 0.5000f, 0.1562f, 0.5000f},
    {RECT, 0.9102f, 0.3854f, 0.0898f, 0.3854f},
    {RECT, 0.3750f, 0.3438f, 0.0312f, 0.1250f},
};
Primitive frame_24[] = {
    {RECT, 0.1836f, 0.5000f, 0.1836f, 0.5000f},
    {RECT, 0.9062f, 0.3594f, 0.0938f, 0.3594f},
    {RECT, 0.8203f, 0.9323f, 0.0156f, 0.0677f},
    {RECT, 0.4023f, 0.3385f, 0.0195f, 0.0990f},
};
Primitive frame_25[] = {
    {RECT, 0.2070f, 0.5000f, 0.2070f, 0.5000f},
    {RECT, 0.8984f, 0.3594f, 0.1016f, 0.3594f},
    {RECT, 0.9844f, 0.8802f, 0.0156f, 0.1198f},
    {RECT, 0.8008f, 0.9219f, 0.0117f, 0.0781f},
};
Primitive frame_26[] = {
    {RECT, 0.2227f, 0.5000f, 0.2227f, 0.5000f},
    {RECT, 0.8984f, 0.5000f, 0.1016f, 0.5000f},
};
Primitive frame_27[] = {
    {RECT, 0.2227f, 0.5000f, 0.2227f, 0.5000f},
    {RECT, 0.8789f, 0.5000f, 0.1211f, 0.5000f},
    {RECT, 0.6953f, 0.8750f, 0.0234f, 0.1250f},
};
Primitive frame_28[] = {
    {RECT, 0.2109f, 0.5000f, 0.2109f, 0.5000f},
    {RECT, 0.8516f, 0.5000f, 0.1484f, 0.5000f},
    {RECT, 0.6484f, 0.8490f, 0.0234f, 0.1510f},
};
Primitive frame_29[] = {
    {RECT, 0.1914f, 0.5000f, 0.1914f, 0.5000f},
    {RECT, 0.8359f, 0.5000f, 0.1641f, 0.5000f},
    {RECT, 0.6133f, 0.8594f, 0.0195f, 0.1406f},
};
Primitive frame_30[] = {
    {RECT, 0.8203f, 0.5000f, 0.1797f, 0.5000f},
    {RECT, 0.1797f, 0.5000f, 0.1797f, 0.5000f},
    {RECT, 0.5820f, 0.8958f, 0.0117f, 0.1042f},
    {RECT, 0.7031f, 0.7760f, 0.0156f, 0.0781f},
};
Primitive frame_31[] = {
    {RECT, 0.8047f, 0.5000f, 0.1953f, 0.5000f},
    {RECT, 0.1719f, 0.5000f, 0.1719f, 0.5000f},
};
Primitive frame_32[] = {
    {RECT, 0.7930f, 0.5000f, 0.2070f, 0.5000f},
    {RECT, 0.1641f, 0.5000f, 0.1641f, 0.5000f},
    {RECT, 0.3242f, 0.7917f, 0.0117f, 0.1042f},
};
Primitive frame_33[] = {
    {RECT, 0.7812f, 0.5000f, 0.2188f, 0.5000f},
    {RECT, 0.1641f, 0.5000f, 0.1641f, 0.5000f},
    {RECT, 0.3203f, 0.7812f, 0.0156f, 0.1354f},
};
Primitive frame_34[] = {
    {RECT, 0.7695f, 0.5000f, 0.2305f, 0.5000f},
    {RECT, 0.1602f, 0.5000f, 0.1602f, 0.5000f},
};
Primitive frame_35[] = {
    {RECT, 0.7656f, 0.5000f, 0.2344f, 0.5000f},
    {RECT, 0.1602f, 0.5000f, 0.1602f, 0.5000f},
};
Primitive frame_36[] = {
    {RECT, 0.7656f, 0.5000f, 0.2344f, 0.5000f},
    {RECT, 0.1719f, 0.5000f, 0.1719f, 0.5000f},
    {RECT, 0.3711f, 0.8021f, 0.0352f, 0.1979f},
};
Primitive frame_37[] = {
    {RECT, 0.7852f, 0.5000f, 0.2148f, 0.5000f},
    {RECT, 0.1875f, 0.5000f, 0.1875f, 0.5000f},
    {RECT, 0.3945f, 0.7969f, 0.0352f, 0.2031f},
};
Primitive frame_38[] = {
    {RECT, 0.1953f, 0.5000f, 0.1953f, 0.5000f},
    {RECT, 0.7930f, 0.5000f, 0.2070f, 0.5000f},
    {RECT, 0.3516f, 0.6771f, 0.0156f, 0.0938f},
    {RECT, 0.4570f, 0.0156f, 0.0586f, 0.0156f},
};
Primitive frame_39[] = {
    {RECT, 0.2812f, 0.5000f, 0.2812f, 0.5000f},
    {RECT, 0.8047f, 0.5000f, 0.1953f, 0.5000f},
    {RECT, 0.3672f, 0.7031f, 0.0234f, 0.1094f},
};
Primitive frame_40[] = {
    {RECT, 0.2812f, 0.5000f, 0.2812f, 0.5000f},
    {RECT, 0.8125f, 0.5000f, 0.1875f, 0.5000f},
    {RECT, 0.3828f, 0.6771f, 0.0234f, 0.0938f},
};
Primitive frame_41[] = {
    {RECT, 0.2812f, 0.5000f, 0.2812f, 0.5000f},
    {RECT, 0.8203f, 0.5000f, 0.1797f, 0.5000f},
    {RECT, 0.6328f, 0.6510f, 0.0078f, 0.0781f},
};
Primitive frame_42[] = {
    {RECT, 0.2891f, 0.5000f, 0.2891f, 0.5000f},
    {RECT, 0.8203f, 0.5000f, 0.1797f, 0.5000f},
    {RECT, 0.6328f, 0.6406f, 0.0078f, 0.0781f},
};
Primitive frame_43[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_44[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.6055f, 0.6562f, 0.0117f, 0.0938f},
    {RECT, 0.6680f, 0.9375f, 0.0273f, 0.0625f},
};
Primitive frame_45[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.6289f, 0.7708f, 0.0586f, 0.2292f},
};
Primitive frame_46[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.6172f, 0.7708f, 0.0547f, 0.2292f},
};
Primitive frame_47[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.5938f, 0.7865f, 0.0469f, 0.2135f},
};
Primitive frame_48[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_49[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_50[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_51[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.3125f, 0.9688f, 0.0156f, 0.0312f},
};
Primitive frame_52[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.3203f, 0.9583f, 0.0234f, 0.0417f},
};
Primitive frame_53[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.3672f, 0.7708f, 0.0547f, 0.2292f},
};
Primitive frame_54[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.3867f, 0.7656f, 0.0586f, 0.2344f},
};
Primitive frame_55[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_56[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.3867f, 0.5990f, 0.0117f, 0.0469f},
};
Primitive frame_57[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_58[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_59[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.6172f, 0.6094f, 0.0078f, 0.0677f},
};
Primitive frame_60[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_61[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.6016f, 0.6094f, 0.0078f, 0.0469f},
};
Primitive frame_62[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_63[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_64[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_65[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_66[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_67[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_68[] = {
    {RECT, 0.2148f, 0.5000f, 0.2148f, 0.5000f},
    {RECT, 0.7188f, 0.5000f, 0.2812f, 0.5000f},
    {RECT, 0.6367f, 0.8125f, 0.0195f, 0.1458f},
};
Primitive frame_69[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.6875f, 0.8750f, 0.0312f, 0.1250f},
};
Primitive frame_70[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.7188f, 0.9010f, 0.0234f, 0.0990f},
};
Primitive frame_71[] = {
    {CIRCLE, 0.3477f, 0.4948f, 0.5085f, 0.0000f},
    {RECT, 0.8828f, 0.5000f, 0.1172f, 0.5000f},
    {RECT, 0.7500f, 0.9010f, 0.0156f, 0.0990f},
    {RECT, 0.8320f, 0.9583f, 0.0117f, 0.0417f},
};
Primitive frame_72[] = {
    {CIRCLE, 0.3633f, 0.4948f, 0.5193f, 0.0000f},
    {RECT, 0.9102f, 0.4896f, 0.0898f, 0.4896f},
    {CIRCLE, 0.7773f, 0.9635f, 0.0228f, 0.0000f},
    {CIRCLE, 0.5703f, 0.5052f, 0.0305f, 0.0000f},
    {RECT, 0.7773f, 0.8958f, 0.0117f, 0.0208f},
};
Primitive frame_73[] = {
    {CIRCLE, 0.3672f, 0.4948f, 0.5221f, 0.0000f},
    {RECT, 0.9062f, 0.5000f, 0.0938f, 0.5000f},
    {CIRCLE, 0.6175f, 0.5118f, 0.0167f, 0.0000f},
};
Primitive frame_74[] = {
    {CIRCLE, 0.3555f, 0.4948f, 0.5139f, 0.0000f},
    {RECT, 0.8633f, 0.5000f, 0.1367f, 0.5000f},
};
Primitive frame_75[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_76[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_77[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_78[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.5664f, 0.9583f, 0.0117f, 0.0417f},
};
Primitive frame_79[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_80[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.6328f, 0.5469f, 0.0078f, 0.0260f},
};
Primitive frame_81[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.6328f, 0.5521f, 0.0078f, 0.0208f},
};
Primitive frame_82[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.6328f, 0.5521f, 0.0078f, 0.0208f},
};
Primitive frame_83[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_84[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_85[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_86[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_87[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_88[] = {
    {CIRCLE, 0.2930f, 0.4948f, 0.4728f, 0.0000f},
    {RECT, 0.8242f, 0.5000f, 0.1758f, 0.5000f},
};
Primitive frame_89[] = {
    {CIRCLE, 0.2930f, 0.4948f, 0.4728f, 0.0000f},
    {RECT, 0.8359f, 0.5000f, 0.1641f, 0.5000f},
};
Primitive frame_90[] = {
    {CIRCLE, 0.2930f, 0.4948f, 0.4728f, 0.0000f},
    {RECT, 0.8477f, 0.5000f, 0.1523f, 0.5000f},
};
Primitive frame_91[] = {
    {CIRCLE, 0.2969f, 0.4948f, 0.4752f, 0.0000f},
    {RECT, 0.8594f, 0.5000f, 0.1406f, 0.5000f},
};
Primitive frame_92[] = {
    {CIRCLE, 0.3008f, 0.4948f, 0.4777f, 0.0000f},
    {RECT, 0.8672f, 0.5000f, 0.1328f, 0.5000f},
};
Primitive frame_93[] = {
    {CIRCLE, 0.3047f, 0.4948f, 0.4802f, 0.0000f},
    {RECT, 0.8750f, 0.5000f, 0.1250f, 0.5000f},
};
Primitive frame_94[] = {
    {CIRCLE, 0.3086f, 0.4948f, 0.4826f, 0.0000f},
    {RECT, 0.8789f, 0.5000f, 0.1211f, 0.5000f},
};
Primitive frame_95[] = {
    {CIRCLE, 0.3086f, 0.4948f, 0.4826f, 0.0000f},
    {RECT, 0.8789f, 0.5000f, 0.1211f, 0.5000f},
    {RECT, 0.5508f, 0.9740f, 0.0117f, 0.0260f},
};
Primitive frame_96[] = {
    {CIRCLE, 0.3086f, 0.4948f, 0.4826f, 0.0000f},
    {RECT, 0.8789f, 0.5000f, 0.1211f, 0.5000f},
    {RECT, 0.5508f, 0.9688f, 0.0117f, 0.0312f},
};
Primitive frame_97[] = {
    {CIRCLE, 0.3086f, 0.4948f, 0.4826f, 0.0000f},
    {RECT, 0.8789f, 0.5000f, 0.1211f, 0.5000f},
    {RECT, 0.5469f, 0.9688f, 0.0156f, 0.0312f},
};
Primitive frame_98[] = {
    {CIRCLE, 0.3086f, 0.4948f, 0.4826f, 0.0000f},
    {RECT, 0.8789f, 0.5000f, 0.1211f, 0.5000f},
    {RECT, 0.5469f, 0.9635f, 0.0156f, 0.0365f},
};
Primitive frame_99[] = {
    {CIRCLE, 0.3086f, 0.4948f, 0.4826f, 0.0000f},
    {RECT, 0.8789f, 0.5000f, 0.1211f, 0.5000f},
    {RECT, 0.5430f, 0.9583f, 0.0195f, 0.0417f},
};
Primitive frame_100[] = {
    {CIRCLE, 0.3086f, 0.4948f, 0.4826f, 0.0000f},
    {RECT, 0.8750f, 0.5000f, 0.1250f, 0.5000f},
    {RECT, 0.5430f, 0.9583f, 0.0195f, 0.0417f},
};
Primitive frame_101[] = {
    {CIRCLE, 0.3047f, 0.4948f, 0.4802f, 0.0000f},
    {RECT, 0.8750f, 0.5000f, 0.1250f, 0.5000f},
    {RECT, 0.5430f, 0.9583f, 0.0195f, 0.0417f},
};
Primitive frame_102[] = {
    {CIRCLE, 0.3008f, 0.4948f, 0.4777f, 0.0000f},
    {RECT, 0.8711f, 0.5000f, 0.1289f, 0.5000f},
    {RECT, 0.5430f, 0.9583f, 0.0195f, 0.0417f},
};
Primitive frame_103[] = {
    {CIRCLE, 0.2930f, 0.4948f, 0.4728f, 0.0000f},
    {RECT, 0.8672f, 0.5000f, 0.1328f, 0.5000f},
    {RECT, 0.5430f, 0.9583f, 0.0195f, 0.0417f},
};
Primitive frame_104[] = {
    {RECT, 0.2969f, 0.5000f, 0.2969f, 0.5000f},
    {RECT, 0.8555f, 0.5000f, 0.1445f, 0.5000f},
    {RECT, 0.5391f, 0.9583f, 0.0156f, 0.0417f},
};
Primitive frame_105[] = {
    {RECT, 0.2891f, 0.5000f, 0.2891f, 0.5000f},
    {RECT, 0.8438f, 0.5000f, 0.1562f, 0.5000f},
    {RECT, 0.5352f, 0.9688f, 0.0117f, 0.0312f},
};
Primitive frame_106[] = {
    {RECT, 0.2891f, 0.5000f, 0.2891f, 0.5000f},
    {RECT, 0.8320f, 0.5000f, 0.1680f, 0.5000f},
    {RECT, 0.6211f, 0.6042f, 0.0117f, 0.0312f},
};
Primitive frame_107[] = {
    {RECT, 0.2812f, 0.5000f, 0.2812f, 0.5000f},
    {RECT, 0.8203f, 0.5000f, 0.1797f, 0.5000f},
    {RECT, 0.6094f, 0.6510f, 0.0312f, 0.0885f},
};
Primitive frame_108[] = {
    {RECT, 0.2734f, 0.5000f, 0.2734f, 0.5000f},
    {RECT, 0.8125f, 0.5000f, 0.1875f, 0.5000f},
    {RECT, 0.6055f, 0.6719f, 0.0430f, 0.1094f},
};
Primitive frame_109[] = {
    {RECT, 0.2734f, 0.5000f, 0.2734f, 0.5000f},
    {RECT, 0.8633f, 0.5000f, 0.1367f, 0.5000f},
    {RECT, 0.6016f, 0.6771f, 0.0469f, 0.1146f},
    {RECT, 0.6211f, 0.0104f, 0.0352f, 0.0104f},
};
Primitive frame_110[] = {
    {RECT, 0.2734f, 0.5000f, 0.2734f, 0.5000f},
    {RECT, 0.8555f, 0.5000f, 0.1445f, 0.5000f},
    {RECT, 0.6289f, 0.6042f, 0.0195f, 0.0521f},
    {RECT, 0.5781f, 0.6979f, 0.0156f, 0.0729f},
};
Primitive frame_111[] = {
    {RECT, 0.2969f, 0.5000f, 0.2969f, 0.5000f},
    {RECT, 0.8438f, 0.5000f, 0.1562f, 0.5000f},
    {RECT, 0.8516f, 0.9010f, 0.0234f, 0.0990f},
    {RECT, 0.6250f, 0.6094f, 0.0156f, 0.0469f},
    {RECT, 0.5117f, 0.0156f, 0.0508f, 0.0156f},
};
Primitive frame_112[] = {
    {CIRCLE, 0.2891f, 0.4948f, 0.4704f, 0.0000f},
    {RECT, 0.8164f, 0.5000f, 0.1836f, 0.5000f},
    {RECT, 0.6211f, 0.6667f, 0.0273f, 0.0729f},
    {RECT, 0.8984f, 0.9323f, 0.0234f, 0.0677f},
};
Primitive frame_113[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_114[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_115[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_116[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_117[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_118[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.7383f, 0.8750f, 0.0195f, 0.0833f},
};
Primitive frame_119[] = {
    {CIRCLE, 0.3477f, 0.4948f, 0.5085f, 0.0000f},
    {CIRCLE, 0.7422f, 0.2169f, 0.2982f, 0.0000f},
};
Primitive frame_120[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_121[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_122[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_123[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_124[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_125[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_126[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_127[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_128[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_129[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_130[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_131[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_132[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_133[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_134[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_135[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_136[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_137[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_138[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_139[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_140[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_141[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_142[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_143[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_144[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_145[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_146[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_147[] = {
    {RECT, 0.5000f, 0.5625f, 0.5000f, 0.4375f},
    {RECT, 0.3828f, 0.0104f, 0.1250f, 0.0104f},
};
Primitive frame_148[] = {
    {RECT, 0.5039f, 0.3906f, 0.4961f, 0.3906f},
};
Primitive frame_149[] = {
    {RECT, 0.5039f, 0.3906f, 0.4961f, 0.3906f},
};
Primitive frame_150[] = {
    {RECT, 0.5039f, 0.3906f, 0.4961f, 0.3906f},
};
Primitive frame_151[] = {
    {RECT, 0.5039f, 0.3906f, 0.4961f, 0.3906f},
};
Primitive frame_152[] = {
    {RECT, 0.5039f, 0.3906f, 0.4961f, 0.3906f},
};
Primitive frame_153[] = {
    {RECT, 0.5000f, 0.3698f, 0.5000f, 0.3698f},
};
Primitive frame_154[] = {
    {RECT, 0.5000f, 0.3750f, 0.5000f, 0.3750f},
    {RECT, 0.7812f, 0.0833f, 0.0938f, 0.0417f},
};
Primitive frame_155[] = {
    {RECT, 0.5000f, 0.5156f, 0.5000f, 0.4427f},
    {CIRCLE, 0.4368f, 0.3701f, 0.0643f, 0.0000f},
};
Primitive frame_156[] = {
    {RECT, 0.5000f, 0.5677f, 0.5000f, 0.4323f},
    {RECT, 0.0234f, 0.0677f, 0.0234f, 0.0677f},
};
Primitive frame_157[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_158[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_159[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_160[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_161[] = {
    {CIRCLE, 0.6602f, 0.4948f, 0.4980f, 0.0000f},
    {RECT, 0.0664f, 0.9896f, 0.0664f, 0.0104f},
};
Primitive frame_162[] = {
    {CIRCLE, 0.6758f, 0.4948f, 0.4877f, 0.0000f},
};
Primitive frame_163[] = {
    {CIRCLE, 0.6797f, 0.4948f, 0.4851f, 0.0000f},
};
Primitive frame_164[] = {
    {CIRCLE, 0.6445f, 0.4948f, 0.5085f, 0.0000f},
};
Primitive frame_165[] = {
    {CIRCLE, 0.6289f, 0.4948f, 0.5193f, 0.0000f},
};
Primitive frame_166[] = {
    {CIRCLE, 0.6289f, 0.4948f, 0.5193f, 0.0000f},
};
Primitive frame_167[] = {
    {CIRCLE, 0.6367f, 0.4948f, 0.5139f, 0.0000f},
};
Primitive frame_168[] = {
    {CIRCLE, 0.6367f, 0.4948f, 0.5139f, 0.0000f},
};
Primitive frame_169[] = {
    {CIRCLE, 0.6250f, 0.4948f, 0.5221f, 0.0000f},
};
Primitive frame_170[] = {
    {CIRCLE, 0.6070f, 0.5281f, 0.5178f, 0.0000f},
};
Primitive frame_171[] = {
    {CIRCLE, 0.6230f, 0.4974f, 0.5166f, 0.0000f},
};
Primitive frame_172[] = {
    {CIRCLE, 0.6133f, 0.5573f, 0.4987f, 0.0000f},
};
Primitive frame_173[] = {
    {CIRCLE, 0.6229f, 0.6218f, 0.4610f, 0.0000f},
};
Primitive frame_174[] = {
    {CIRCLE, 0.6406f, 0.6146f, 0.4502f, 0.0000f},
};
Primitive frame_175[] = {
    {CIRCLE, 0.6641f, 0.5885f, 0.4451f, 0.0000f},
    {RECT, 0.1641f, 0.9792f, 0.1641f, 0.0208f},
};
Primitive frame_176[] = {
    {RECT, 0.5000f, 0.5833f, 0.5000f, 0.4167f},
};
Primitive frame_177[] = {
    {RECT, 0.5000f, 0.5885f, 0.5000f, 0.4115f},
};
Primitive frame_178[] = {
    {RECT, 0.5391f, 0.5469f, 0.4609f, 0.3490f},
};
Primitive frame_179[] = {
    {RECT, 0.5664f, 0.5052f, 0.4336f, 0.3177f},
};
Primitive frame_180[] = {
    {RECT, 0.5781f, 0.4740f, 0.4062f, 0.2865f},
};
Primitive frame_181[] = {
    {RECT, 0.5703f, 0.4531f, 0.3594f, 0.2448f},
};
Primitive frame_182[] = {
    {RECT, 0.5625f, 0.4375f, 0.3203f, 0.2188f},
};
Primitive frame_183[] = {
    {RECT, 0.5547f, 0.4219f, 0.2891f, 0.1927f},
};
Primitive frame_184[] = {
    {RECT, 0.5508f, 0.4062f, 0.2617f, 0.1771f},
};
Primitive frame_185[] = {
    {RECT, 0.5508f, 0.3958f, 0.2461f, 0.1667f},
};
Primitive frame_186[] = {
    {RECT, 0.5469f, 0.3854f, 0.2344f, 0.1667f},
};
Primitive frame_187[] = {
    {RECT, 0.5469f, 0.3854f, 0.2344f, 0.1667f},
};
Primitive frame_188[] = {
    {RECT, 0.5469f, 0.3854f, 0.2344f, 0.1562f},
};
Primitive frame_189[] = {
    {RECT, 0.5469f, 0.3802f, 0.2344f, 0.1615f},
};
Primitive frame_190[] = {
    {RECT, 0.5391f, 0.3698f, 0.2344f, 0.1719f},
};
Primitive frame_191[] = {
    {RECT, 0.5352f, 0.3646f, 0.2383f, 0.1667f},
};
Primitive frame_192[] = {
    {RECT, 0.5312f, 0.3698f, 0.2344f, 0.1615f},
};
Primitive frame_193[] = {
    {RECT, 0.5312f, 0.3594f, 0.2344f, 0.1615f},
};
Primitive frame_194[] = {
    {RECT, 0.5273f, 0.3594f, 0.2383f, 0.1615f},
};
Primitive frame_195[] = {
    {RECT, 0.5273f, 0.3594f, 0.2383f, 0.1615f},
};
Primitive frame_196[] = {
    {RECT, 0.5273f, 0.3594f, 0.2383f, 0.1615f},
};
Primitive frame_197[] = {
    {RECT, 0.5234f, 0.3698f, 0.2344f, 0.1615f},
};
Primitive frame_198[] = {
    {RECT, 0.5195f, 0.3750f, 0.2383f, 0.1667f},
};
Primitive frame_199[] = {
    {RECT, 0.5195f, 0.3906f, 0.2383f, 0.1615f},
};
Primitive frame_200[] = {
    {RECT, 0.5195f, 0.3958f, 0.2383f, 0.1667f},
};
Primitive frame_201[] = {
    {RECT, 0.5195f, 0.4010f, 0.2383f, 0.1615f},
};
Primitive frame_202[] = {
    {RECT, 0.5195f, 0.4167f, 0.2383f, 0.1667f},
};
Primitive frame_203[] = {
    {RECT, 0.5195f, 0.4167f, 0.2383f, 0.1562f},
};
Primitive frame_204[] = {
    {RECT, 0.5234f, 0.4219f, 0.2344f, 0.1615f},
};
Primitive frame_205[] = {
    {RECT, 0.5234f, 0.4167f, 0.2344f, 0.1667f},
};
Primitive frame_206[] = {
    {RECT, 0.5273f, 0.4115f, 0.2383f, 0.1719f},
};
Primitive frame_207[] = {
    {RECT, 0.5312f, 0.3958f, 0.2344f, 0.1667f},
};
Primitive frame_208[] = {
    {RECT, 0.5352f, 0.3906f, 0.2383f, 0.1615f},
};
Primitive frame_209[] = {
    {RECT, 0.5391f, 0.3906f, 0.2344f, 0.1615f},
};
Primitive frame_210[] = {
    {RECT, 0.5469f, 0.3802f, 0.2344f, 0.1615f},
};
Primitive frame_211[] = {
    {RECT, 0.5508f, 0.3542f, 0.2305f, 0.1667f},
};
Primitive frame_212[] = {
    {RECT, 0.5586f, 0.3542f, 0.2383f, 0.1667f},
};
Primitive frame_213[] = {
    {RECT, 0.5703f, 0.3542f, 0.2422f, 0.1667f},
};
Primitive frame_214[] = {
    {RECT, 0.6328f, 0.3646f, 0.2656f, 0.1771f},
};
Primitive frame_215[] = {
    {RECT, 0.6914f, 0.3646f, 0.2852f, 0.1979f},
};
Primitive frame_216[] = {
    {RECT, 0.7227f, 0.3750f, 0.2773f, 0.2083f},
};
Primitive frame_217[] = {
    {RECT, 0.7383f, 0.3854f, 0.2617f, 0.2188f},
};
Primitive frame_218[] = {
    {RECT, 0.7539f, 0.4062f, 0.2461f, 0.2292f},
};
Primitive frame_219[] = {
    {RECT, 0.7656f, 0.4271f, 0.2344f, 0.2292f},
};
Primitive frame_220[] = {
    {CIRCLE, 0.7508f, 0.4615f, 0.1977f, 0.0000f},
    {CIRCLE, 0.0977f, 0.8468f, 0.1449f, 0.0000f},
};
Primitive frame_221[] = {
    {CIRCLE, 0.1758f, 0.8237f, 0.2153f, 0.0000f},
    {CIRCLE, 0.7266f, 0.4479f, 0.1657f, 0.0000f},
};
Primitive frame_222[] = {
    {RECT, 0.1992f, 0.7969f, 0.1992f, 0.2031f},
    {CIRCLE, 0.7173f, 0.4395f, 0.1547f, 0.0000f},
};
Primitive frame_223[] = {
    {RECT, 0.1992f, 0.7969f, 0.1992f, 0.2031f},
    {CIRCLE, 0.7176f, 0.4392f, 0.1546f, 0.0000f},
};
Primitive frame_224[] = {
    {RECT, 0.2031f, 0.7917f, 0.2031f, 0.2083f},
    {CIRCLE, 0.7183f, 0.4331f, 0.1579f, 0.0000f},
};
Primitive frame_225[] = {
    {RECT, 0.2031f, 0.7917f, 0.2031f, 0.2083f},
    {CIRCLE, 0.7105f, 0.4222f, 0.1521f, 0.0000f},
};
Primitive frame_226[] = {
    {RECT, 0.2031f, 0.7917f, 0.2031f, 0.2083f},
    {CIRCLE, 0.7082f, 0.4126f, 0.1533f, 0.0000f},
};
Primitive frame_227[] = {
    {RECT, 0.2070f, 0.7917f, 0.2070f, 0.2083f},
    {CIRCLE, 0.7031f, 0.4098f, 0.1534f, 0.0000f},
};
Primitive frame_228[] = {
    {RECT, 0.2109f, 0.7917f, 0.2109f, 0.2083f},
    {RECT, 0.6953f, 0.4062f, 0.1172f, 0.1979f},
};
Primitive frame_229[] = {
    {RECT, 0.2109f, 0.7917f, 0.2109f, 0.2083f},
    {CIRCLE, 0.6992f, 0.3957f, 0.1522f, 0.0000f},
};
Primitive frame_230[] = {
    {RECT, 0.2109f, 0.8073f, 0.2109f, 0.1927f},
    {CIRCLE, 0.6918f, 0.3934f, 0.1479f, 0.0000f},
};
Primitive frame_231[] = {
    {RECT, 0.2148f, 0.8021f, 0.2148f, 0.1979f},
    {CIRCLE, 0.6881f, 0.3969f, 0.1491f, 0.0000f},
};
Primitive frame_232[] = {
    {RECT, 0.2188f, 0.7865f, 0.2188f, 0.2135f},
    {CIRCLE, 0.6914f, 0.3980f, 0.1511f, 0.0000f},
};
Primitive frame_233[] = {
    {RECT, 0.2188f, 0.7865f, 0.2188f, 0.2135f},
    {RECT, 0.6836f, 0.4115f, 0.1133f, 0.1927f},
};
Primitive frame_234[] = {
    {RECT, 0.2188f, 0.7865f, 0.2188f, 0.2135f},
    {CIRCLE, 0.6875f, 0.4153f, 0.1500f, 0.0000f},
};
Primitive frame_235[] = {
    {RECT, 0.2227f, 0.7812f, 0.2227f, 0.2188f},
    {CIRCLE, 0.6892f, 0.4242f, 0.1495f, 0.0000f},
};
Primitive frame_236[] = {
    {RECT, 0.2266f, 0.7812f, 0.2266f, 0.2188f},
    {RECT, 0.6758f, 0.4427f, 0.1133f, 0.1927f},
};
Primitive frame_237[] = {
    {RECT, 0.2266f, 0.7812f, 0.2266f, 0.2188f},
    {RECT, 0.6797f, 0.4479f, 0.1172f, 0.1979f},
};
Primitive frame_238[] = {
    {RECT, 0.2305f, 0.7812f, 0.2305f, 0.2188f},
    {CIRCLE, 0.6875f, 0.4427f, 0.1503f, 0.0000f},
};
Primitive frame_239[] = {
    {RECT, 0.2305f, 0.7812f, 0.2305f, 0.2188f},
    {CIRCLE, 0.6871f, 0.4445f, 0.1514f, 0.0000f},
};
Primitive frame_240[] = {
    {RECT, 0.2344f, 0.7760f, 0.2344f, 0.2240f},
    {RECT, 0.6758f, 0.4531f, 0.1133f, 0.1927f},
};
Primitive frame_241[] = {
    {RECT, 0.2344f, 0.7760f, 0.2344f, 0.2240f},
    {RECT, 0.6758f, 0.4427f, 0.1133f, 0.1927f},
};
Primitive frame_242[] = {
    {RECT, 0.2383f, 0.7917f, 0.2383f, 0.2083f},
    {CIRCLE, 0.6766f, 0.4323f, 0.1491f, 0.0000f},
};
Primitive frame_243[] = {
    {RECT, 0.2422f, 0.7917f, 0.2422f, 0.2083f},
    {RECT, 0.6758f, 0.4323f, 0.1133f, 0.1927f},
};
Primitive frame_244[] = {
    {RECT, 0.2422f, 0.7708f, 0.2422f, 0.2292f},
    {RECT, 0.6719f, 0.4219f, 0.1094f, 0.1927f},
};
Primitive frame_245[] = {
    {RECT, 0.2461f, 0.7708f, 0.2461f, 0.2292f},
    {CIRCLE, 0.6719f, 0.4062f, 0.1468f, 0.0000f},
};
Primitive frame_246[] = {
    {RECT, 0.2500f, 0.7708f, 0.2500f, 0.2292f},
    {CIRCLE, 0.6673f, 0.3975f, 0.1460f, 0.0000f},
};
Primitive frame_247[] = {
    {RECT, 0.2500f, 0.7708f, 0.2500f, 0.2292f},
    {RECT, 0.6641f, 0.4010f, 0.1094f, 0.1927f},
};
Primitive frame_248[] = {
    {RECT, 0.2578f, 0.7708f, 0.2578f, 0.2292f},
    {RECT, 0.6758f, 0.4010f, 0.1211f, 0.2031f},
};
Primitive frame_249[] = {
    {RECT, 0.2578f, 0.7917f, 0.2578f, 0.2083f},
    {CIRCLE, 0.6992f, 0.4010f, 0.1779f, 0.0000f},
};
Primitive frame_250[] = {
    {CIRCLE, 0.7438f, 0.4033f, 0.2089f, 0.0000f},
    {RECT, 0.2188f, 0.8229f, 0.2188f, 0.1771f},
    {RECT, 0.4922f, 0.9062f, 0.0312f, 0.0938f},
};
Primitive frame_251[] = {
    {CIRCLE, 0.8035f, 0.4151f, 0.2503f, 0.0000f},
    {RECT, 0.0508f, 0.8698f, 0.0508f, 0.1302f},
    {CIRCLE, 0.4844f, 0.9729f, 0.0266f, 0.0000f},
};
Primitive frame_252[] = {
    {RECT, 0.7969f, 0.4583f, 0.2031f, 0.3750f},
};
Primitive frame_253[] = {
    {RECT, 0.7969f, 0.4896f, 0.2031f, 0.4688f},
};
Primitive frame_254[] = {
    {RECT, 0.7812f, 0.5000f, 0.2188f, 0.5000f},
};
Primitive frame_255[] = {
    {RECT, 0.7500f, 0.5000f, 0.2500f, 0.5000f},
};
Primitive frame_256[] = {
    {RECT, 0.6836f, 0.4792f, 0.3164f, 0.2083f},
    {RECT, 0.8594f, 0.1198f, 0.1406f, 0.1198f},
};
Primitive frame_257[] = {
    {RECT, 0.6719f, 0.4896f, 0.3281f, 0.2188f},
    {RECT, 0.8672f, 0.0521f, 0.1328f, 0.0521f},
};
Primitive frame_258[] = {
    {RECT, 0.6719f, 0.4896f, 0.3281f, 0.2396f},
    {RECT, 0.8828f, 0.0417f, 0.1172f, 0.0417f},
};
Primitive frame_259[] = {
    {RECT, 0.6875f, 0.4948f, 0.3125f, 0.2448f},
    {RECT, 0.8984f, 0.0312f, 0.1016f, 0.0312f},
};
Primitive frame_260[] = {
    {RECT, 0.6953f, 0.5052f, 0.3047f, 0.2552f},
    {RECT, 0.9219f, 0.0208f, 0.0781f, 0.0208f},
};
Primitive frame_261[] = {
    {RECT, 0.6992f, 0.5417f, 0.3008f, 0.2292f},
    {RECT, 0.9414f, 0.0156f, 0.0586f, 0.0156f},
};
Primitive frame_262[] = {
    {RECT, 0.6914f, 0.5469f, 0.3086f, 0.2344f},
};
Primitive frame_263[] = {
    {RECT, 0.6719f, 0.5365f, 0.3281f, 0.2344f},
};
Primitive frame_264[] = {
    {RECT, 0.6641f, 0.4427f, 0.3359f, 0.1615f},
    {RECT, 0.5000f, 0.7552f, 0.0625f, 0.1510f},
};
Primitive frame_265[] = {
    {RECT, 0.6641f, 0.3594f, 0.3359f, 0.1615f},
    {RECT, 0.4648f, 0.8385f, 0.0742f, 0.1406f},
};
Primitive frame_266[] = {
    {RECT, 0.6641f, 0.1146f, 0.3359f, 0.1146f},
    {RECT, 0.4141f, 0.7656f, 0.0781f, 0.1406f},
};
Primitive frame_267[] = {
    {CIRCLE, 0.3945f, 0.6510f, 0.1008f, 0.0000f},
};
Primitive frame_268[] = {
    {RECT, 0.3945f, 0.5521f, 0.0898f, 0.0729f},
};
Primitive frame_269[] = {
    {RECT, 0.3906f, 0.4896f, 0.0781f, 0.1354f},
};
Primitive frame_270[] = {
    {RECT, 0.3945f, 0.4427f, 0.0664f, 0.1406f},
};
Primitive frame_271[] = {
    {CIRCLE, 0.4242f, 0.3799f, 0.1022f, 0.0000f},
};
Primitive frame_272[] = {
    {RECT, 0.4531f, 0.3229f, 0.1016f, 0.0729f},
};
Primitive frame_273[] = {
    {RECT, 0.5000f, 0.5521f, 0.5000f, 0.4479f},
    {CIRCLE, 0.4805f, 0.2448f, 0.1117f, 0.0000f},
};
Primitive frame_274[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_275[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_276[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_277[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_278[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_279[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_280[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_281[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_282[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_283[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_284[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_285[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_286[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_287[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_288[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_289[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_290[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_291[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_292[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_293[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {CIRCLE, 0.2188f, 0.9635f, 0.0250f, 0.0000f},
};
Primitive frame_294[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.2266f, 0.9688f, 0.0156f, 0.0312f},
};
Primitive frame_295[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.2422f, 0.9896f, 0.0156f, 0.0104f},
};
Primitive frame_296[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_297[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_298[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_299[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_300[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_301[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_302[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_303[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_304[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_305[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_306[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_307[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_308[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_309[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_310[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_311[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_312[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_313[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_314[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_315[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_316[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_317[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_318[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_319[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_320[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.5430f, 0.3646f, 0.0117f, 0.0312f},
};
Primitive frame_321[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {CIRCLE, 0.5560f, 0.4045f, 0.0170f, 0.0000f},
};
Primitive frame_322[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {CIRCLE, 0.5781f, 0.4167f, 0.0110f, 0.0000f},
};
Primitive frame_323[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_324[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_325[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_326[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_327[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.4805f, 0.9792f, 0.0273f, 0.0208f},
};
Primitive frame_328[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {CIRCLE, 0.4258f, 0.9680f, 0.0387f, 0.0000f},
};
Primitive frame_329[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_330[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_331[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_332[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.5391f, 0.7656f, 0.0078f, 0.0260f},
};
Primitive frame_333[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_334[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_335[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_336[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_337[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
    {RECT, 0.7109f, 0.8646f, 0.0078f, 0.0312f},
};
Primitive frame_338[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_339[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_340[] = {
    {CIRCLE, 0.3597f, 0.4948f, 0.5168f, 0.0000f},
    {RECT, 0.8867f, 0.3646f, 0.1133f, 0.3646f},
};
Primitive frame_341[] = {
    {CIRCLE, 0.3711f, 0.4948f, 0.5248f, 0.0000f},
    {RECT, 0.9492f, 0.0521f, 0.0508f, 0.0521f},
    {CIRCLE, 0.6944f, 0.5381f, 0.0196f, 0.0000f},
};
Primitive frame_342[] = {
    {CIRCLE, 0.3594f, 0.4948f, 0.5166f, 0.0000f},
    {RECT, 0.7266f, 0.6302f, 0.0391f, 0.0781f},
};
Primitive frame_343[] = {
    {CIRCLE, 0.4023f, 0.4948f, 0.5473f, 0.0000f},
    {RECT, 0.9609f, 0.0260f, 0.0391f, 0.0260f},
    {RECT, 0.7148f, 0.6667f, 0.0273f, 0.0625f},
};
Primitive frame_344[] = {
    {CIRCLE, 0.3594f, 0.4948f, 0.5166f, 0.0000f},
    {RECT, 0.9688f, 0.0312f, 0.0312f, 0.0312f},
};
Primitive frame_345[] = {
    {CIRCLE, 0.3398f, 0.4948f, 0.5032f, 0.0000f},
    {CIRCLE, 0.9531f, 0.0417f, 0.0500f, 0.0000f},
    {RECT, 0.6836f, 0.6406f, 0.0117f, 0.0365f},
};
Primitive frame_346[] = {
    {CIRCLE, 0.3398f, 0.4948f, 0.5032f, 0.0000f},
    {CIRCLE, 0.9375f, 0.0677f, 0.0746f, 0.0000f},
    {RECT, 0.6680f, 0.6302f, 0.0195f, 0.0469f},
};
Primitive frame_347[] = {
    {CIRCLE, 0.3909f, 0.4948f, 0.5390f, 0.0000f},
    {RECT, 0.9258f, 0.0781f, 0.0742f, 0.0781f},
    {RECT, 0.6641f, 0.6510f, 0.0234f, 0.0677f},
    {RECT, 0.9922f, 0.8281f, 0.0078f, 0.0885f},
};
Primitive frame_348[] = {
    {CIRCLE, 0.3633f, 0.4948f, 0.5193f, 0.0000f},
    {RECT, 0.6797f, 0.6458f, 0.0234f, 0.0625f},
    {RECT, 0.9570f, 0.0417f, 0.0430f, 0.0417f},
};
Primitive frame_349[] = {
    {CIRCLE, 0.3320f, 0.4948f, 0.4980f, 0.0000f},
    {RECT, 0.7070f, 0.6354f, 0.0195f, 0.0729f},
};
Primitive frame_350[] = {
    {CIRCLE, 0.3438f, 0.4948f, 0.5058f, 0.0000f},
    {RECT, 0.7500f, 0.6510f, 0.0156f, 0.0677f},
};
Primitive frame_351[] = {
    {CIRCLE, 0.3711f, 0.4948f, 0.5248f, 0.0000f},
    {RECT, 0.8281f, 0.6979f, 0.0156f, 0.0729f},
};
Primitive frame_352[] = {
    {CIRCLE, 0.4023f, 0.4948f, 0.5473f, 0.0000f},
    {RECT, 0.9570f, 0.7240f, 0.0195f, 0.0885f},
};
Primitive frame_353[] = {
    {RECT, 0.4922f, 0.5000f, 0.4922f, 0.5000f},
};
Primitive frame_354[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_355[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_356[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_357[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_358[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_359[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_360[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_361[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_362[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_363[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_364[] = {
    {RECT, 0.5000f, 0.5000f, 0.5000f, 0.5000f},
};
Primitive frame_365[] = {
    {CIRCLE, 0.3684f, 0.4948f, 0.5229f, 0.0000f},
};
Primitive frame_366[] = {
    {CIRCLE, 0.3164f, 0.4948f, 0.4877f, 0.0000f},
    {RECT, 0.9219f, 0.4010f, 0.0781f, 0.2240f},
    {RECT, 0.9766f, 0.8802f, 0.0234f, 0.1198f},
};
Primitive frame_367[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_368[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_369[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_370[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_371[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_372[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_373[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_374[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_375[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_376[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_377[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_378[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_379[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_380[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_381[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_382[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_383[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_384[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_385[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_386[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_387[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_388[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_389[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_390[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_391[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_392[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_393[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_394[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_395[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_396[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_397[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_398[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_399[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_400[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_401[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_402[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_403[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_404[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_405[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_406[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_407[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_408[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_409[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_410[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_411[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_412[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_413[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_414[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_415[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_416[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_417[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_418[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_419[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_420[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_421[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_422[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_423[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_424[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_425[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_426[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_427[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_428[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_429[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_430[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_431[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_432[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_433[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_434[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_435[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_436[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_437[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_438[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_439[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_440[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_441[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_442[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_443[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_444[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_445[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_446[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_447[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_448[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_449[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_450[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_451[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_452[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_453[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_454[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_455[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_456[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_457[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_458[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_459[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_460[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_461[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_462[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_463[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_464[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_465[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_466[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_467[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_468[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_469[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_470[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_471[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_472[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_473[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_474[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_475[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_476[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_477[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_478[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_479[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_480[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_481[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_482[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_483[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_484[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_485[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_486[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_487[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_488[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_489[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_490[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_491[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_492[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_493[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_494[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_495[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_496[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_497[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_498[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_499[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_500[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_501[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_502[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_503[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_504[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_505[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_506[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_507[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_508[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_509[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_510[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_511[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_512[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_513[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_514[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_515[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_516[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_517[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_518[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_519[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_520[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_521[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_522[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_523[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_524[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_525[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_526[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_527[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_528[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_529[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_530[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_531[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_532[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_533[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_534[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_535[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_536[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_537[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_538[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_539[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_540[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_541[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_542[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_543[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_544[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_545[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_546[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_547[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_548[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_549[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_550[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_551[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_552[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_553[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_554[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_555[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_556[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_557[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_558[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_559[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_560[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_561[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_562[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_563[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_564[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_565[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_566[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_567[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_568[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_569[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_570[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_571[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_572[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_573[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_574[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_575[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_576[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_577[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_578[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_579[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_580[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_581[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_582[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_583[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_584[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_585[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_586[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_587[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_588[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_589[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_590[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_591[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_592[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_593[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_594[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_595[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_596[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_597[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_598[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_599[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_600[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_601[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_602[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_603[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_604[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_605[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_606[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_607[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_608[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_609[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_610[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_611[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_612[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_613[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_614[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_615[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_616[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_617[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_618[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_619[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_620[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_621[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_622[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_623[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_624[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_625[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_626[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_627[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_628[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_629[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_630[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_631[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_632[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_633[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_634[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_635[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_636[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_637[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_638[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_639[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_640[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_641[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_642[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_643[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_644[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_645[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_646[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_647[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_648[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_649[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_650[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_651[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_652[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_653[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_654[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_655[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_656[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_657[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_658[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_659[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_660[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_661[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_662[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_663[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_664[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_665[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_666[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_667[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_668[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_669[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_670[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_671[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_672[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_673[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_674[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_675[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_676[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_677[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_678[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_679[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_680[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_681[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_682[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_683[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_684[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_685[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_686[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_687[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_688[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_689[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_690[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_691[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_692[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_693[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_694[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_695[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_696[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_697[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_698[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_699[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_700[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_701[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_702[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_703[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_704[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_705[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_706[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_707[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_708[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_709[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_710[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_711[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_712[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_713[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_714[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_715[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_716[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_717[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_718[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_719[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_720[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_721[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_722[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_723[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_724[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_725[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_726[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_727[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_728[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_729[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_730[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_731[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_732[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_733[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_734[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_735[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_736[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_737[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_738[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_739[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_740[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_741[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_742[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_743[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_744[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_745[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_746[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_747[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_748[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_749[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_750[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_751[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_752[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_753[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_754[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_755[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_756[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_757[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_758[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_759[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_760[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_761[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_762[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_763[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_764[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_765[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_766[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_767[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_768[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_769[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_770[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_771[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_772[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_773[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_774[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_775[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_776[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_777[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_778[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_779[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_780[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_781[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_782[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_783[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_784[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_785[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_786[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_787[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_788[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_789[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_790[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_791[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_792[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_793[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_794[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_795[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_796[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_797[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_798[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_799[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_800[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_801[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_802[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_803[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_804[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_805[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_806[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_807[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_808[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_809[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_810[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_811[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_812[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_813[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_814[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_815[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_816[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_817[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_818[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_819[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_820[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_821[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_822[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_823[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_824[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_825[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_826[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_827[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_828[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_829[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_830[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_831[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_832[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_833[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_834[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_835[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_836[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_837[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_838[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_839[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_840[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_841[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_842[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_843[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_844[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_845[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_846[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_847[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_848[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_849[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_850[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_851[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_852[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_853[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_854[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_855[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_856[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_857[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_858[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_859[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_860[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_861[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_862[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_863[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_864[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_865[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_866[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_867[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_868[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_869[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_870[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_871[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_872[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_873[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_874[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_875[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_876[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_877[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_878[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_879[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_880[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_881[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_882[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_883[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_884[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_885[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_886[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_887[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_888[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_889[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_890[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_891[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_892[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_893[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_894[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_895[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_896[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_897[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_898[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_899[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_900[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_901[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_902[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_903[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_904[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_905[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_906[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_907[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_908[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_909[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_910[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_911[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_912[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_913[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_914[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_915[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_916[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_917[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_918[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_919[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_920[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_921[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_922[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_923[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_924[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_925[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_926[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_927[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_928[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_929[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_930[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_931[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_932[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_933[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_934[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_935[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_936[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_937[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_938[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_939[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_940[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_941[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_942[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_943[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_944[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_945[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_946[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_947[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_948[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_949[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_950[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_951[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_952[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_953[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_954[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_955[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_956[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_957[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_958[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_959[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_960[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_961[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_962[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_963[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_964[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_965[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_966[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_967[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_968[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_969[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_970[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_971[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_972[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_973[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_974[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_975[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_976[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_977[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_978[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_979[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_980[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_981[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_982[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_983[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_984[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_985[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_986[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_987[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_988[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_989[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_990[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_991[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_992[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_993[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_994[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_995[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_996[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_997[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_998[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_999[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1000[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1001[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1002[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1003[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1004[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1005[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1006[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1007[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1008[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1009[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1010[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1011[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1012[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1013[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1014[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1015[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1016[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1017[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1018[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1019[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1020[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1021[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1022[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1023[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1024[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1025[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1026[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1027[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1028[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1029[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1030[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1031[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1032[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1033[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1034[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1035[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1036[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1037[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1038[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1039[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1040[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1041[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1042[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1043[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1044[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1045[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1046[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1047[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1048[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1049[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1050[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1051[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1052[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1053[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1054[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1055[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1056[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1057[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1058[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1059[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1060[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1061[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1062[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1063[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1064[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1065[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1066[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1067[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1068[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1069[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1070[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1071[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1072[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1073[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1074[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1075[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1076[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1077[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1078[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1079[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1080[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1081[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1082[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1083[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1084[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1085[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1086[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1087[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1088[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1089[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1090[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1091[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1092[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1093[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1094[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1095[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1096[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1097[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1098[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1099[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1100[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1101[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1102[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1103[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1104[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1105[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1106[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1107[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1108[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1109[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1110[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1111[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1112[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1113[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1114[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1115[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1116[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1117[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1118[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1119[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1120[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1121[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1122[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1123[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1124[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1125[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1126[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1127[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1128[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1129[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1130[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1131[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1132[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1133[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1134[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1135[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1136[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1137[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1138[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1139[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1140[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1141[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1142[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1143[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1144[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1145[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1146[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1147[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1148[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1149[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1150[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1151[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1152[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1153[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1154[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1155[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1156[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1157[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1158[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1159[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1160[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1161[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1162[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1163[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1164[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1165[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1166[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1167[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1168[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1169[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1170[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1171[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1172[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1173[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1174[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1175[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1176[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1177[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1178[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1179[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1180[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1181[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1182[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1183[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1184[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1185[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1186[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1187[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1188[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1189[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1190[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1191[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1192[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1193[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1194[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1195[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1196[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1197[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1198[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1199[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1200[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1201[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1202[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1203[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1204[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1205[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1206[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1207[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1208[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1209[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1210[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1211[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1212[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1213[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1214[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1215[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1216[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1217[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1218[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1219[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1220[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1221[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1222[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1223[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1224[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1225[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1226[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1227[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1228[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1229[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1230[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1231[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1232[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1233[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1234[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1235[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1236[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1237[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1238[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1239[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1240[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1241[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1242[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1243[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1244[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1245[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1246[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1247[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1248[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1249[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1250[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1251[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1252[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1253[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1254[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1255[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1256[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1257[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1258[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1259[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1260[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1261[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1262[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1263[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1264[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1265[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1266[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1267[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1268[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1269[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1270[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1271[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1272[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1273[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1274[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1275[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1276[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1277[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1278[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1279[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1280[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1281[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1282[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1283[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1284[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1285[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1286[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1287[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1288[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1289[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1290[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1291[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1292[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1293[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1294[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1295[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1296[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1297[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1298[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1299[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1300[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1301[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1302[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1303[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1304[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1305[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1306[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1307[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1308[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1309[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1310[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1311[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1312[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1313[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1314[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1315[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1316[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1317[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1318[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1319[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1320[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1321[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1322[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1323[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1324[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1325[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1326[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1327[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1328[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1329[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1330[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1331[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1332[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1333[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1334[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1335[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1336[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1337[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1338[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1339[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1340[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1341[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1342[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1343[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1344[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1345[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1346[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1347[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1348[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1349[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1350[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1351[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1352[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1353[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1354[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1355[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1356[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1357[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1358[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1359[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1360[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1361[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1362[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1363[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1364[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1365[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1366[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1367[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1368[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1369[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1370[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1371[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1372[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1373[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1374[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1375[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1376[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1377[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1378[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1379[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1380[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1381[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1382[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1383[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1384[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1385[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1386[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1387[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1388[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1389[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1390[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1391[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1392[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1393[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1394[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1395[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1396[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1397[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1398[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1399[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1400[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1401[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1402[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1403[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1404[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1405[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1406[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1407[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1408[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1409[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1410[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1411[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1412[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1413[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1414[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1415[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1416[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1417[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1418[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1419[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1420[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1421[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1422[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1423[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1424[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1425[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1426[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1427[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1428[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1429[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1430[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1431[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1432[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1433[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1434[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1435[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1436[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1437[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1438[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1439[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1440[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1441[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1442[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1443[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1444[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1445[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1446[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1447[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1448[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1449[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1450[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1451[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1452[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1453[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1454[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1455[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1456[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1457[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1458[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1459[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1460[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1461[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1462[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1463[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1464[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1465[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1466[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1467[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1468[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1469[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1470[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1471[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1472[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1473[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1474[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1475[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1476[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1477[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1478[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1479[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1480[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1481[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1482[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1483[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1484[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1485[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1486[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1487[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1488[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1489[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1490[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1491[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1492[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1493[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1494[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1495[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1496[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1497[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1498[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1499[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1500[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1501[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1502[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1503[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1504[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1505[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1506[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1507[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1508[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1509[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1510[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1511[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1512[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1513[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1514[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1515[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1516[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1517[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1518[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1519[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1520[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1521[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1522[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1523[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1524[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1525[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1526[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1527[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1528[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1529[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1530[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1531[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1532[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1533[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1534[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1535[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1536[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1537[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1538[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1539[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1540[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1541[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1542[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1543[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1544[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1545[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1546[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1547[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1548[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1549[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1550[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1551[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1552[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1553[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1554[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1555[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1556[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1557[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1558[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1559[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1560[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1561[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1562[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1563[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1564[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1565[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1566[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1567[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1568[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1569[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1570[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1571[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1572[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1573[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1574[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1575[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1576[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1577[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1578[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1579[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1580[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1581[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1582[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1583[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1584[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1585[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1586[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1587[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1588[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1589[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1590[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1591[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1592[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1593[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1594[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1595[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1596[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1597[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1598[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1599[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1600[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1601[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1602[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1603[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1604[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1605[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1606[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1607[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1608[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1609[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1610[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1611[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1612[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1613[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1614[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1615[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1616[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1617[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1618[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1619[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1620[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1621[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1622[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1623[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1624[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1625[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1626[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1627[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1628[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1629[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1630[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1631[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1632[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1633[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1634[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1635[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1636[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1637[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1638[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1639[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1640[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1641[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1642[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1643[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1644[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1645[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1646[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1647[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1648[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1649[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1650[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1651[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1652[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1653[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1654[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1655[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1656[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1657[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1658[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1659[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1660[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1661[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1662[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1663[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1664[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1665[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1666[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1667[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1668[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1669[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1670[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1671[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1672[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1673[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1674[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1675[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1676[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1677[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1678[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1679[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1680[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1681[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1682[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1683[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1684[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1685[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1686[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1687[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1688[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1689[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1690[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1691[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1692[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1693[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1694[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1695[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1696[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1697[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1698[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1699[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1700[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1701[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1702[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1703[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1704[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1705[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1706[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1707[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1708[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1709[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1710[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1711[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1712[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1713[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1714[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1715[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1716[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1717[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1718[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1719[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1720[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1721[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1722[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1723[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1724[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1725[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1726[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1727[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1728[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1729[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1730[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1731[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1732[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1733[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1734[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1735[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1736[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1737[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1738[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1739[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1740[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1741[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1742[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1743[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1744[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1745[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1746[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1747[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1748[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1749[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1750[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1751[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1752[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1753[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1754[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1755[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1756[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1757[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1758[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1759[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1760[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1761[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1762[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1763[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1764[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1765[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1766[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1767[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1768[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1769[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1770[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1771[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1772[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1773[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1774[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1775[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1776[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1777[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1778[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1779[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1780[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1781[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1782[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1783[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1784[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1785[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1786[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1787[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1788[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1789[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1790[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1791[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1792[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1793[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1794[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1795[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1796[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1797[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1798[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1799[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1800[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1801[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1802[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1803[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1804[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1805[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1806[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1807[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1808[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1809[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1810[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1811[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1812[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1813[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1814[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1815[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1816[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1817[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1818[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1819[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1820[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1821[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1822[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1823[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1824[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1825[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1826[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1827[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1828[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1829[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1830[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1831[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1832[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1833[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1834[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1835[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1836[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1837[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1838[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1839[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1840[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1841[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1842[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1843[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1844[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1845[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1846[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1847[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1848[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1849[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1850[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1851[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1852[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1853[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1854[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1855[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1856[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1857[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1858[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1859[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1860[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1861[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1862[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1863[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1864[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1865[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1866[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1867[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1868[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1869[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1870[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1871[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1872[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1873[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1874[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1875[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1876[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1877[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1878[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1879[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1880[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1881[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1882[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1883[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1884[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1885[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1886[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1887[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1888[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1889[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1890[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1891[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1892[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1893[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1894[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1895[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1896[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1897[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1898[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1899[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1900[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1901[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1902[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1903[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1904[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1905[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1906[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1907[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1908[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1909[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1910[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1911[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1912[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1913[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1914[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1915[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1916[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1917[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1918[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1919[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1920[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1921[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1922[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1923[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1924[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1925[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1926[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1927[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1928[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1929[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1930[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1931[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1932[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1933[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1934[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1935[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1936[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1937[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1938[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1939[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1940[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1941[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1942[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1943[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1944[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1945[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1946[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1947[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1948[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1949[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1950[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1951[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1952[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1953[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1954[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1955[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1956[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1957[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1958[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1959[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1960[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1961[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1962[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1963[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1964[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1965[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1966[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1967[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1968[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1969[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1970[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1971[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1972[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1973[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1974[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1975[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1976[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1977[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1978[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1979[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1980[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1981[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1982[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1983[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1984[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1985[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1986[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1987[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1988[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1989[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1990[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1991[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1992[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1993[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1994[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1995[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1996[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1997[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1998[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_1999[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2000[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2001[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2002[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2003[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2004[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2005[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2006[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2007[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2008[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2009[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2010[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2011[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2012[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2013[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2014[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2015[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2016[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2017[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2018[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2019[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2020[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2021[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2022[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2023[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2024[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2025[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2026[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2027[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2028[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2029[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2030[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2031[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2032[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2033[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2034[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2035[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2036[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2037[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2038[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2039[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2040[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2041[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2042[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2043[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2044[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2045[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2046[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2047[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2048[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2049[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2050[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2051[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2052[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2053[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2054[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2055[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2056[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2057[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2058[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2059[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2060[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2061[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2062[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2063[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2064[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2065[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2066[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2067[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2068[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2069[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2070[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2071[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2072[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2073[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2074[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2075[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2076[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2077[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2078[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2079[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2080[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2081[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2082[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2083[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2084[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2085[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2086[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2087[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2088[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2089[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2090[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2091[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2092[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2093[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2094[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2095[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2096[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2097[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2098[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2099[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2100[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2101[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2102[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2103[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2104[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2105[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2106[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2107[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2108[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2109[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2110[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2111[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2112[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2113[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2114[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2115[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2116[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2117[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2118[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2119[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2120[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2121[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2122[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2123[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2124[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2125[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2126[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2127[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2128[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2129[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2130[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2131[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2132[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2133[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2134[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2135[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2136[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2137[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2138[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2139[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2140[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2141[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2142[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2143[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2144[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2145[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2146[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2147[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2148[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2149[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2150[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2151[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2152[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2153[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2154[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2155[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2156[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2157[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2158[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2159[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2160[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2161[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2162[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2163[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2164[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2165[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2166[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2167[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2168[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2169[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2170[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2171[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2172[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2173[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2174[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2175[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2176[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2177[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2178[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2179[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2180[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2181[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2182[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2183[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2184[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2185[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2186[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2187[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2188[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2189[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};
Primitive frame_2190[] = {
    {CIRCLE, 0.4219f, 0.4948f, 0.5619f, 0.0000f},
    {RECT, 0.8711f, 0.3438f, 0.1289f, 0.3438f},
    {CIRCLE, 0.8867f, 0.8948f, 0.1272f, 0.0000f},
};

int frame_counts[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 1, 1, 2, 3, 4, 3, 3, 4, 4, 2, 3, 3, 3, 4, 2, 3, 3, 2, 2, 3, 3, 4, 3, 3, 3, 3, 1, 3, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 3, 2, 2, 4, 5, 3, 2, 1, 1, 1, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 5, 4, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 3, 2, 3, 2, 3, 3, 4, 3, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
Primitive* all_frames[] = {frame_0, frame_1, frame_2, frame_3, frame_4, frame_5, frame_6, frame_7, frame_8, frame_9, frame_10, frame_11, frame_12, frame_13, frame_14, frame_15, frame_16, frame_17, frame_18, frame_19, frame_20, frame_21, frame_22, frame_23, frame_24, frame_25, frame_26, frame_27, frame_28, frame_29, frame_30, frame_31, frame_32, frame_33, frame_34, frame_35, frame_36, frame_37, frame_38, frame_39, frame_40, frame_41, frame_42, frame_43, frame_44, frame_45, frame_46, frame_47, frame_48, frame_49, frame_50, frame_51, frame_52, frame_53, frame_54, frame_55, frame_56, frame_57, frame_58, frame_59, frame_60, frame_61, frame_62, frame_63, frame_64, frame_65, frame_66, frame_67, frame_68, frame_69, frame_70, frame_71, frame_72, frame_73, frame_74, frame_75, frame_76, frame_77, frame_78, frame_79, frame_80, frame_81, frame_82, frame_83, frame_84, frame_85, frame_86, frame_87, frame_88, frame_89, frame_90, frame_91, frame_92, frame_93, frame_94, frame_95, frame_96, frame_97, frame_98, frame_99, frame_100, frame_101, frame_102, frame_103, frame_104, frame_105, frame_106, frame_107, frame_108, frame_109, frame_110, frame_111, frame_112, frame_113, frame_114, frame_115, frame_116, frame_117, frame_118, frame_119, frame_120, frame_121, frame_122, frame_123, frame_124, frame_125, frame_126, frame_127, frame_128, frame_129, frame_130, frame_131, frame_132, frame_133, frame_134, frame_135, frame_136, frame_137, frame_138, frame_139, frame_140, frame_141, frame_142, frame_143, frame_144, frame_145, frame_146, frame_147, frame_148, frame_149, frame_150, frame_151, frame_152, frame_153, frame_154, frame_155, frame_156, frame_157, frame_158, frame_159, frame_160, frame_161, frame_162, frame_163, frame_164, frame_165, frame_166, frame_167, frame_168, frame_169, frame_170, frame_171, frame_172, frame_173, frame_174, frame_175, frame_176, frame_177, frame_178, frame_179, frame_180, frame_181, frame_182, frame_183, frame_184, frame_185, frame_186, frame_187, frame_188, frame_189, frame_190, frame_191, frame_192, frame_193, frame_194, frame_195, frame_196, frame_197, frame_198, frame_199, frame_200, frame_201, frame_202, frame_203, frame_204, frame_205, frame_206, frame_207, frame_208, frame_209, frame_210, frame_211, frame_212, frame_213, frame_214, frame_215, frame_216, frame_217, frame_218, frame_219, frame_220, frame_221, frame_222, frame_223, frame_224, frame_225, frame_226, frame_227, frame_228, frame_229, frame_230, frame_231, frame_232, frame_233, frame_234, frame_235, frame_236, frame_237, frame_238, frame_239, frame_240, frame_241, frame_242, frame_243, frame_244, frame_245, frame_246, frame_247, frame_248, frame_249, frame_250, frame_251, frame_252, frame_253, frame_254, frame_255, frame_256, frame_257, frame_258, frame_259, frame_260, frame_261, frame_262, frame_263, frame_264, frame_265, frame_266, frame_267, frame_268, frame_269, frame_270, frame_271, frame_272, frame_273, frame_274, frame_275, frame_276, frame_277, frame_278, frame_279, frame_280, frame_281, frame_282, frame_283, frame_284, frame_285, frame_286, frame_287, frame_288, frame_289, frame_290, frame_291, frame_292, frame_293, frame_294, frame_295, frame_296, frame_297, frame_298, frame_299, frame_300, frame_301, frame_302, frame_303, frame_304, frame_305, frame_306, frame_307, frame_308, frame_309, frame_310, frame_311, frame_312, frame_313, frame_314, frame_315, frame_316, frame_317, frame_318, frame_319, frame_320, frame_321, frame_322, frame_323, frame_324, frame_325, frame_326, frame_327, frame_328, frame_329, frame_330, frame_331, frame_332, frame_333, frame_334, frame_335, frame_336, frame_337, frame_338, frame_339, frame_340, frame_341, frame_342, frame_343, frame_344, frame_345, frame_346, frame_347, frame_348, frame_349, frame_350, frame_351, frame_352, frame_353, frame_354, frame_355, frame_356, frame_357, frame_358, frame_359, frame_360, frame_361, frame_362, frame_363, frame_364, frame_365, frame_366, frame_367, frame_368, frame_369, frame_370, frame_371, frame_372, frame_373, frame_374, frame_375, frame_376, frame_377, frame_378, frame_379, frame_380, frame_381, frame_382, frame_383, frame_384, frame_385, frame_386, frame_387, frame_388, frame_389, frame_390, frame_391, frame_392, frame_393, frame_394, frame_395, frame_396, frame_397, frame_398, frame_399, frame_400, frame_401, frame_402, frame_403, frame_404, frame_405, frame_406, frame_407, frame_408, frame_409, frame_410, frame_411, frame_412, frame_413, frame_414, frame_415, frame_416, frame_417, frame_418, frame_419, frame_420, frame_421, frame_422, frame_423, frame_424, frame_425, frame_426, frame_427, frame_428, frame_429, frame_430, frame_431, frame_432, frame_433, frame_434, frame_435, frame_436, frame_437, frame_438, frame_439, frame_440, frame_441, frame_442, frame_443, frame_444, frame_445, frame_446, frame_447, frame_448, frame_449, frame_450, frame_451, frame_452, frame_453, frame_454, frame_455, frame_456, frame_457, frame_458, frame_459, frame_460, frame_461, frame_462, frame_463, frame_464, frame_465, frame_466, frame_467, frame_468, frame_469, frame_470, frame_471, frame_472, frame_473, frame_474, frame_475, frame_476, frame_477, frame_478, frame_479, frame_480, frame_481, frame_482, frame_483, frame_484, frame_485, frame_486, frame_487, frame_488, frame_489, frame_490, frame_491, frame_492, frame_493, frame_494, frame_495, frame_496, frame_497, frame_498, frame_499, frame_500, frame_501, frame_502, frame_503, frame_504, frame_505, frame_506, frame_507, frame_508, frame_509, frame_510, frame_511, frame_512, frame_513, frame_514, frame_515, frame_516, frame_517, frame_518, frame_519, frame_520, frame_521, frame_522, frame_523, frame_524, frame_525, frame_526, frame_527, frame_528, frame_529, frame_530, frame_531, frame_532, frame_533, frame_534, frame_535, frame_536, frame_537, frame_538, frame_539, frame_540, frame_541, frame_542, frame_543, frame_544, frame_545, frame_546, frame_547, frame_548, frame_549, frame_550, frame_551, frame_552, frame_553, frame_554, frame_555, frame_556, frame_557, frame_558, frame_559, frame_560, frame_561, frame_562, frame_563, frame_564, frame_565, frame_566, frame_567, frame_568, frame_569, frame_570, frame_571, frame_572, frame_573, frame_574, frame_575, frame_576, frame_577, frame_578, frame_579, frame_580, frame_581, frame_582, frame_583, frame_584, frame_585, frame_586, frame_587, frame_588, frame_589, frame_590, frame_591, frame_592, frame_593, frame_594, frame_595, frame_596, frame_597, frame_598, frame_599, frame_600, frame_601, frame_602, frame_603, frame_604, frame_605, frame_606, frame_607, frame_608, frame_609, frame_610, frame_611, frame_612, frame_613, frame_614, frame_615, frame_616, frame_617, frame_618, frame_619, frame_620, frame_621, frame_622, frame_623, frame_624, frame_625, frame_626, frame_627, frame_628, frame_629, frame_630, frame_631, frame_632, frame_633, frame_634, frame_635, frame_636, frame_637, frame_638, frame_639, frame_640, frame_641, frame_642, frame_643, frame_644, frame_645, frame_646, frame_647, frame_648, frame_649, frame_650, frame_651, frame_652, frame_653, frame_654, frame_655, frame_656, frame_657, frame_658, frame_659, frame_660, frame_661, frame_662, frame_663, frame_664, frame_665, frame_666, frame_667, frame_668, frame_669, frame_670, frame_671, frame_672, frame_673, frame_674, frame_675, frame_676, frame_677, frame_678, frame_679, frame_680, frame_681, frame_682, frame_683, frame_684, frame_685, frame_686, frame_687, frame_688, frame_689, frame_690, frame_691, frame_692, frame_693, frame_694, frame_695, frame_696, frame_697, frame_698, frame_699, frame_700, frame_701, frame_702, frame_703, frame_704, frame_705, frame_706, frame_707, frame_708, frame_709, frame_710, frame_711, frame_712, frame_713, frame_714, frame_715, frame_716, frame_717, frame_718, frame_719, frame_720, frame_721, frame_722, frame_723, frame_724, frame_725, frame_726, frame_727, frame_728, frame_729, frame_730, frame_731, frame_732, frame_733, frame_734, frame_735, frame_736, frame_737, frame_738, frame_739, frame_740, frame_741, frame_742, frame_743, frame_744, frame_745, frame_746, frame_747, frame_748, frame_749, frame_750, frame_751, frame_752, frame_753, frame_754, frame_755, frame_756, frame_757, frame_758, frame_759, frame_760, frame_761, frame_762, frame_763, frame_764, frame_765, frame_766, frame_767, frame_768, frame_769, frame_770, frame_771, frame_772, frame_773, frame_774, frame_775, frame_776, frame_777, frame_778, frame_779, frame_780, frame_781, frame_782, frame_783, frame_784, frame_785, frame_786, frame_787, frame_788, frame_789, frame_790, frame_791, frame_792, frame_793, frame_794, frame_795, frame_796, frame_797, frame_798, frame_799, frame_800, frame_801, frame_802, frame_803, frame_804, frame_805, frame_806, frame_807, frame_808, frame_809, frame_810, frame_811, frame_812, frame_813, frame_814, frame_815, frame_816, frame_817, frame_818, frame_819, frame_820, frame_821, frame_822, frame_823, frame_824, frame_825, frame_826, frame_827, frame_828, frame_829, frame_830, frame_831, frame_832, frame_833, frame_834, frame_835, frame_836, frame_837, frame_838, frame_839, frame_840, frame_841, frame_842, frame_843, frame_844, frame_845, frame_846, frame_847, frame_848, frame_849, frame_850, frame_851, frame_852, frame_853, frame_854, frame_855, frame_856, frame_857, frame_858, frame_859, frame_860, frame_861, frame_862, frame_863, frame_864, frame_865, frame_866, frame_867, frame_868, frame_869, frame_870, frame_871, frame_872, frame_873, frame_874, frame_875, frame_876, frame_877, frame_878, frame_879, frame_880, frame_881, frame_882, frame_883, frame_884, frame_885, frame_886, frame_887, frame_888, frame_889, frame_890, frame_891, frame_892, frame_893, frame_894, frame_895, frame_896, frame_897, frame_898, frame_899, frame_900, frame_901, frame_902, frame_903, frame_904, frame_905, frame_906, frame_907, frame_908, frame_909, frame_910, frame_911, frame_912, frame_913, frame_914, frame_915, frame_916, frame_917, frame_918, frame_919, frame_920, frame_921, frame_922, frame_923, frame_924, frame_925, frame_926, frame_927, frame_928, frame_929, frame_930, frame_931, frame_932, frame_933, frame_934, frame_935, frame_936, frame_937, frame_938, frame_939, frame_940, frame_941, frame_942, frame_943, frame_944, frame_945, frame_946, frame_947, frame_948, frame_949, frame_950, frame_951, frame_952, frame_953, frame_954, frame_955, frame_956, frame_957, frame_958, frame_959, frame_960, frame_961, frame_962, frame_963, frame_964, frame_965, frame_966, frame_967, frame_968, frame_969, frame_970, frame_971, frame_972, frame_973, frame_974, frame_975, frame_976, frame_977, frame_978, frame_979, frame_980, frame_981, frame_982, frame_983, frame_984, frame_985, frame_986, frame_987, frame_988, frame_989, frame_990, frame_991, frame_992, frame_993, frame_994, frame_995, frame_996, frame_997, frame_998, frame_999, frame_1000, frame_1001, frame_1002, frame_1003, frame_1004, frame_1005, frame_1006, frame_1007, frame_1008, frame_1009, frame_1010, frame_1011, frame_1012, frame_1013, frame_1014, frame_1015, frame_1016, frame_1017, frame_1018, frame_1019, frame_1020, frame_1021, frame_1022, frame_1023, frame_1024, frame_1025, frame_1026, frame_1027, frame_1028, frame_1029, frame_1030, frame_1031, frame_1032, frame_1033, frame_1034, frame_1035, frame_1036, frame_1037, frame_1038, frame_1039, frame_1040, frame_1041, frame_1042, frame_1043, frame_1044, frame_1045, frame_1046, frame_1047, frame_1048, frame_1049, frame_1050, frame_1051, frame_1052, frame_1053, frame_1054, frame_1055, frame_1056, frame_1057, frame_1058, frame_1059, frame_1060, frame_1061, frame_1062, frame_1063, frame_1064, frame_1065, frame_1066, frame_1067, frame_1068, frame_1069, frame_1070, frame_1071, frame_1072, frame_1073, frame_1074, frame_1075, frame_1076, frame_1077, frame_1078, frame_1079, frame_1080, frame_1081, frame_1082, frame_1083, frame_1084, frame_1085, frame_1086, frame_1087, frame_1088, frame_1089, frame_1090, frame_1091, frame_1092, frame_1093, frame_1094, frame_1095, frame_1096, frame_1097, frame_1098, frame_1099, frame_1100, frame_1101, frame_1102, frame_1103, frame_1104, frame_1105, frame_1106, frame_1107, frame_1108, frame_1109, frame_1110, frame_1111, frame_1112, frame_1113, frame_1114, frame_1115, frame_1116, frame_1117, frame_1118, frame_1119, frame_1120, frame_1121, frame_1122, frame_1123, frame_1124, frame_1125, frame_1126, frame_1127, frame_1128, frame_1129, frame_1130, frame_1131, frame_1132, frame_1133, frame_1134, frame_1135, frame_1136, frame_1137, frame_1138, frame_1139, frame_1140, frame_1141, frame_1142, frame_1143, frame_1144, frame_1145, frame_1146, frame_1147, frame_1148, frame_1149, frame_1150, frame_1151, frame_1152, frame_1153, frame_1154, frame_1155, frame_1156, frame_1157, frame_1158, frame_1159, frame_1160, frame_1161, frame_1162, frame_1163, frame_1164, frame_1165, frame_1166, frame_1167, frame_1168, frame_1169, frame_1170, frame_1171, frame_1172, frame_1173, frame_1174, frame_1175, frame_1176, frame_1177, frame_1178, frame_1179, frame_1180, frame_1181, frame_1182, frame_1183, frame_1184, frame_1185, frame_1186, frame_1187, frame_1188, frame_1189, frame_1190, frame_1191, frame_1192, frame_1193, frame_1194, frame_1195, frame_1196, frame_1197, frame_1198, frame_1199, frame_1200, frame_1201, frame_1202, frame_1203, frame_1204, frame_1205, frame_1206, frame_1207, frame_1208, frame_1209, frame_1210, frame_1211, frame_1212, frame_1213, frame_1214, frame_1215, frame_1216, frame_1217, frame_1218, frame_1219, frame_1220, frame_1221, frame_1222, frame_1223, frame_1224, frame_1225, frame_1226, frame_1227, frame_1228, frame_1229, frame_1230, frame_1231, frame_1232, frame_1233, frame_1234, frame_1235, frame_1236, frame_1237, frame_1238, frame_1239, frame_1240, frame_1241, frame_1242, frame_1243, frame_1244, frame_1245, frame_1246, frame_1247, frame_1248, frame_1249, frame_1250, frame_1251, frame_1252, frame_1253, frame_1254, frame_1255, frame_1256, frame_1257, frame_1258, frame_1259, frame_1260, frame_1261, frame_1262, frame_1263, frame_1264, frame_1265, frame_1266, frame_1267, frame_1268, frame_1269, frame_1270, frame_1271, frame_1272, frame_1273, frame_1274, frame_1275, frame_1276, frame_1277, frame_1278, frame_1279, frame_1280, frame_1281, frame_1282, frame_1283, frame_1284, frame_1285, frame_1286, frame_1287, frame_1288, frame_1289, frame_1290, frame_1291, frame_1292, frame_1293, frame_1294, frame_1295, frame_1296, frame_1297, frame_1298, frame_1299, frame_1300, frame_1301, frame_1302, frame_1303, frame_1304, frame_1305, frame_1306, frame_1307, frame_1308, frame_1309, frame_1310, frame_1311, frame_1312, frame_1313, frame_1314, frame_1315, frame_1316, frame_1317, frame_1318, frame_1319, frame_1320, frame_1321, frame_1322, frame_1323, frame_1324, frame_1325, frame_1326, frame_1327, frame_1328, frame_1329, frame_1330, frame_1331, frame_1332, frame_1333, frame_1334, frame_1335, frame_1336, frame_1337, frame_1338, frame_1339, frame_1340, frame_1341, frame_1342, frame_1343, frame_1344, frame_1345, frame_1346, frame_1347, frame_1348, frame_1349, frame_1350, frame_1351, frame_1352, frame_1353, frame_1354, frame_1355, frame_1356, frame_1357, frame_1358, frame_1359, frame_1360, frame_1361, frame_1362, frame_1363, frame_1364, frame_1365, frame_1366, frame_1367, frame_1368, frame_1369, frame_1370, frame_1371, frame_1372, frame_1373, frame_1374, frame_1375, frame_1376, frame_1377, frame_1378, frame_1379, frame_1380, frame_1381, frame_1382, frame_1383, frame_1384, frame_1385, frame_1386, frame_1387, frame_1388, frame_1389, frame_1390, frame_1391, frame_1392, frame_1393, frame_1394, frame_1395, frame_1396, frame_1397, frame_1398, frame_1399, frame_1400, frame_1401, frame_1402, frame_1403, frame_1404, frame_1405, frame_1406, frame_1407, frame_1408, frame_1409, frame_1410, frame_1411, frame_1412, frame_1413, frame_1414, frame_1415, frame_1416, frame_1417, frame_1418, frame_1419, frame_1420, frame_1421, frame_1422, frame_1423, frame_1424, frame_1425, frame_1426, frame_1427, frame_1428, frame_1429, frame_1430, frame_1431, frame_1432, frame_1433, frame_1434, frame_1435, frame_1436, frame_1437, frame_1438, frame_1439, frame_1440, frame_1441, frame_1442, frame_1443, frame_1444, frame_1445, frame_1446, frame_1447, frame_1448, frame_1449, frame_1450, frame_1451, frame_1452, frame_1453, frame_1454, frame_1455, frame_1456, frame_1457, frame_1458, frame_1459, frame_1460, frame_1461, frame_1462, frame_1463, frame_1464, frame_1465, frame_1466, frame_1467, frame_1468, frame_1469, frame_1470, frame_1471, frame_1472, frame_1473, frame_1474, frame_1475, frame_1476, frame_1477, frame_1478, frame_1479, frame_1480, frame_1481, frame_1482, frame_1483, frame_1484, frame_1485, frame_1486, frame_1487, frame_1488, frame_1489, frame_1490, frame_1491, frame_1492, frame_1493, frame_1494, frame_1495, frame_1496, frame_1497, frame_1498, frame_1499, frame_1500, frame_1501, frame_1502, frame_1503, frame_1504, frame_1505, frame_1506, frame_1507, frame_1508, frame_1509, frame_1510, frame_1511, frame_1512, frame_1513, frame_1514, frame_1515, frame_1516, frame_1517, frame_1518, frame_1519, frame_1520, frame_1521, frame_1522, frame_1523, frame_1524, frame_1525, frame_1526, frame_1527, frame_1528, frame_1529, frame_1530, frame_1531, frame_1532, frame_1533, frame_1534, frame_1535, frame_1536, frame_1537, frame_1538, frame_1539, frame_1540, frame_1541, frame_1542, frame_1543, frame_1544, frame_1545, frame_1546, frame_1547, frame_1548, frame_1549, frame_1550, frame_1551, frame_1552, frame_1553, frame_1554, frame_1555, frame_1556, frame_1557, frame_1558, frame_1559, frame_1560, frame_1561, frame_1562, frame_1563, frame_1564, frame_1565, frame_1566, frame_1567, frame_1568, frame_1569, frame_1570, frame_1571, frame_1572, frame_1573, frame_1574, frame_1575, frame_1576, frame_1577, frame_1578, frame_1579, frame_1580, frame_1581, frame_1582, frame_1583, frame_1584, frame_1585, frame_1586, frame_1587, frame_1588, frame_1589, frame_1590, frame_1591, frame_1592, frame_1593, frame_1594, frame_1595, frame_1596, frame_1597, frame_1598, frame_1599, frame_1600, frame_1601, frame_1602, frame_1603, frame_1604, frame_1605, frame_1606, frame_1607, frame_1608, frame_1609, frame_1610, frame_1611, frame_1612, frame_1613, frame_1614, frame_1615, frame_1616, frame_1617, frame_1618, frame_1619, frame_1620, frame_1621, frame_1622, frame_1623, frame_1624, frame_1625, frame_1626, frame_1627, frame_1628, frame_1629, frame_1630, frame_1631, frame_1632, frame_1633, frame_1634, frame_1635, frame_1636, frame_1637, frame_1638, frame_1639, frame_1640, frame_1641, frame_1642, frame_1643, frame_1644, frame_1645, frame_1646, frame_1647, frame_1648, frame_1649, frame_1650, frame_1651, frame_1652, frame_1653, frame_1654, frame_1655, frame_1656, frame_1657, frame_1658, frame_1659, frame_1660, frame_1661, frame_1662, frame_1663, frame_1664, frame_1665, frame_1666, frame_1667, frame_1668, frame_1669, frame_1670, frame_1671, frame_1672, frame_1673, frame_1674, frame_1675, frame_1676, frame_1677, frame_1678, frame_1679, frame_1680, frame_1681, frame_1682, frame_1683, frame_1684, frame_1685, frame_1686, frame_1687, frame_1688, frame_1689, frame_1690, frame_1691, frame_1692, frame_1693, frame_1694, frame_1695, frame_1696, frame_1697, frame_1698, frame_1699, frame_1700, frame_1701, frame_1702, frame_1703, frame_1704, frame_1705, frame_1706, frame_1707, frame_1708, frame_1709, frame_1710, frame_1711, frame_1712, frame_1713, frame_1714, frame_1715, frame_1716, frame_1717, frame_1718, frame_1719, frame_1720, frame_1721, frame_1722, frame_1723, frame_1724, frame_1725, frame_1726, frame_1727, frame_1728, frame_1729, frame_1730, frame_1731, frame_1732, frame_1733, frame_1734, frame_1735, frame_1736, frame_1737, frame_1738, frame_1739, frame_1740, frame_1741, frame_1742, frame_1743, frame_1744, frame_1745, frame_1746, frame_1747, frame_1748, frame_1749, frame_1750, frame_1751, frame_1752, frame_1753, frame_1754, frame_1755, frame_1756, frame_1757, frame_1758, frame_1759, frame_1760, frame_1761, frame_1762, frame_1763, frame_1764, frame_1765, frame_1766, frame_1767, frame_1768, frame_1769, frame_1770, frame_1771, frame_1772, frame_1773, frame_1774, frame_1775, frame_1776, frame_1777, frame_1778, frame_1779, frame_1780, frame_1781, frame_1782, frame_1783, frame_1784, frame_1785, frame_1786, frame_1787, frame_1788, frame_1789, frame_1790, frame_1791, frame_1792, frame_1793, frame_1794, frame_1795, frame_1796, frame_1797, frame_1798, frame_1799, frame_1800, frame_1801, frame_1802, frame_1803, frame_1804, frame_1805, frame_1806, frame_1807, frame_1808, frame_1809, frame_1810, frame_1811, frame_1812, frame_1813, frame_1814, frame_1815, frame_1816, frame_1817, frame_1818, frame_1819, frame_1820, frame_1821, frame_1822, frame_1823, frame_1824, frame_1825, frame_1826, frame_1827, frame_1828, frame_1829, frame_1830, frame_1831, frame_1832, frame_1833, frame_1834, frame_1835, frame_1836, frame_1837, frame_1838, frame_1839, frame_1840, frame_1841, frame_1842, frame_1843, frame_1844, frame_1845, frame_1846, frame_1847, frame_1848, frame_1849, frame_1850, frame_1851, frame_1852, frame_1853, frame_1854, frame_1855, frame_1856, frame_1857, frame_1858, frame_1859, frame_1860, frame_1861, frame_1862, frame_1863, frame_1864, frame_1865, frame_1866, frame_1867, frame_1868, frame_1869, frame_1870, frame_1871, frame_1872, frame_1873, frame_1874, frame_1875, frame_1876, frame_1877, frame_1878, frame_1879, frame_1880, frame_1881, frame_1882, frame_1883, frame_1884, frame_1885, frame_1886, frame_1887, frame_1888, frame_1889, frame_1890, frame_1891, frame_1892, frame_1893, frame_1894, frame_1895, frame_1896, frame_1897, frame_1898, frame_1899, frame_1900, frame_1901, frame_1902, frame_1903, frame_1904, frame_1905, frame_1906, frame_1907, frame_1908, frame_1909, frame_1910, frame_1911, frame_1912, frame_1913, frame_1914, frame_1915, frame_1916, frame_1917, frame_1918, frame_1919, frame_1920, frame_1921, frame_1922, frame_1923, frame_1924, frame_1925, frame_1926, frame_1927, frame_1928, frame_1929, frame_1930, frame_1931, frame_1932, frame_1933, frame_1934, frame_1935, frame_1936, frame_1937, frame_1938, frame_1939, frame_1940, frame_1941, frame_1942, frame_1943, frame_1944, frame_1945, frame_1946, frame_1947, frame_1948, frame_1949, frame_1950, frame_1951, frame_1952, frame_1953, frame_1954, frame_1955, frame_1956, frame_1957, frame_1958, frame_1959, frame_1960, frame_1961, frame_1962, frame_1963, frame_1964, frame_1965, frame_1966, frame_1967, frame_1968, frame_1969, frame_1970, frame_1971, frame_1972, frame_1973, frame_1974, frame_1975, frame_1976, frame_1977, frame_1978, frame_1979, frame_1980, frame_1981, frame_1982, frame_1983, frame_1984, frame_1985, frame_1986, frame_1987, frame_1988, frame_1989, frame_1990, frame_1991, frame_1992, frame_1993, frame_1994, frame_1995, frame_1996, frame_1997, frame_1998, frame_1999, frame_2000, frame_2001, frame_2002, frame_2003, frame_2004, frame_2005, frame_2006, frame_2007, frame_2008, frame_2009, frame_2010, frame_2011, frame_2012, frame_2013, frame_2014, frame_2015, frame_2016, frame_2017, frame_2018, frame_2019, frame_2020, frame_2021, frame_2022, frame_2023, frame_2024, frame_2025, frame_2026, frame_2027, frame_2028, frame_2029, frame_2030, frame_2031, frame_2032, frame_2033, frame_2034, frame_2035, frame_2036, frame_2037, frame_2038, frame_2039, frame_2040, frame_2041, frame_2042, frame_2043, frame_2044, frame_2045, frame_2046, frame_2047, frame_2048, frame_2049, frame_2050, frame_2051, frame_2052, frame_2053, frame_2054, frame_2055, frame_2056, frame_2057, frame_2058, frame_2059, frame_2060, frame_2061, frame_2062, frame_2063, frame_2064, frame_2065, frame_2066, frame_2067, frame_2068, frame_2069, frame_2070, frame_2071, frame_2072, frame_2073, frame_2074, frame_2075, frame_2076, frame_2077, frame_2078, frame_2079, frame_2080, frame_2081, frame_2082, frame_2083, frame_2084, frame_2085, frame_2086, frame_2087, frame_2088, frame_2089, frame_2090, frame_2091, frame_2092, frame_2093, frame_2094, frame_2095, frame_2096, frame_2097, frame_2098, frame_2099, frame_2100, frame_2101, frame_2102, frame_2103, frame_2104, frame_2105, frame_2106, frame_2107, frame_2108, frame_2109, frame_2110, frame_2111, frame_2112, frame_2113, frame_2114, frame_2115, frame_2116, frame_2117, frame_2118, frame_2119, frame_2120, frame_2121, frame_2122, frame_2123, frame_2124, frame_2125, frame_2126, frame_2127, frame_2128, frame_2129, frame_2130, frame_2131, frame_2132, frame_2133, frame_2134, frame_2135, frame_2136, frame_2137, frame_2138, frame_2139, frame_2140, frame_2141, frame_2142, frame_2143, frame_2144, frame_2145, frame_2146, frame_2147, frame_2148, frame_2149, frame_2150, frame_2151, frame_2152, frame_2153, frame_2154, frame_2155, frame_2156, frame_2157, frame_2158, frame_2159, frame_2160, frame_2161, frame_2162, frame_2163, frame_2164, frame_2165, frame_2166, frame_2167, frame_2168, frame_2169, frame_2170, frame_2171, frame_2172, frame_2173, frame_2174, frame_2175, frame_2176, frame_2177, frame_2178, frame_2179, frame_2180, frame_2181, frame_2182, frame_2183, frame_2184, frame_2185, frame_2186, frame_2187, frame_2188, frame_2189, frame_2190};

float eval_sdf(float x, float y, Primitive* prims, int count) {
    float d = 1e9;
    for (int i = 0; i < count; ++i) {
        Primitive p = prims[i];
        float dist = 1e9;
        if (p.type == CIRCLE) {
            float dx = x - p.x, dy = y - p.y;
            dist = sqrtf(dx*dx + dy*dy) - p.w;
        } else { // RECT
            float dx = fabsf(x - p.x) - p.w;
            float dy = fabsf(y - p.y) - p.h;
            float ax = dx > 0.0f ? dx : 0.0f;
            float ay = dy > 0.0f ? dy : 0.0f;
            dist = sqrtf(ax*ax + ay*ay);
            if(dx <= 0.0f && dy <= 0.0f) dist = fmaxf(dx, dy);
        }
        d = fminf(d, dist);
    }
    return d;
}

int main() {
    int total_frames = sizeof(all_frames)/sizeof(Primitive*);
    while (1) {
        for (int f = 0; f < total_frames; ++f) {
            Primitive* prims = all_frames[f];
            int count = frame_counts[f];
            printf("\033[H"); // Move cursor to top-left
            for (int j = 0; j < HEIGHT; ++j) {
                for (int i = 0; i < WIDTH; ++i) {
                    float x = ((float)i + 0.5f) / WIDTH;
                    float y = ((float)j + 0.5f) / HEIGHT;
                    float d = eval_sdf(x, y, prims, count);
                    putchar(d <= 0.0f ? '#' : ' ');
                }
                putchar('\n');
            }
            fflush(stdout);
            usleep(100000); // 100ms delay
        }
    }
    return 0;
}
