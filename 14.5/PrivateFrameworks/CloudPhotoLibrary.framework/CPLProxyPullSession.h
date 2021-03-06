//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLProxySession.h>

#import <CloudPhotoLibrary/CPLPullChangeSessionImplementation-Protocol.h>

@class NSString;

@interface CPLProxyPullSession : CPLProxySession <CPLPullChangeSessionImplementation>
{
}

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getChangeBatchWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

