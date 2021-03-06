//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaControls/MediaControlsInvalidatable-Protocol.h>

@class MediaControlsHardwareVolumeManager, NSString;

__attribute__((visibility("hidden")))
@interface _MediaControlsHardwareVolumeManagerAssertion : NSObject <MediaControlsInvalidatable>
{
    MediaControlsHardwareVolumeManager *_volumeManager;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) __weak MediaControlsHardwareVolumeManager *volumeManager; // @synthesize volumeManager=_volumeManager;
- (void)dealloc;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

