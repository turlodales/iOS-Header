//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBusArray, AVAudioFormat, VCAudioIOControllerClient;

__attribute__((visibility("hidden")))
@interface VCSpatialAudioUnit : AUAudioUnit
{
    AVAudioFormat *_format;
    AUAudioUnitBusArray *_outputBusArray;
    AUAudioUnitBusArray *_inputBusArray;
    struct _VCAudioIOControllerIOState _ioState;
    VCAudioIOControllerClient *_client;
    struct opaqueVCAudioBufferList *_renderBuffer;
    struct opaqueVCAudioBufferList *_tempBuffer;
    double _currentTempBufferSampleTime;
}

+ (void)instantiate:(CDUnknownBlockType)arg1;
+ (void)registerAudioUnitDescription;
@property struct _VCAudioIOControllerIOState ioState; // @synthesize ioState=_ioState;
@property struct opaqueVCAudioBufferList *tempBuffer; // @synthesize tempBuffer=_tempBuffer;
@property struct opaqueVCAudioBufferList *renderBuffer; // @synthesize renderBuffer=_renderBuffer;
@property(retain, nonatomic) VCAudioIOControllerClient *client; // @synthesize client=_client;
- (id)inputBusses;
- (id)outputBusses;
- (CDUnknownBlockType)internalRenderBlock;
- (void)deallocateRenderResources;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3 client:(id)arg4;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

