//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPNetworkObserver : NSObject
{
    int _musicCellularNetworkingAllowedNotifyToken;
    int _videosPreferencesChangedToken;
    long long _networkUsageCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _videosAllowsCellularStreaming;
}

+ (id)sharedNetworkObserver;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isUsingNetwork;
@property(readonly, nonatomic, getter=isStoreCellularNetworkingAllowed) _Bool storeCellularNetworkingAllowed;
@property(nonatomic, getter=isMusicCellularDownloadingAllowed) _Bool musicCellularDownloadingAllowed;
@property(nonatomic, getter=isVideoCellularStreamingAllowed) _Bool videoCellularStreamingAllowed;
@property(nonatomic, getter=isMusicCellularStreamingAllowed) _Bool musicCellularStreamingAllowed;
- (void)endUsingNetwork;
- (void)beginUsingNetwork;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

