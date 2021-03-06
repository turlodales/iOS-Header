//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMediaRequest.h>

@class PHImageDisplaySpec, PHVideoRequestBehaviorSpec, PHVideoResult, PLProgressFollower;
@protocol PHMediaRequestDelegate;

@interface PHVideoRequest : PHMediaRequest
{
    PHVideoResult *_videoResult;
    PLProgressFollower *_progressFollower;
    struct os_unfair_lock_s _lock;
    id <PHMediaRequestDelegate> _delegate;
    PHImageDisplaySpec *_displaySpec;
    PHVideoRequestBehaviorSpec *_behaviorSpec;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec; // @synthesize behaviorSpec=_behaviorSpec;
@property(readonly, nonatomic) PHImageDisplaySpec *displaySpec; // @synthesize displaySpec=_displaySpec;
@property(readonly, nonatomic) __weak id <PHMediaRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startRequest;
- (void)cancel;
- (_Bool)isNetworkAccessAllowed;
- (_Bool)isSynchronous;
- (void)_handleResultVideoURL:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)_finish;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSpec:(id)arg7 delegate:(id)arg8;

@end

