/*
* Copyright(c) 2018 Intel Corporation
* SPDX - License - Identifier: BSD - 2 - Clause - Patent
*/

#ifndef EbPictureManagerReorderQueue_h
#define EbPictureManagerReorderQueue_h

#include "EbTypes.h"
#include "EbSystemResourceManager.h"

/************************************************
 * Packetization Reorder Queue Entry
 ************************************************/
typedef struct PictureManagerReorderEntry_s {
    EB_U64                                pictureNumber;    
    EbObjectWrapper_t                    *parentPcsWrapperPtr;
} PictureManagerReorderEntry_t;   

extern EB_ERRORTYPE PictureManagerReorderEntryCtor(   
    PictureManagerReorderEntry_t       **entryDblPtr,
    EB_U32                                pictureNumber);

#endif //EbPictureManagerReorderQueue_h
