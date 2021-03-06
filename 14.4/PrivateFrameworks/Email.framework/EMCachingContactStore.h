//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, EFLazyCache;

@interface EMCachingContactStore : NSObject
{
    CNContactStore *_cnStore;
    EFLazyCache *_displayNameCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EFLazyCache *displayNameCache; // @synthesize displayNameCache=_displayNameCache;
@property(readonly, nonatomic) CNContactStore *cnStore; // @synthesize cnStore=_cnStore;
- (void)_invalidateDisplayNameCache;
- (id)_fetchDisplayNameForEmailAddress:(id)arg1 abbreviated:(_Bool)arg2;
- (id)displayNameForEmailAddress:(id)arg1 abbreviated:(_Bool)arg2;
- (id)displayNameForEmailAddress:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)init;

@end

