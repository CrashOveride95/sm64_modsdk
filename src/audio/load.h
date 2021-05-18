#ifndef AUDIO_LOAD_H
#define AUDIO_LOAD_H

#include <PR/ultratypes.h>

#include "internal.h"

#define AUDIO_FRAME_DMA_QUEUE_SIZE 0x40

#define PRELOAD_BANKS 2
#define PRELOAD_SEQUENCE 1

#define IS_SEQUENCE_CHANNEL_VALID(ptr) ((u32)(ptr) != (u32)&gSequenceChannelNone)

extern struct Note *gNotes;

// Music in SM64 is played using 3 players:
// gSequencePlayers[0] is level background music
// gSequencePlayers[1] is misc music, like the puzzle jingle
// gSequencePlayers[2] is sound
extern struct SequencePlayer gSequencePlayers[SEQUENCE_PLAYERS];

extern struct SequenceChannel gSequenceChannels[SEQUENCE_CHANNELS];
extern struct SequenceChannelLayer gSequenceLayers[SEQUENCE_LAYERS];

extern struct SequenceChannel gSequenceChannelNone;

extern struct AudioListItem gLayerFreeList;
extern struct NotePool gNoteFreeLists;

extern OSMesgQueue gCurrAudioFrameDmaQueue;
extern u32 gSampleDmaNumListItems;
extern ALSeqFile *gAlCtlHeader;
extern ALSeqFile *gAlTbl;
extern ALSeqFile *gSeqFileHeader;
extern u8 *gAlBankSets;

extern struct CtlEntry *gCtlEntries;
#if defined(VERSION_EU) || defined(VERSION_SH)
extern struct AudioBufferParametersEU gAudioBufferParameters;
#endif
extern s32 gAiFrequency;
#ifdef VERSION_SH
extern s16 gCurrAiBufferLength;
extern s32 D_SH_8034F68C;
#endif
extern s32 gMaxAudioCmds;

extern s32 gMaxSimultaneousNotes;
extern s32 gSamplesPerFrameTarget;
extern s32 gMinAiBufferLength;
extern s16 gTempoInternalToExternal;
extern s8 gAudioUpdatesPerFrame; // = 4
extern s8 gSoundMode;

#ifdef VERSION_SH
extern OSMesgQueue gUnkQueue1;

struct UnkStructSH8034EC88 {
    u8 *endAndMediumIdentification;
    struct AudioBankSample *sample;
    u8 *ramAddr;
    u32 encodedInfo;
    s32 isFree;
};

struct PatchStruct {
    s32 bankId1;
    s32 bankId2;
    void *baseAddr1;
    void *baseAddr2;
    s32 medium1;
    s32 medium2;
};

extern struct UnkStructSH8034EC88 D_SH_8034EC88[0x80];
#endif

void audio_dma_partial_copy_async(u32 *devAddr, u8 **vAddr, s32 *remaining, OSMesgQueue *queue, OSIoMesg *mesg);
void decrease_sample_dma_ttls(void);
#ifdef VERSION_SH
void *dma_sample_data(u32 devAddr, u32 size, s32 arg2, u8 *dmaIndexRef, s32 medium);
#else
void *dma_sample_data(u32 devAddr, u32 size, s32 arg2, u8 *dmaIndexRef);
#endif
void init_sample_dma_buffers(s32 arg0);
#if defined(VERSION_SH)
void patch_audio_bank(s32 bankId, struct AudioBank *mem, struct PatchStruct *patchInfo);
#else
void patch_audio_bank(struct AudioBank *mem, u8 *offset, u32 numInstruments, u32 numDrums);
#endif
#ifndef VERSION_SH
void preload_sequence(u32 seqId, u8 preloadMask);
#endif
void load_sequence(u32 player, u32 seqId, s32 loadAsync);

#ifdef VERSION_SH
void func_sh_802f3158(s32 index, s32 arg1, s32 arg2, OSMesgQueue *retQueue);
u8 *func_sh_802f3220(u32 index, u32 *a1);
struct AudioBankSample *func_sh_802f4978(s32 bankId, s32 idx);
void *func_802f3f08(s32 poolIdx, s32 arg1, s32 arg2, s32 arg3, OSMesgQueue *retQueue);
s32 func_sh_802f3368(s32 arg0);
void *func_sh_802f3764(s32 arg0, s32 idx, s32 *arg2);

#endif

#endif // AUDIO_LOAD_H
