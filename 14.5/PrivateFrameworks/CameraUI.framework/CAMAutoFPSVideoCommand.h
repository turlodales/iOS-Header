//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMAutoFPSVideoCommand : CAMCaptureCommand
{
    _Bool _autoFPSVideoEnabled;
}

@property(readonly, nonatomic, getter=isAutoFPSVideoEnabled) _Bool autoFPSVideoEnabled; // @synthesize autoFPSVideoEnabled=_autoFPSVideoEnabled;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAutoFPSVideoEnabled:(_Bool)arg1;

@end

