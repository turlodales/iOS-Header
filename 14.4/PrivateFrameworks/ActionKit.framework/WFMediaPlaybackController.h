//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFMediaPlaybackController : NSObject
{
}

+ (id)songPropertySet;
+ (id)bundleIdentifierForMediaPlaybackApplication:(unsigned long long)arg1;
- (void)getActivePlayerPathWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)queueItemsWithIdentifierSets:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queueiTunesStoreItems:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queueMediaItems:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPreferredMediaControlOriginWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPreferredPlaybackOriginWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCurrentlyPlayingMediaWithCompletion:(CDUnknownBlockType)arg1;
- (void)getLocalPlaybackCapabilityWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)getPreferredMediaControlDestinationForOutputDeviceUIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getPreferredPlaybackDestinationForPlaybackArchive:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

