//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPausePairedVideoRecordingCommand : CAMCaptureCommand
{
    _Bool __recordingPaused;
}

@property(readonly, nonatomic, getter=_isRecordingPaused) _Bool _recordingPaused; // @synthesize _recordingPaused=__recordingPaused;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordingPaused:(_Bool)arg1;

@end

