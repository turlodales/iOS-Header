//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PHAsset;

@interface PHMediaRequest : NSObject
{
    unsigned long long _requestIndex;
    _Atomic _Bool _cancelled;
    NSString *_identifierString;
    NSMutableArray *_progresses;
    struct os_unfair_lock_s _lock;
    _Bool _wantsProgress;
    int _requestID;
    unsigned long long _managerID;
    PHAsset *_asset;
    long long _contextType;
    unsigned long long _signpostID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool wantsProgress; // @synthesize wantsProgress=_wantsProgress;
@property(nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property(readonly, nonatomic) long long contextType; // @synthesize contextType=_contextType;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) unsigned long long managerID; // @synthesize managerID=_managerID;
@property(readonly, nonatomic) unsigned long long requestIndex; // @synthesize requestIndex=_requestIndex;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
- (void)recordMetricsWithMetricsHandler:(CDUnknownBlockType)arg1;
- (id)sendResourceRepairRequestForResource:(id)arg1 errorCodes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)sendMakeAvailableRequestForResource:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long downloadIntent;
@property(readonly, nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (void)cancel;
- (void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)startRequest;
- (id)identifierString;
@property(readonly, nonatomic, getter=isSynchronous) _Bool synchronous;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5;

@end

