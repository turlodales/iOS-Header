//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BrookDataCollection/BRKWriter.h>

#import <BrookDataCollection/BRKAudioWriter-Protocol.h>

@class NSString;

@interface BRKAudioFileWriter : BRKWriter <BRKAudioWriter>
{
    struct OpaqueExtAudioFile *_audioFile;
    struct AudioStreamBasicDescription _format;
}

- (void)_lock_close;
- (void)close;
- (void)_lock_writeSamples:(const short *)arg1 count:(unsigned long long)arg2;
- (void)writeSamples:(const short *)arg1 count:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

