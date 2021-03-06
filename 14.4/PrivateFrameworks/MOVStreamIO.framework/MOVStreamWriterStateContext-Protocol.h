//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MOVStreamIO/NSObject-Protocol.h>

@class NSArray, NSError;

@protocol MOVStreamWriterStateContext <NSObject>
@property(retain) NSError *criticalError;
@property(retain) NSArray *movMetadataItems;
- (void)processForceFinishRecording;
- (void)processCancelRecording;
- (void)deleteFileOnCancel;
- (void)deleteMOVFile;
- (void)finishAVWriter;
- (void)processFinishRecording;
- (void)finishAndDrainFifoFirst;
- (void)executePrepareToRecordWithMovieMetadata:(NSArray *)arg1;
@end

