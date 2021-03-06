//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrustedPeers/NSSecureCoding-Protocol.h>

@class NSArray, NSSet, NSString, TPPolicyVersion;

@interface TPSyncingPolicy : NSObject <NSSecureCoding>
{
    int _syncUserControllableViews;
    NSString *_model;
    TPPolicyVersion *_version;
    NSArray *_keyViewMapping;
    NSSet *_viewList;
    NSSet *_viewsToPiggybackTLKs;
    NSSet *_userControllableViews;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) int syncUserControllableViews; // @synthesize syncUserControllableViews=_syncUserControllableViews;
@property(readonly) NSSet *userControllableViews; // @synthesize userControllableViews=_userControllableViews;
@property(readonly) NSSet *viewsToPiggybackTLKs; // @synthesize viewsToPiggybackTLKs=_viewsToPiggybackTLKs;
@property(readonly) NSSet *viewList; // @synthesize viewList=_viewList;
@property(readonly) NSArray *keyViewMapping; // @synthesize keyViewMapping=_keyViewMapping;
@property(readonly) TPPolicyVersion *version; // @synthesize version=_version;
@property(readonly) NSString *model; // @synthesize model=_model;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isSyncingEnabledForView:(id)arg1;
- (_Bool)syncUserControllableViewsAsBoolean;
- (id)mapDictionaryToView:(id)arg1;
- (id)description;
- (id)initWithModel:(id)arg1 version:(id)arg2 viewList:(id)arg3 userControllableViews:(id)arg4 syncUserControllableViews:(int)arg5 viewsToPiggybackTLKs:(id)arg6 keyViewMapping:(id)arg7;

@end

