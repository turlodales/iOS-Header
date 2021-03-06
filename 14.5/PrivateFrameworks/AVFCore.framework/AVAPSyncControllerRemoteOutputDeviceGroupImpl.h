//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/AVOutputDeviceGroupImpl-Protocol.h>

@class AVOutputDevice, AVOutputDeviceGroup, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVAPSyncControllerRemoteOutputDeviceGroupImpl : NSObject <AVOutputDeviceGroupImpl>
{
    AVOutputDeviceGroup *_parentOutputDeviceGroup;
    struct OpaqueAPSyncController *_syncController;
    struct __CFString *_groupID;
}

- (void).cxx_destruct;
@property __weak AVOutputDeviceGroup *parentOutputDeviceGroup; // @synthesize parentOutputDeviceGroup=_parentOutputDeviceGroup;
- (void)_volumeControlTypeChangedForGroupWithID:(struct __CFString *)arg1;
- (long long)volumeControlType;
- (void)setVolume:(float)arg1;
- (void)_volumeChangedForGroupWithID:(struct __CFString *)arg1;
@property(readonly) float volume;
- (void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(CDUnknownBlockType)arg3;
- (void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly) AVOutputDevice *groupLeader;
- (void)_groupMembersChangedForGroupWithID:(struct __CFString *)arg1;
- (id)_outputDeviceForID:(struct __CFString *)arg1;
- (id)_outputDevicesFromProperty:(struct __CFString *)arg1 withQualifier:(struct __CFString *)arg2;
@property(readonly) NSArray *outputDevices;
@property(readonly) _Bool receivesLongFormAudioFromLocalDevice;
- (void)dealloc;
- (id)initWithRemoteGroupID:(struct __CFString *)arg1 syncController:(struct OpaqueAPSyncController *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

